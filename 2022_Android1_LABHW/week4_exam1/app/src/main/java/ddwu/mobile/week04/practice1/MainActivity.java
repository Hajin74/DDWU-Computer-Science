package ddwu.mobile.week04.practice1;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {
    EditText editText;
    String str = "";
    int num1, num2, result;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_linearlayout);
    }

    public void onClick(View v) {
        editText = findViewById(R.id.etDisplay);

        switch (v.getId()) {
            case R.id.btn_1:
                str += "1";
                editText.setText(str);
                break;

            case R.id.btn_2:
                str += "2";
                editText.setText(str);
                break;

            case R.id.btn_plus:
                num1 = Integer.parseInt(str);
                str = "";
                break;

            case R.id.btn_equal:
                num2 = Integer.parseInt(str);
                result = num1 + num2;
                str = String.valueOf(result);
                editText.setText(str);
                break;
        }
    }
}