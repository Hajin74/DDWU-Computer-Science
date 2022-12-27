package com.example.mapdiary;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ImageView;
import android.widget.ListView;
import android.widget.TextView;

public class ReadActivity extends AppCompatActivity {

    final static String TAG = "ReadActivity";

    ListView diaryList = null;
    DiaryDBHelper diaryDBHelper;
    Cursor cursor;
    DiaryCursorAdapter diaryCursorAdapter;

    boolean isUpdated = true;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_read);

        diaryList = (ListView) findViewById(R.id.read_listView);
        diaryDBHelper = new DiaryDBHelper(this);
        diaryCursorAdapter = new DiaryCursorAdapter(this, R.layout.diary_item, null);
        diaryList.setAdapter(diaryCursorAdapter);
        
        // 리스트 뷰 롱클릭 : 삭제
        diaryList.setOnItemLongClickListener(new AdapterView.OnItemLongClickListener() {
            @Override
            public boolean onItemLongClick(AdapterView<?> adapterView, View view, int pos, long id) {
                final long targetId = id;
                TextView tvLocation = view.findViewById(R.id.diary_location_value);

                new AlertDialog.Builder(ReadActivity.this).setTitle("삭제 확인")
                        .setMessage("삭제하시겠습니까?")
                        .setPositiveButton("삭제하기", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int which) {
                                SQLiteDatabase db = diaryDBHelper.getWritableDatabase();

                                String whereClause = DiaryDBHelper.COL_ID + "=?";
                                String[] whereArgs = new String[] { String.valueOf(targetId) };

                                db.delete(DiaryDBHelper.TABLE_NAME, whereClause, whereArgs);
                                diaryDBHelper.close();
                                readAllContacts();		// 삭제 상태를 반영하기 위하여 전체 목록을 다시 읽음
                            }
                        })
                        .setNegativeButton("취소", null)
                        .show();

                return true;
            }
        });
    }

    public void onClick(View view) {
        switch(view.getId()) {
            case R.id.go_home_from_read:
                Intent homeIntent = new Intent(getApplicationContext(), MainActivity.class);
                startActivity(homeIntent);
                finish();
                break;
        }
    }

    @Override
    protected void onResume() {
        super.onResume();
        if (isUpdated) {
            readAllContacts();
        }
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        if (cursor != null) {
            cursor.close();
        }
    }

    private void readAllContacts() {
        SQLiteDatabase db = diaryDBHelper.getReadableDatabase();
        cursor = db.rawQuery("select * from " + diaryDBHelper.TABLE_NAME, null);

        diaryCursorAdapter.changeCursor(cursor);
        diaryDBHelper.close();
    }
}