package com.example.mapdiary;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.location.Location;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

public class WriteActivity extends AppCompatActivity {

    private TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_write);

        // 위치 가져와서 표시하기
        Intent intent = getIntent();
        String location = intent.getStringExtra("location");
        Toast.makeText(this, location, Toast.LENGTH_SHORT).show();
        textView = findViewById(R.id.diary_location_value);
        textView.setText(location);

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

        // 작성완료
        Button submitBtn = findViewById(R.id.submit_btn);
        submitBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent readIntent = new Intent(getApplicationContext(), ReadActivity.class);
                startActivity(readIntent);
                finish();
            }
        });
    }
}