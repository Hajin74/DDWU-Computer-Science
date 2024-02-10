package ddwu.mobile.finalreport.finalreport_02_20200988;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;

public class MemoDBHelper extends SQLiteOpenHelper {
    final static String TAG = "MemoDBHelper"; // debug시 사용

    final static String DB_NAME = "memos.db";
    public final static String TABLE_NAME = "food_table"; // memoManager에서 접근하기 위해 public

    public final static String COL_ID = "_id";
    public final static String COL_TITLE = "title";
    public final static String COL_CONTENT = "content";
    public final static String COL_DATE = "date";
    public final static String COL_IMG = "img";

    public MemoDBHelper(Context context) {
        super(context, DB_NAME, null, 1);
        Log.d(TAG, "생성자 실행");
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        String sql = "CREATE TABLE " + TABLE_NAME + " (" + COL_ID + " integer primary key autoincrement, " +
                COL_TITLE + " TEXT, " + COL_CONTENT + " TEXT, " + COL_DATE + " TEXT, " + COL_IMG + " TEXT)";

        Log.d(TAG, "sql: " + sql);

        db.execSQL(sql);
        insertSample(db);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVer, int newVer) {
        db.execSQL("DROP TABLE IF EXISTS " + TABLE_NAME);
        onCreate(db);
    }

    private void insertSample(SQLiteDatabase db) {
        db.execSQL("insert into " + TABLE_NAME + " values (null, 'aa', '불닭볶음면 짜장맛', '2022년 1월 2일', 'cat1');");
        db.execSQL("insert into " + TABLE_NAME + " values (null, 'apple', '장 보기', '2022년 3월 22일', 'cat6');");
        db.execSQL("insert into " + TABLE_NAME + " values (null, 'banana', '과제 제출', '2022년 6월 23일', 'cat5');");
    }

}
