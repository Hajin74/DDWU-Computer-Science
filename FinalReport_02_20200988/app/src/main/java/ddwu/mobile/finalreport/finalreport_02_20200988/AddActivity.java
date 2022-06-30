package ddwu.mobile.finalreport.finalreport_02_20200988;

import androidx.appcompat.app.AppCompatActivity;

import android.app.DatePickerDialog;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.DatePicker;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

import java.time.LocalDate;
import java.util.Calendar;
import java.util.Date;
import java.util.Random;

public class AddActivity extends AppCompatActivity {

    EditText etTitle;
    EditText etContent;
    TextView tvDate;
    ImageView ivImg;

    Memo memo;
    MemoDBManager memoDBManager;

    String dateStr;
    int imgId;
    String imgName;
    Calendar cal;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_add);

        etTitle = findViewById(R.id.etTitle_add);
        etContent = findViewById(R.id.etContent_add);
        tvDate = findViewById(R.id.tvDate_add);
        ivImg = findViewById(R.id.ivImg_add);

        Random random = new Random();
        imgName = "cat" + (random.nextInt(6) + 1);
        imgId = memoDBManager.makeImgId(imgName);
        ivImg.setImageResource(imgId);

        memoDBManager = new MemoDBManager(this);

        cal = Calendar.getInstance();
    }

    public void onClick(View v) {
        switch(v.getId()) {
            case R.id.btnOk_add:
                memo = new Memo(etTitle.getText().toString(), etContent.getText().toString(), dateStr, imgName);
                Log.d("AddActivity", "newMemo: " + memo.getDate());
                boolean result = memoDBManager.addMemo(memo);

                if(result) {
                    Intent resultIntent = new Intent();
                    resultIntent.putExtra("memo", etTitle.getText().toString());
                    setResult(RESULT_OK, resultIntent);
                } else {
                    Toast.makeText(this, "새로운 메모 추가 실패!", Toast.LENGTH_SHORT).show();
                }
                finish();

                break;
            case R.id.btnCancel_add:
                setResult(RESULT_CANCELED);
                finish();

                break;
            case R.id.btnDate_add:
                DatePickerDialog dialog = new DatePickerDialog(
                        this,
                        new DatePickerDialog.OnDateSetListener() {
                            @Override
                            public void onDateSet(DatePicker datePicker, int year, int month, int day) {
                                dateStr = year + "년 " + (month + 1) + "월 " + day + "일";

                                Toast.makeText(AddActivity.this, dateStr, Toast.LENGTH_SHORT).show();
                                tvDate.setText(dateStr);
                            }
                        },
                        cal.get(Calendar.YEAR), cal.get(Calendar.MONTH), cal.get(Calendar.DAY_OF_MONTH)

                );
                dialog.show();

                break;
        }
    }

}