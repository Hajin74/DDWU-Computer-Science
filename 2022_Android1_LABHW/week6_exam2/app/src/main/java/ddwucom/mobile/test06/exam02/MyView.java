package ddwucom.mobile.test06.exam02;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;

import androidx.annotation.Nullable;

public class MyView extends View {

    float posX;
    float posY;
    float r = 100;
    int paintColor = Color.RED;
    int isTouched = 0;

    public void setPosX(float posX) {
        this.posX = posX;
    }

    public void setPosY(float posY) {
        this.posY = posY;
    }

    public void setIsTouched(int isTouched) {
        this.isTouched = isTouched;
    }

    public void setPaintColor(int paintColor) {
        this.paintColor = paintColor;
    }

    public MyView(Context context) {
        super(context);
    }

    public MyView(Context context, @Nullable AttributeSet attrs) {
        super(context, attrs);
    }

    public MyView(Context context, @Nullable AttributeSet attrs, int defStyleAttr) {
        super(context, attrs, defStyleAttr);
    }

    @Override
    protected void onDraw(Canvas canvas) {
        canvas.drawColor(Color.LTGRAY);

        switch (isTouched) {
            case 0:

                break;

            case 1:
                Paint paint = new Paint();
                paint.setColor(paintColor);

                canvas.drawCircle(posX, posY, r, paint);
                break;
        }
    }

//    1번. MyView 클래스에 onTouchEvent 메소드 재정의하여 터치한 위치에 원 표시
//    @Override
//    public boolean onTouchEvent(MotionEvent event) {
//        isTouched = 1;
//        posX = event.getX();
//        posY = event.getY();
//
//        invalidate();
//
//        return true;
//    }

}
