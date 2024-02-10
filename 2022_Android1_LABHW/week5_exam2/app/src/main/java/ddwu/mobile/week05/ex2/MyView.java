package ddwu.mobile.week05.ex2;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.view.View;

import androidx.annotation.Nullable;

import java.util.Random;

public class MyView extends View {
    int makeCircle;

    public int getMakeCircle() {
        return makeCircle;
    }

    public void setMakeCircle(int makeCircle) {
        this.makeCircle = makeCircle;
    }

    public MyView(Context context) {
        super(context);
        makeCircle = 0;
    }

    public MyView(Context context, @Nullable AttributeSet attrs) {
        super(context, attrs);
        makeCircle = 0;
    }

    public MyView(Context context, @Nullable AttributeSet attrs, int defStyleAttr) {
        super(context, attrs, defStyleAttr);
        makeCircle = 0;
    }

    public MyView(Context context, @Nullable AttributeSet attrs, int defStyleAttr, int defStyleRes) {
        super(context, attrs, defStyleAttr, defStyleRes);
        makeCircle = 0;
    }

    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.drawColor(Color.YELLOW);

        // 버튼이 눌려질 때만 drawCircle를 실행함
        if(makeCircle == 1) {
            Random random = new Random();
            int x = random.nextInt(500);
            int y = random.nextInt(800);
            int r = (random.nextInt(3) + 1) * 100;

            Paint paint = new Paint();
            paint.setColor(Color.CYAN);
            canvas.drawCircle(x, y, r, paint);

            makeCircle = 0;
        }
    }
}
