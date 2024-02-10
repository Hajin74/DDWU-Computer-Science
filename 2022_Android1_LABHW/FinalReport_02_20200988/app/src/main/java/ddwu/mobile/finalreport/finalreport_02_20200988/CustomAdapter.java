package ddwu.mobile.finalreport.finalreport_02_20200988;

import android.content.Context;
import android.media.Image;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.EditText;
import android.widget.Filter;
import android.widget.Filterable;
import android.widget.ImageView;
import android.widget.TextView;

import java.util.ArrayList;

public class CustomAdapter extends BaseAdapter implements Filterable {

    private Context context;
    private int layout;

    private ArrayList<Memo> memoList = new ArrayList<>();
    private ArrayList<Memo> filteredMemoList = memoList;
    Filter listFilter;

    private LayoutInflater layoutInflater;
    private MemoDBManager memoDBManager;

    public CustomAdapter(Context context, int layout, ArrayList<Memo> memoList) {
        this.context = context;
        this.layout = layout;
        this.memoList = memoList;
        this.filteredMemoList = memoList;
        layoutInflater = (LayoutInflater) context.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
    }

    @Override
    public int getCount() {
        return filteredMemoList.size();
    }

    @Override
    public Object getItem(int i) {
        return filteredMemoList.get(i);
    }

    @Override
    public long getItemId(int i) {
        return filteredMemoList.get(i).get_id();
    }

    @Override
    public View getView(int i, View view, ViewGroup viewGroup) {
        final int position = i;

        if(view == null) {
            view = layoutInflater.inflate(layout, viewGroup, false);
        }

        TextView tvTitle = view.findViewById(R.id.tvTitle);
        TextView tvContent = view.findViewById(R.id.tvContent);
        TextView tvDate = view.findViewById(R.id.tvDate);
        ImageView ivImg = view.findViewById(R.id.ivImg);

        tvTitle.setText(filteredMemoList.get(position).getTitle());
        tvContent.setText(filteredMemoList.get(position).getContent());
        tvDate.setText(filteredMemoList.get(position).getDate());

        String imgName = filteredMemoList.get(position).getImg();
//        Log.d("CustomAdapter", "imgName: " + imgName);
        int imgId = memoDBManager.makeImgId(imgName);
        ivImg.setImageResource(imgId);

        return view;
    }

    @Override
    public Filter getFilter() {
        if(listFilter == null) {
            listFilter = new ListFilter();
        }
        return listFilter;
    }

    private class ListFilter extends Filter {
        @Override
        protected FilterResults performFiltering(CharSequence charSequence) {
            FilterResults results = new FilterResults();

            if(charSequence == null || charSequence.length() == 0) {
                results.values = memoList;
                results.count = memoList.size();
            } else {
                ArrayList<Memo> itemList = new ArrayList<>();

                for(Memo memo : memoList) {
                    if(memo.getTitle().toLowerCase().contains(charSequence.toString().toLowerCase())) {
                        itemList.add(memo);
                        Log.d("CustomAdapter", "필터된 아이템: " + memo.getTitle());
                    }
                }

                results.values = itemList;
                results.count = itemList.size();
            }

            return results;
        }

        @Override
        protected void publishResults(CharSequence charSequence, FilterResults filterResults) {
            filteredMemoList = (ArrayList<Memo>) filterResults.values;

            Log.d("CustomAdapter", "filteredMemoList: " + filteredMemoList);
            // 중간에 자동완성으로 뜨는 item 수정하려고 클릭하면, 기존에 main에서 뷰잉했던 순서의 item으로 연결됨..

            if(filterResults.count > 0) {
                notifyDataSetChanged();
//                Log.d("CustomAdapter", "MemoList: " + filteredMemoList.get(0));
            } else {
                notifyDataSetInvalidated();
            }
        }
    }

}
