package com.example.ma02_20200988;

import androidx.appcompat.app.AppCompatActivity;
import android.content.ContentValues;
import android.content.Intent;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class WriteActivity extends AppCompatActivity {

    private TextView tvLocation;
    private EditText etContent;
    private String location;
    private DiaryDBHelper diaryDBHelper;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_write);

        tvLocation = findViewById(R.id.diary_location_value);
        etContent = findViewById(R.id.diary_content_value);

        diaryDBHelper = new DiaryDBHelper(this);

        // 위치 가져와서 표시하기
        Intent intent = getIntent();
        location = intent.getStringExtra("location");
        tvLocation.setText(location);

        Toast.makeText(this, location, Toast.LENGTH_SHORT).show();
    }

    public void onClick(View view) {
        switch(view.getId()) {
            case R.id.submit_btn:  // 작성완료(데이터 삽입 + 일기 보기 페이지로 이동)
                SQLiteDatabase db = diaryDBHelper.getWritableDatabase();
                ContentValues row = new ContentValues();
                row.put(diaryDBHelper.COL_LOCATION, location);
                row.put(diaryDBHelper.COL_CONTENT, etContent.getText().toString());
                long result = db.insert(diaryDBHelper.TABLE_NAME, null, row);
                diaryDBHelper.close();

                String msg = result > 0? "일기 작성 성공!" : "일기 작성 실패 ..";
                Toast.makeText(WriteActivity.this, msg, Toast.LENGTH_SHORT).show();

                Intent readIntent = new Intent(getApplicationContext(), ReadActivity.class);
                startActivity(readIntent);
                finish();

                break;

            case R.id.go_home_from_write: // (홈) 뒤로가기
                Intent homeIntent = new Intent(getApplicationContext(), MainActivity.class);
                startActivity(homeIntent);
                finish();

                break;
        }
    }
}