package ddwu.mobile.network.myretrofittest;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

import java.util.List;

import ddwu.mobile.network.myretrofittest.model.json.BoxOfficeRoot;
import ddwu.mobile.network.myretrofittest.model.json.DailyBoxOffice;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;
import retrofit2.Retrofit;
import retrofit2.converter.gson.GsonConverterFactory;

public class MainActivity extends AppCompatActivity {

    final static String TAG = "MainActivity";

    private Retrofit retrofit;
    private IKobisAPIService iKobisAPIService;

    EditText editText;
    TextView tvResult;

    String apiUrl;
    String apiKey;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        editText = findViewById(R.id.etDate);
        tvResult = findViewById(R.id.tvResult);

        apiUrl = getResources().getString(R.string.api_url);
        apiKey = getResources().getString(R.string.kobis_key);

        if(retrofit == null) {
            try {
                retrofit = new Retrofit.Builder()
                        .baseUrl(apiUrl)
                        .addConverterFactory(GsonConverterFactory.create())
                        .build();
            } catch(Exception e) {
                e.printStackTrace();
            }
        }

        iKobisAPIService = retrofit.create(IKobisAPIService.class);
    }



    public void onClick (View v) {
        switch (v.getId()) {
            case R.id.button:
                String targetDate = editText.getText().toString();
                Call<BoxOfficeRoot> apiCall = iKobisAPIService.getDailyBoxOfficeResult("json", apiKey, targetDate);
                apiCall.enqueue(apiCallback); // enqueue 비동기방식
                break;
        }
    }

    Callback<BoxOfficeRoot> apiCallback = new Callback<BoxOfficeRoot>() {
        @Override
        public void onResponse(Call<BoxOfficeRoot> call, Response<BoxOfficeRoot> response) {
            if(response.isSuccessful()) {
                BoxOfficeRoot boxOfficeRoot = response.body();
//                Log.d(TAG, ": " + boxOfficeRoot);
                List<DailyBoxOffice> list =  boxOfficeRoot.getBoxOfficeResult().getDailyBoxOffice();

                for(DailyBoxOffice dbo : list) {
                    Log.d(TAG, dbo.toString());
                }
            }
        }

        @Override
        public void onFailure(Call<BoxOfficeRoot> call, Throwable t) {
            Log.d(TAG, t.toString());
        }
    };
}