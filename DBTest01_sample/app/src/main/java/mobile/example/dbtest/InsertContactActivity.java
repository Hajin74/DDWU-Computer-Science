package mobile.example.dbtest;

import android.app.Activity;
import android.content.ContentValues;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;

public class InsertContactActivity extends Activity {

	ContactDBHelper helper;
	EditText etName;
	EditText etPhone;
	EditText etCategory;
	
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_insert_contact);

//      1. DBHelper 생성
		helper = new ContactDBHelper(this);
		
		etName = (EditText)findViewById(R.id.editText1);
		etPhone = (EditText)findViewById(R.id.editText2);
		etCategory = (EditText)findViewById(R.id.editText3);
	}
	
	
	public void onClick(View v) {
		if(v.getId() == R.id.btnNewContactSave) {
			// 2. db 객체 생성
			SQLiteDatabase db = helper.getWritableDatabase();

			// 3. db 관련 메소드 사용하여 데이터 삽입
			// 메소드 사용방식 : 결과를 확인하기에도 메소드 방식이 better
			ContentValues row = new ContentValues();

			row.put(ContactDBHelper.COL_NAME, etName.getText().toString());
			row.put(ContactDBHelper.COL_PHONE, etPhone.getText().toString());
			row.put(ContactDBHelper.COL_CAT, etCategory.getText().toString());

			long result = db.insert(ContactDBHelper.TABLE_NAME, null, row);

//			// sql 직접 작성 : 아무래도 복잡하고 쉽지 않아 보임 -> 그렇기 때문에 가능하면 메소드 사용방식 사용
//			db.execSQL("insert into " + ContactDBHelper.TABLE_NAME + " values ( NULL, '"
//					+ etName.getText().toString() + "', '" + etPhone.getText().toString()
//					+ "', '" + etCategory.getText().toString() + "');");

			// 4. 작업 완료
			helper.close();
		}
	}
}
