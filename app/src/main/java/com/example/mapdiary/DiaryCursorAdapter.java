package com.example.mapdiary;

import android.content.Context;
import android.database.Cursor;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.CursorAdapter;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import org.w3c.dom.Text;

import java.util.ArrayList;
import java.util.List;

public class DiaryCursorAdapter extends CursorAdapter {
    private static final String TAG = "DiaryRAdapter";
    LayoutInflater inflater;
    int layout;

    public DiaryCursorAdapter(Context context, int layout, Cursor c) {
        super(context, c, CursorAdapter.FLAG_AUTO_REQUERY);
        this.inflater = (LayoutInflater) context.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
        this.layout = layout;
    }

    @Override
    public View newView(Context context, Cursor cursor, ViewGroup viewGroup) {
        View diaryItemLayout = inflater.inflate(layout, viewGroup, false);
        return diaryItemLayout;
    }

    @Override
    public void bindView(View view, Context context, Cursor cursor) {
        TextView locationTV = view.findViewById(R.id.item_location);
        TextView contentTV = view.findViewById(R.id.item_content);
        locationTV.setText(cursor.getString(1));
        contentTV.setText(cursor.getString(2));
    }
}
