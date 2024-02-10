package ddwu.mobile.finalreport.finalreport_02_20200988;

import androidx.appcompat.app.AppCompatActivity;

import android.app.DatePickerDialog;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.DatePicker;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

public class UpdateActivity extends AppCompatActivity {

    Memo memo;
    MemoDBManager memoDBManager;

    EditText etTitle;
    EditText etContent;
    TextView tvDate;
    ImageView ivImg;

    String date;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_update);

        memo = (Memo) getIntent().getSerializableExtra("memo");
        memoDBManager = new MemoDBManager(this);

        etTitle = findViewById(R.id.etTitle_update);
        etContent = findViewById(R.id.etContent_update);
        tvDate = findViewById(R.id.tvDate_update);
        ivImg = findViewById(R.id.ivImg_update);

        etTitle.setText(memo.getTitle());
        etContent.setText(memo.getContent());
        tvDate.setText(memo.getDate());

        String imgName = memo.getImg();
        int imgId = memoDBManager.makeImgId(imgName);
        ivImg.setImageResource(imgId);
    }

    public void onClick(View v) {
        switch(v.getId()) {
            case R.id.btnOk_update:
                memo.setTitle(etTitle.getText().toString());
                memo.setContent(etContent.getText().toString());
                memo.setDate(tvDate.getText().toString());

                if(memoDBManager.updateMemo(memo)) {
                    Intent resultIntent = new Intent();
                    resultIntent.putExtra("memo", memo);
                    setResult(RESULT_OK, resultIntent);
                } else {
                    setResult(RESULT_CANCELED);
                }
                finish();

                break;
            case R.id.btnCancel_update:
                setResult(RESULT_CANCELED);
                finish();

                break;
            case R.id.btnDate_update:
                DatePickerDialog dialog = new DatePickerDialog(
                        this,
                        new DatePickerDialog.OnDateSetListener() {
                            @Override
                            public void onDateSet(DatePicker datePicker, int year, int month, int day) {
                                date = year + "년 " + (month + 1) + "월 " + day + "일";

                                Toast.makeText(UpdateActivity.this, date, Toast.LENGTH_SHORT).show();
                                tvDate.setText(date);
                            }
                        },
                        2022, 5, 23
                );
                dialog.show();

                break;
        }
    }

}