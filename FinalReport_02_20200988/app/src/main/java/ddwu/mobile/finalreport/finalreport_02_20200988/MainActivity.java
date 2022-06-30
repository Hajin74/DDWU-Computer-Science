//과제명: 메모장
//분반: 02분반
//학번: 20200988
//성명: 유하진
//제출일: 2022년 6월 24일
package ddwu.mobile.finalreport.finalreport_02_20200988;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;

import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.AdapterView;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.SearchView;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.List;

public class MainActivity extends AppCompatActivity {

    final static String TAG = "MainActivity";
    final int UPDATE_CODE = 100;
    final int ADD_CODE = 200;

    SearchView searchView;
    ListView listView;
    CustomAdapter customAdapter;
    ArrayList<Memo> memoList = null;
    MemoDBManager memoDBManager;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        searchView = findViewById(R.id.searchView);
        listView = findViewById(R.id.listView);
        memoDBManager = new MemoDBManager(this);
        memoList = memoDBManager.getMemoList();

        customAdapter = new CustomAdapter(this, R.layout.activity_custom_view, memoList);
        listView.setAdapter(customAdapter);

        // 이벤트
        listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> adapterView, View view, int position, long l) {
                Memo memo = memoList.get(position);

                Intent intent = new Intent(MainActivity.this, UpdateActivity.class);
                intent.putExtra("memo", memo);

                startActivityForResult(intent, UPDATE_CODE);
            }
        });

        listView.setOnItemLongClickListener(new AdapterView.OnItemLongClickListener() {
            @Override
            public boolean onItemLongClick(AdapterView<?> adapterView, View view, int i, long l) {
                final int position = i;
                Memo memo = memoList.get(position);

                AlertDialog.Builder builder = new AlertDialog.Builder(MainActivity.this);
                builder.setTitle("메모 삭제")
                        .setMessage(memo.getTitle() + " 메모를 삭제하시겠습니까?")
                        .setPositiveButton("삭제", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialogInterface, int i) {
                                if(memoDBManager.removeMemo(memo.get_id())) {
                                    Toast.makeText(MainActivity.this, memo.getTitle() + " 삭제 완료", Toast.LENGTH_SHORT).show();
                                    memoDBManager.getAllMemo();
                                    customAdapter.notifyDataSetChanged();
                                } else {
                                    Toast.makeText(MainActivity.this, memo.getTitle() + " 삭제 실패", Toast.LENGTH_SHORT).show();
                                }
                            }
                        })
                        .setNegativeButton("취소", null)
                        .setCancelable(false)
                        .show();

                return true;
            }
        });

        searchView.setOnQueryTextListener(new SearchView.OnQueryTextListener() {
            @Override
            public boolean onQueryTextSubmit(String s) {
                MainActivity.this.customAdapter.getFilter().filter(s);
                return true;
            }

            @Override
            public boolean onQueryTextChange(String s) {
                MainActivity.this.customAdapter.getFilter().filter(s);
                return true;
            }
        });

//        EditText etFilter = findViewById(R.id.et);
//        etFilter.addTextChangedListener(new TextWatcher() {
//            @Override
//            public void beforeTextChanged(CharSequence charSequence, int i, int i1, int i2) {
//
//            }
//
//            @Override
//            public void onTextChanged(CharSequence charSequence, int i, int i1, int i2) {
//
//            }
//
//            @Override
//            public void afterTextChanged(Editable editable) {
//                String filterText = editable.toString();
//
//                if(filterText.length() > 0) {
//                    listView.setFilterText(filterText);
//                } else {
//                    listView.clearTextFilter();
//                }
//            }
//        });
    }

    @Override
    protected void onResume() {
        super.onResume();
        memoDBManager.getAllMemo();
        customAdapter.notifyDataSetChanged();
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        
        if(requestCode == UPDATE_CODE) {
            switch(resultCode) {
                case RESULT_OK:
                    Toast.makeText(this, "메모 수정 완료", Toast.LENGTH_SHORT).show();
                    break;
                case RESULT_CANCELED:
                    Toast.makeText(this, "메모 수정 취소", Toast.LENGTH_SHORT).show();
                    break;
            }
        } else if(requestCode == ADD_CODE) {
            switch(resultCode) {
                case RESULT_OK:
                    Toast.makeText(this, "메모 추가 완료", Toast.LENGTH_SHORT).show();
                    break;
                case RESULT_CANCELED:
                    Toast.makeText(this, "메모 추가 취소", Toast.LENGTH_SHORT).show();
                    break;
            }
        }
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.activity_menu, menu);

        return true;
    }

    public void onMenuItemClick(MenuItem item) {
        AlertDialog.Builder builder;

        switch(item.getItemId()) {
            case R.id.addMemo:
                Intent intent = new Intent(this, AddActivity.class);
                startActivityForResult(intent, ADD_CODE);
                break;
            case R.id.introDev:
                builder = new AlertDialog.Builder(this);
                builder.setTitle("개발자 소개")
                        .setIcon(R.mipmap.devloper)
                        .setView(R.layout.activity_intro_dev)
                        .setPositiveButton("확인", null)
                        .setCancelable(false)
                        .show();
                break;
            case R.id.offApp:
                builder = new AlertDialog.Builder(this);
                builder.setTitle("앱 종료")
                        .setMessage("앱을 종료하시겠어요?")
                        .setIcon(R.mipmap.off)
                        .setPositiveButton("종료", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialogInterface, int i) {
                                ActivityCompat.finishAffinity(MainActivity.this);
                                System.exit(0);
                            }
                        })
                        .setNegativeButton("취소", null)
                        .setCancelable(false)
                        .show();
                break;
        }
    }

}