package ddwu.mobile.lecture.etc.myretrofittest;

import ddwu.mobile.lecture.etc.myretrofittest.model.json.BookRoot;
import retrofit2.Call;
import retrofit2.http.GET;
import retrofit2.http.Header;
import retrofit2.http.Query;

public interface NaverAPIService {
    @GET("/v1/search/book.json")
    Call<BookRoot> getBookList(
        @Header("X-Naver-Client-Id") String id,
        @Header("X-Naver-Client-Secret") String secreat,
        @Query("query") String query
    );
}
