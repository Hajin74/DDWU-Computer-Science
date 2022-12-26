package com.example.mapdiary;

import androidx.appcompat.app.AppCompatActivity;

import android.content.ContentValues;
import android.content.Intent;
import android.database.sqlite.SQLiteDatabase;
import android.location.Location;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

import org.w3c.dom.Text;

public class WriteActivity extends AppCompatActivity {

    private TextView locationTV;
    private EditText contentET;
    private String location;
    private String content;

    DiaryDBHelper diaryDBHelper;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_write);

        diaryDBHelper = new DiaryDBHelper(this);

        // 위치 가져와서 표시하기
        Intent intent = getIntent();
        location = intent.getStringExtra("location");
        Toast.makeText(this, location, Toast.LENGTH_SHORT).show();
        locationTV = findViewById(R.id.diary_location_value);
        locationTV.setText(location);

        // 뒤로가기
        ImageView goHome = findViewById(R.id.go_home_from_write);
        goHome.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent homeIntent = new Intent(getApplicationContext(), MainActivity.class);
                startActivity(homeIntent);
                finish();
            }
        });

        // 작성완료(데이터 삽입 + 일기 보기 페이지로 이동)
        Button submitBtn = findViewById(R.id.submit_btn);
        submitBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                contentET = findViewById(R.id.diary_content_value);
                content = contentET.getText().toString();

                SQLiteDatabase db = diaryDBHelper.getWritableDatabase();
                ContentValues row = new ContentValues();
                row.put(diaryDBHelper.COL_LOCATION, location);
                row.put(diaryDBHelper.COL_CONTENT, content);
                long result = db.insert(diaryDBHelper.TABLE_NAME, null, row);
                diaryDBHelper.close();

                String msg = result > 0? "일기 작성 성공!" : "일기 작성 실패 ..";
                Toast.makeText(WriteActivity.this, msg, Toast.LENGTH_SHORT).show();

                Intent readIntent = new Intent(getApplicationContext(), ReadActivity.class);
                startActivity(readIntent);
                finish();
            }
        });
    }
}