package com.example.mapdiary;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;

public class ReadActivity extends AppCompatActivity {

    private RecyclerView diaryRV;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_read);

        diaryRV = findViewById(R.id.read_recyclerView);

        // 리사이클러뷰
        DiaryRAdapter diaryRAdapter = new DiaryRAdapter();
        diaryRV.setAdapter(diaryRAdapter);

        // 뷰에 띄우기
        RecyclerView.LayoutManager layoutManager = new LinearLayoutManager(this);
        diaryRV.setLayoutManager(layoutManager);

        // 임의 데이터 추가
        diaryRAdapter.addItem(new Diary("동덕여대", "시험을 봤다"));
        diaryRAdapter.addItem(new Diary("망원", "집오니까 좋구만"));
        diaryRAdapter.addItem(new Diary("제주", "방어먹었음 고양이 개귀엽네"));

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
}