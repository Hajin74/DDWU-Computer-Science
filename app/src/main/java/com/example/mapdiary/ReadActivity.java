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