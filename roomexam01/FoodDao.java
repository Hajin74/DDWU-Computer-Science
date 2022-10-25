package ddwu.mobile.dbtest.roomexam01;

import androidx.room.Dao;
import androidx.room.Delete;
import androidx.room.Insert;
import androidx.room.Query;
import androidx.room.Update;

import java.util.List;

import io.reactivex.Completable;
import io.reactivex.Flowable;
import io.reactivex.Single;
import kotlinx.coroutines.flow.Flow;

@Dao
public interface FoodDao {
//    @Insert
//    long insertFood(Food food);
//
//    @Update
//    void updateFood(Food food);
//
//    @Delete
//    void deleteFood(Food food);
//
//    @Query("select * from food_table")
//    List<Food> getAllFoods();
//
//    @Query("select * from food_table where id = :id")
//    Food getFood(int id);

    // RxJava
    @Insert
    Single<Long> insertFood(Food food);

    @Update
    Completable updateFood(Food food);

    @Delete
    Completable deleteFood(Food food);

    @Query("select * from food_table")
    Flowable<List<Food>> getAllFoods();

    @Query("select * from food_table where nation=:nation")
    Single<Food> getFoodByNation(String nation);

}
