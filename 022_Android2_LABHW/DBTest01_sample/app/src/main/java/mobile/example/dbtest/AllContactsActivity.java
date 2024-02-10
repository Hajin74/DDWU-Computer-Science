package mobile.example.dbtest;

import java.util.ArrayList;

import android.app.Activity;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

public class AllContactsActivity extends Activity {
	
	private ListView lvContacts = null;

	private ArrayAdapter<ContactDto> adapter;
	private ContactDBHelper helper;
	private ArrayList<ContactDto> contactList;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_all_contacts);

		helper = new ContactDBHelper(this);
		contactList = new ArrayList<ContactDto>();

		lvContacts = (ListView)findViewById(R.id.lvContacts);
		adapter = new ArrayAdapter<ContactDto>(this, android.R.layout.simple_list_item_1, contactList);

		lvContacts.setAdapter(adapter);
	}



	@Override
	protected void onResume() {
		// activity가 보여질 때 마다 호출됨
		super.onResume();
		
		SQLiteDatabase db = helper.getReadableDatabase();

		// 메소드 방식 : db.query(ContactDBHelper.TABLE_NAME, null, null, null, null, null, null, null);
		Cursor cursor = db.rawQuery("select * from " + ContactDBHelper.TABLE_NAME, null);

		contactList.clear(); // 화면이 hidden 됐다가 다시 보일 때, 이미 data를 추가한 list에다가 똑같은 data를 다시 추가할 수 있으므로 초기화시켜줌.

		while(cursor.moveToNext()) {
			ContactDto dto = new ContactDto();
			dto.setId(cursor.getInt(cursor.getColumnIndex("_id")));
			dto.setName(cursor.getString(cursor.getColumnIndex(ContactDBHelper.COL_NAME)));
			dto.setPhone(cursor.getString(cursor.getColumnIndex(ContactDBHelper.COL_PHONE)));
			dto.setCategory(cursor.getString(cursor.getColumnIndex(ContactDBHelper.COL_CAT)));

			contactList.add(dto);
		}

		adapter.notifyDataSetChanged(); // contactList의 변경 사항을 adapter에게 notify하여서 listview에 적용될 수 있게함

		cursor.close();
		helper.close();
	}

}




