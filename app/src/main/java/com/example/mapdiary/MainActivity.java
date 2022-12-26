package com.example.mapdiary;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;

import android.Manifest;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.location.Address;
import android.location.Geocoder;
import android.location.Location;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Looper;
import android.util.Log;
import android.view.MenuItem;
import android.view.View;
import android.widget.Toast;

import com.google.android.gms.location.FusedLocationProviderClient;
import com.google.android.gms.location.LocationRequest;
import com.google.android.gms.location.LocationServices;
import com.google.android.gms.location.LocationCallback;
import com.google.android.gms.location.LocationResult;

import com.google.android.gms.maps.CameraUpdate;
import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.OnMapReadyCallback;
import com.google.android.gms.maps.SupportMapFragment;
import com.google.android.gms.maps.model.BitmapDescriptorFactory;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.MarkerOptions;
import com.google.android.gms.tasks.OnFailureListener;
import com.google.android.gms.tasks.OnSuccessListener;
import com.google.android.material.bottomnavigation.BottomNavigationView;
import com.google.android.material.floatingactionbutton.FloatingActionButton;

import java.io.IOException;
import java.util.List;
import java.util.Locale;

public class MainActivity extends AppCompatActivity {

    private static final String TAG = "MainActivity";
    private final int REQ_PERMISSION_CODE = 100;

    private FusedLocationProviderClient flpClient;
    private LatLng mLatLng;
    private Location mLocation;
    private GoogleMap mGoogleMap;
    private String mAddress;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // 구글맵
        SupportMapFragment mapFragment = (SupportMapFragment) getSupportFragmentManager().findFragmentById(R.id.map_main);
        mapFragment.getMapAsync(mapReadyCallback);

        // 내 위치 가져오기
        flpClient = LocationServices.getFusedLocationProviderClient(this);

        if (ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED && ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_COARSE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
            return;
        }

        flpClient.requestLocationUpdates(
                getLocationRequest(),
                mLocCallback,
                Looper.getMainLooper()
        );

