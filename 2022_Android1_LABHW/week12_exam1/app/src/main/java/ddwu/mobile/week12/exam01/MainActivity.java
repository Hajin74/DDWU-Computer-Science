package ddwu.mobile.week12.exam01;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    final int SUB_ACTIVITY_CODE = 1001;
    EditText editText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        editText = findViewById(R.id.etMain);
    }

    public void onClick(View v) {
        switch(v.getId()) {
            case R.id.btnMain:
                Intent intent = new Intent(this, SubActivity.class);
                intent.putExtra("MainText", editText.getText().toString());
                startActivityForResult(intent, SUB_ACTIVITY_CODE);
                break;
        }
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        switch(requestCode) {
            case SUB_ACTIVITY_CODE:
                if(resultCode == RESULT_OK) {
                    String resultData = data.getStringExtra("result_data");
                    editText.setText(resultData);
                }
                break;
        }
    }
}