package ddwu.mobile.week12.exam01;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.EditText;

public class SubActivity extends AppCompatActivity {

    EditText editText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_sub);

        editText = findViewById(R.id.etSub);

        Intent intent = getIntent();
        String data = intent.getStringExtra("MainText");
        editText.setText(data);

    }

    public void onClick(View v) {
        switch(v.getId()) {
            case R.id.btnSub:
                Intent resultIntent = new Intent();
                resultIntent.putExtra("result_data", editText.getText().toString());
                setResult(RESULT_OK, resultIntent);
//                activity 종료하려면
//                finish();
                break;
        }
        finish();
    }
}