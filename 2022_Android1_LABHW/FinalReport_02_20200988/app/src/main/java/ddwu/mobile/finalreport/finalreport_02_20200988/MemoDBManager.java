package ddwu.mobile.finalreport.finalreport_02_20200988;

import android.annotation.SuppressLint;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.util.Log;

import java.util.ArrayList;

public class MemoDBManager {

    final static String TAG = "MemoDBManager";

    ArrayList<Memo> memoList;
    MemoDBHelper memoDBHelper = null;
    Cursor cursor = null;

    public MemoDBManager(Context context) {
        memoDBHelper = new MemoDBHelper(context);
        memoList = new ArrayList<>();

        Log.d(TAG, "생성자 생성");
    }

    public ArrayList<Memo> getMemoList() {
        return memoList;
    }

    public ArrayList<Memo> getAllMemo() {
        memoList.clear();

        SQLiteDatabase db = memoDBHelper.getReadableDatabase();
        Cursor cursor = db.rawQuery("SELECT * FROM " + MemoDBHelper.TABLE_NAME, null);

        while(cursor.moveToNext()) {
            @SuppressLint("Range") long id = cursor.getInt(cursor.getColumnIndex(MemoDBHelper.COL_ID));
            @SuppressLint("Range") String title = cursor.getString(cursor.getColumnIndex(MemoDBHelper.COL_TITLE));
            @SuppressLint("Range") String content = cursor.getString(cursor.getColumnIndex(MemoDBHelper.COL_CONTENT));
            @SuppressLint("Range") String date = cursor.getString(cursor.getColumnIndex(MemoDBHelper.COL_DATE));
            @SuppressLint("Range") String img = cursor.getString(cursor.getColumnIndex(MemoDBHelper.COL_IMG));
            memoList.add (new Memo(id, title, content, date, img));
        }

        cursor.close();
        memoDBHelper.close();

        return memoList;
    }

    public boolean addMemo(Memo memo) {
        SQLiteDatabase db = memoDBHelper.getWritableDatabase();

        ContentValues contentValues = new ContentValues();
        contentValues.put(MemoDBHelper.COL_TITLE, memo.getTitle());
        contentValues.put(MemoDBHelper.COL_CONTENT, memo.getContent());
        contentValues.put(MemoDBHelper.COL_DATE, memo.getDate());
        contentValues.put(MemoDBHelper.COL_IMG, memo.getImg());

        Log.d("MemoDBManager", "addMemo");

        long result = db.insert(MemoDBHelper.TABLE_NAME, null, contentValues);
        memoDBHelper.close();

        if(result > 0) {
            return true;
        }

        return false;
    }

    public boolean updateMemo(Memo memo) {
        SQLiteDatabase db = memoDBHelper.getWritableDatabase();

        ContentValues contentValues = new ContentValues();
        contentValues.put(MemoDBHelper.COL_TITLE, memo.getTitle());
        contentValues.put(MemoDBHelper.COL_CONTENT, memo.getContent());
        contentValues.put(MemoDBHelper.COL_DATE, memo.getDate());
        contentValues.put(MemoDBHelper.COL_IMG, memo.getImg());

        String whereClause = MemoDBHelper.COL_ID + "=?";
        String[] whereArgs = new String[] {String.valueOf(memo.get_id())};

        int result = db.update(MemoDBHelper.TABLE_NAME, contentValues, whereClause, whereArgs);
        memoDBHelper.close();

        if(result > 0) {
            return true;
        }

        return false;
    }

    public boolean removeMemo(long id) {
        SQLiteDatabase db = memoDBHelper.getWritableDatabase();
        String whereClause = MemoDBHelper.COL_ID + "=?";
        String[] whereArgs = new String[] {String.valueOf(id)};

        int result = db.delete(MemoDBHelper.TABLE_NAME, whereClause, whereArgs);
        memoDBHelper.close();

        if(result > 0) {
            return true;
        }

        return false;
    }

    public static int makeImgId(String imgName) {
        int imgId = R.mipmap.cat;

        switch(imgName) {
            case "cat1":
                imgId = R.mipmap.cat1;
                break;
            case "cat2":
                imgId = R.mipmap.cat2;
                break;
            case "cat3":
                imgId = R.mipmap.cat3;
                break;
            case "cat4":
                imgId = R.mipmap.cat4;
                break;
            case "cat5":
                imgId = R.mipmap.cat5;
                break;
            case "cat6":
                imgId = R.mipmap.cat6;
                break;
        }

        return imgId;
    }

}
