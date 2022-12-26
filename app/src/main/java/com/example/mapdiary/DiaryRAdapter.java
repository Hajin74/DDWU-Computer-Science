package com.example.mapdiary;

import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import java.util.ArrayList;
import java.util.List;

public class DiaryRAdapter extends RecyclerView.Adapter<DiaryRAdapter.MyViewHolder> {

    private static final String TAG = "DiaryRAdapter";

    private List<Diary> items = new ArrayList<>();

    public void addItem(Diary diary) {
        Log.d(TAG, "addItem : ( " + diary.getLocation() + ", " + diary.getContent() + " )");
        items.add(diary);
        this.notifyDataSetChanged();
        Log.d(TAG, "items: " + items.size());

    }

    @NonNull
    @Override
    public DiaryRAdapter.MyViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        Log.d(TAG, "onCreateViewHolder");

        LayoutInflater inflater = LayoutInflater.from(parent.getContext());
        View view = inflater.inflate(R.layout.diary_item, parent, false);

        return new MyViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull DiaryRAdapter.MyViewHolder holder, int position) {
        Log.d(TAG, "onBindViewHolder : " + position);

        Diary diary = items.get(position);
        holder.setItem(diary);
    }

    @Override
    public int getItemCount() {
        Log.d(TAG, "getItemCount: " + items.size());
        return items.size();
    }

    public static class MyViewHolder extends RecyclerView.ViewHolder {

        private TextView location;
        private TextView content;

        public MyViewHolder(@NonNull View itemView) {
            super(itemView);
            location = itemView.findViewById(R.id.item_location);
            content = itemView.findViewById(R.id.item_content);
        }

        public void setItem(Diary diary) {
            location.setText(diary.getLocation());
            content.setText(diary.getContent());
        }
    }
}
