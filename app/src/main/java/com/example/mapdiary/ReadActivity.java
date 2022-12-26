package com.example.mapdiary;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.ListView;

public class ReadActivity extends AppCompatActivity {

    final static String dbName = "diary.db";
    final static int dbVersion = 1;

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
        diaryDBHelper = new DiaryDBHelper(this, dbName, null, dbVersion);
        diaryCursorAdapter = new DiaryCursorAdapter(this, R.layout.diary_item, null);
        diaryList.setAdapter(diaryCursorAdapter);
        
        // 리스트 뷰

        // 뒤로가기
        ImageView goHome = findViewById(R.id.go_home_from_read);
        goHome.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent homeIntent = new Intent(getApplicationContext(), MainActivity.class);
                startActivity(homeIntent);
                finish();
            }
        });
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
        if (cursor != null)
            cursor.close();
    }

    private void readAllContacts() {
        SQLiteDatabase db = diaryDBHelper.getReadableDatabase();
        cursor = db.rawQuery("select * from " + diaryDBHelper.TABLE_NAME, null);

        diaryCursorAdapter.changeCursor(cursor);
        diaryDBHelper.close();
    }
}