package ddwu.mobile.week03.excercise2;

import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void onClick(View v) {
        switch (v.getId()) {
            case R.id.btnHello:
                String helloStr = "";
                EditText editText1 = findViewById(R.id.etName);
                EditText editText2 = findViewById(R.id.etPhone);

                helloStr += "안녕하세요, 저는 " + editText1.getText() + " 입니다. ";
                helloStr += "전화번호는 " + editText2.getText() + " 입니다";

                Toast.makeText(this, helloStr, Toast.LENGTH_SHORT).show();
                break;

            case R.id.btnExit:
                finish();

                break;
        }

    }

}