package ddwu.mobile.dbtest.roomexam01;

import androidx.appcompat.app.AppCompatActivity;
import androidx.room.Room;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.ListView;

import java.util.ArrayList;
import java.util.List;

import io.reactivex.Flowable;
import io.reactivex.Single;
import io.reactivex.android.schedulers.AndroidSchedulers;
import io.reactivex.disposables.CompositeDisposable;
import io.reactivex.schedulers.Schedulers;

public class  MainActivity extends AppCompatActivity {

    final static String TAG = "MainActivity";

    EditText etFood;
    EditText etNation;
    ListView listView;

    ArrayAdapter<Food> adapter;

    // Room
    FoodDB foodDB;
    FoodDao foodDao;

    // Disposable
    private final CompositeDisposable mDisposable = new CompositeDisposable();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        etFood = findViewById(R.id.etFood);
        etNation = findViewById(R.id.etNation);
        listView = findViewById(R.id.listView);

        adapter = new ArrayAdapter<Food>(this, android.R.layout.simple_list_item_1, new ArrayList<Food>());
        listView.setAdapter(adapter);

        // Room
        foodDB = Room.databaseBuilder(getApplicationContext(), FoodDB.class, "food_db.db").build();
        foodDao = foodDB.foodDao();

    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        mDisposable.clear();
    }

    public void onClick(View v) {

        final String food = etFood.getText().toString();
        final String nation = etNation.getText().toString();

        switch (v.getId()) {
            case R.id.btnInsert:
                Single<Long> insertResult = foodDao.insertFood(new Food(food, nation));

                mDisposable.add(
                    insertResult.subscribeOn(Schedulers.io())
                            .observeOn(AndroidSchedulers.mainThread())
                            .subscribe(result -> Log.d(TAG, "Insertion success: " + result),
                                    throwable -> Log.d(TAG, "error"))
                );

                break;
            case R.id.btnUpdate:

                break;
            case R.id.btnDelete:

                break;
            case R.id.btnShow:
                Flowable<List<Food>> showResult = foodDao.getAllFoods();

                mDisposable.add(
                        showResult.subscribeOn(Schedulers.io())
                                .observeOn(AndroidSchedulers.mainThread())
                                .subscribe(foods -> {
                                    for (Food aFood : foods) {
                                        Log.d(TAG, aFood.toString());
                                    }
                                    adapter.clear();
                                    adapter.addAll(foods);
                                    // notify가 필요 없어짐
                                }, throwable -> Log.d(TAG, "error", throwable))
                );

                break;
        }
    }
}