        // 네비게이션
        BottomNavigationView bottomNavigationView = findViewById(R.id.nav_main);
        bottomNavigationView.setOnNavigationItemSelectedListener(new BottomNavigationView.OnNavigationItemSelectedListener() {
            @Override
            public boolean onNavigationItemSelected(@NonNull MenuItem item) {
                switch (item.getItemId()) {
                    case R.id.write_menu:
                        Intent writeIntent = new Intent(getApplicationContext(), WriteActivity.class);
                        executeGeocoding(mLocation);
                        writeIntent.putExtra("location", mLatLng.toString());
                        startActivity(writeIntent);

                        Log.d("위치는", ": " + mAddress);
                        break;
                    case R.id.read_menu:
                        Intent readIntent = new Intent(getApplicationContext(), ReadActivity.class);
                        startActivity(readIntent);
                        break;
                }

                return true;
            }
        });
    }

    public void onClick(View view) {
        switch (view.getId()) {
            case R.id.my_location_btn:
                getLastLocation();
                break;
            case R.id.food_btn:
                Toast.makeText(MainActivity.this, "음식점 찾기 버튼", Toast.LENGTH_SHORT).show();
                break;
            case R.id.cafe_btn:
                Toast.makeText(MainActivity.this, "카페 찾기 버튼", Toast.LENGTH_SHORT).show();
                break;
        }
    }

    @Override
    protected void onPause() {
        super.onPause();
        flpClient.removeLocationUpdates(mLocCallback);
    }

    // 권한 체크
    private void checkPermission() {
        if (checkSelfPermission(Manifest.permission.ACCESS_FINE_LOCATION) ==
                PackageManager.PERMISSION_GRANTED &&
            checkSelfPermission(Manifest.permission.ACCESS_COARSE_LOCATION) ==
                    PackageManager.PERMISSION_GRANTED) {

//            Toast.makeText(this,"Permissions Granted", Toast.LENGTH_SHORT).show();
        } else {
            requestPermissions(new String[]{
                    Manifest.permission.ACCESS_COARSE_LOCATION,
                    Manifest.permission.ACCESS_FINE_LOCATION}, REQ_PERMISSION_CODE);
        }
    }

    // 권한요청의 사용자 응답처리
    @Override
    public void onRequestPermissionsResult(int requestCode, @NonNull String[] permissions, @NonNull int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);

        switch (requestCode) {
            case REQ_PERMISSION_CODE:
                if (grantResults.length > 0 &&
                    grantResults[0] == PackageManager.PERMISSION_GRANTED &&
                    grantResults[1] == PackageManager.PERMISSION_GRANTED) {
                    Toast.makeText(this, "위치권한 획득 완료", Toast.LENGTH_SHORT).show();
                } else {
                    Toast.makeText(this, "위치권한 미획득", Toast.LENGTH_SHORT).show();
                }
        }
    }

    OnMapReadyCallback mapReadyCallback = new OnMapReadyCallback() {
        @Override
        public void onMapReady(@NonNull GoogleMap googleMap) {
            mGoogleMap = googleMap;
            Toast.makeText(MainActivity.this, "구글맵 콜백", Toast.LENGTH_SHORT).show();
        }
    };

    public void getLastLocation() {
        checkPermission();

        flpClient.getLastLocation().addOnSuccessListener(
                new OnSuccessListener<Location>() {
                    @Override
                    public void onSuccess(Location location) {
                        if (location != null) {
                            double lat = location.getLatitude();
                            double lng = location.getLongitude();
                            LatLng myLocation = new LatLng(lat, lng);

                            MarkerOptions markerOptions = new MarkerOptions();
                            markerOptions.position(myLocation).title("내 위치");
                            mGoogleMap.addMarker(markerOptions);
                            mGoogleMap.moveCamera(CameraUpdateFactory.newLatLngZoom(myLocation, 17));
//                            executeGeocoding(location);
//
//                            Toast.makeText(MainActivity.this, String.format("(%.6f, %.6f)", lat, lng), Toast.LENGTH_SHORT).show();
                        } else {
                            Toast.makeText(MainActivity.this, "위치가 없습니다.", Toast.LENGTH_SHORT).show();
                        }
                    }
                }
        );

        flpClient.getLastLocation().addOnFailureListener(
                new OnFailureListener() {
                    @Override
                    public void onFailure(@NonNull Exception e) {
                        Log.e(TAG, "Unknown");
                    }
                }
        );
    }

    // locationRequest
    private LocationRequest getLocationRequest() {
        LocationRequest locationRequest = new LocationRequest();
        locationRequest.setInterval(5000);
        locationRequest.setFastestInterval(1000);
        locationRequest.setPriority(LocationRequest.PRIORITY_HIGH_ACCURACY);

        return locationRequest;
    }

    // locationCallback
    LocationCallback mLocCallback = new LocationCallback() {
        @Override
        public void onLocationResult(@NonNull LocationResult locationResult) {
            for(Location loc : locationResult.getLocations()) {
                double lat = loc.getLatitude();
                double lng = loc.getLongitude();
                mLocation = loc;
                mLatLng = new LatLng(lat, lng);
                Toast.makeText(MainActivity.this, String.format("위치 콜백: (%.6f, %.6f)", lat, lng), Toast.LENGTH_SHORT).show();
            }
        }
    };

    private void executeGeocoding(Location location) {
        if (Geocoder.isPresent()) {
//            Toast.makeText(this, "Run Geocoder", Toast.LENGTH_SHORT).show();
            if (location != null)  {
                new GeoTask().execute(location);
            }
        } else {
            Toast.makeText(this, "No Geocoder", Toast.LENGTH_SHORT).show();
        }
    }


    class GeoTask extends AsyncTask<Location, Void, List<Address>> {
        // Geocoder 객체 생성
        Geocoder geocoder = new Geocoder(MainActivity.this, Locale.getDefault());

        @Override
        protected List<Address> doInBackground(Location... locations) {
            List<Address> addresses = null;

            try {
                addresses = geocoder.getFromLocation(locations[0].getLatitude(), locations[0].getLongitude(),1);
            } catch (IOException e) {
                e.printStackTrace();
            }

            return addresses;
        }

        @Override
        protected void onPostExecute(List<Address> addresses) {
            Address address = addresses.get(0);
            mAddress = address.getAddressLine(0);
            Toast.makeText(MainActivity.this, address.getAddressLine(0), Toast.LENGTH_SHORT ).show();
        }
    }
}