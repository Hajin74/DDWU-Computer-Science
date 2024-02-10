package ddwucom.mobile.test06.exam02;

import androidx.appcompat.app.AppCompatActivity;

import android.graphics.Color;
import android.os.Bundle;
import android.view.MotionEvent;
import android.view.View;

public class MainActivity extends AppCompatActivity {

    MyView myView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        myView = (MyView) findViewById(R.id.myView);
        
        // 2번. MainActivity에 익명 내부 클래스의 임시객체 구현으로 작성
        myView.setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                myView.setPosX(event.getX());
                myView.setPosY(event.getY());
                myView.setIsTouched(1);
                myView.invalidate();
                return false;
            }
        });

        // 3번. 롱클릭할 경우 원의 색상이 바뀌는 기능을 익명 내부 클래스의 임시 객체 구현 방법으로 작성
        myView.setOnLongClickListener( new View.OnLongClickListener() {
            @Override
            public boolean onLongClick(View v) {
                myView.setPaintColor(Color.CYAN);
                myView.invalidate();
                return true;
            }
        });
    }

}
