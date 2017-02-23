package com.yingnanwang.cmakerstest;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;
import android.graphics.BitmapFactory;
import android.graphics.Bitmap;
import android.widget.ImageView;


public class MainActivity extends AppCompatActivity {
    private Bitmap mBitmapIn;
    private Bitmap mBitmapOut;

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib-rs");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mBitmapIn = loadBitmap(R.drawable.data);
        mBitmapOut = Bitmap.createBitmap(mBitmapIn.getWidth(), mBitmapIn.getHeight(),
                mBitmapIn.getConfig());

        ImageView in = (ImageView) findViewById(R.id.displayin);
        in.setImageBitmap(mBitmapIn);

        nativeMono(this.getCacheDir().toString(),
                mBitmapIn.getWidth(), mBitmapIn.getHeight(),
                mBitmapIn, mBitmapOut);

        ImageView out = (ImageView) findViewById(R.id.displayout);
        out.setImageBitmap(mBitmapOut);
    }

    private Bitmap loadBitmap(int resource) {
        final BitmapFactory.Options options = new BitmapFactory.Options();
        options.inPreferredConfig = Bitmap.Config.ARGB_8888;
        return BitmapFactory.decodeResource(getResources(), resource, options);
    }

    public native void nativeMono(String cacheDir, int X, int Y, Bitmap in, Bitmap out);

}
