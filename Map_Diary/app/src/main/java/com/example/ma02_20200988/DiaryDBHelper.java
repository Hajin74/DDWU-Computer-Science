package com.example.ma02_20200988;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import androidx.annotation.Nullable;

public class DiaryDBHelper extends SQLiteOpenHelper {

    String sql;

    private final static String DB_NAME = "diary_db";
    public final static String TABLE_NAME = "diary_table";
    public final static String COL_ID = "_id";
    public final static String COL_LOCATION = "location";
    public final static String COL_CONTENT = "content";

    public DiaryDBHelper(Context context) {
        super(context, DB_NAME, null, 1);
    }

    public DiaryDBHelper(@Nullable Context context, @Nullable String name, @Nullable SQLiteDatabase.CursorFactory factory, int version) {
        super(context, name, factory, version);
    }

    @Override
    public void onCreate(SQLiteDatabase sqLiteDatabase) {
        sql = "CREATE TABLE " + TABLE_NAME + " ( " + COL_ID + " INTEGER PRIMARY KEY AUTOINCREMENT, " + COL_LOCATION + " TEXT, " + COL_CONTENT + " TEXT );";
        sqLiteDatabase.execSQL(sql);
//        sqLiteDatabase.execSQL("INSERT INTO " + TABLE_NAME + " VALUES (NULL, 'lat/lng: (37.560961, 126.904960)', '팝콘');");
    }

    @Override
    public void onUpgrade(SQLiteDatabase sqLiteDatabase, int i, int i1) {
        sqLiteDatabase.execSQL("DROP TABLE IF EXISTS " +  TABLE_NAME);
        onCreate(sqLiteDatabase);
    }
}
