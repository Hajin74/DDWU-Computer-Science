package ddwucom.mobile.test08.adapterclicktest;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.CheckedTextView;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.Toast;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    SubjectManager subjectManager;
    ArrayList<String> subjectList;
    ArrayAdapter<String> adapter;
    ListView listView;
    EditText editText;
    int index;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        subjectManager = new SubjectManager();
        subjectList = subjectManager.getSubjectList();

        adapter = new ArrayAdapter<String>(
                this, android.R.layout.simple_list_item_1, subjectList
        );

        listView = findViewById(R.id.listView);
        listView.setAdapter(adapter);
        listView.setOnItemClickListener(itemClickListener);
        listView.setOnItemLongClickListener(itemLongClickListener);
    }


    AdapterView.OnItemClickListener itemClickListener = new AdapterView.OnItemClickListener() {

        @Override
        public void onItemClick(AdapterView<?> adapterView, View view, int i, long l) {
            index = i;
            editText = findViewById(R.id.etItem);
            editText.setText(subjectList.get(i));
            adapter.notifyDataSetChanged();
        }
    };

    AdapterView.OnItemLongClickListener itemLongClickListener = new AdapterView.OnItemLongClickListener() {
        @Override
        public boolean onItemLongClick(AdapterView<?> adapterView, View view, int i, long l) {
            Toast.makeText(MainActivity.this, subjectList.get(i) + " 삭제", Toast.LENGTH_SHORT).show();
            subjectManager.removeData(i);
            adapter.notifyDataSetChanged();
            return true;
        }
    };

    public void onClick(View view) {
        switch(view.getId()) {
            case R.id.btnInsert:
                Toast.makeText(MainActivity.this, editText.getText().toString() + " 추가", Toast.LENGTH_SHORT).show();
                subjectManager.addData(editText.getText().toString());
                adapter.notifyDataSetChanged();
                break;

            case R.id.btnUpdate:
                Toast.makeText(MainActivity.this, " 수정", Toast.LENGTH_SHORT).show();
                subjectManager.updataData(index, editText.getText().toString());
                adapter.notifyDataSetChanged();
                break;
        }
    }


}
