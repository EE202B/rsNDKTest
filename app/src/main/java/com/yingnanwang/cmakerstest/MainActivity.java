package com.yingnanwang.cmakerstest;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;
import android.graphics.BitmapFactory;
import android.graphics.Bitmap;
import android.widget.ImageView;


public class MainActivity extends AppCompatActivity {
    private Bitmap mBitmapIn;
    private Bitmap mBitmapOut;

    public void loadNativeRsLib() {
        try {
            System.loadLibrary("native-lib-rs");
        } catch (UnsatisfiedLinkError e) {
            throw new RuntimeException(
                    e.toString());

        }
    }


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        loadNativeRsLib();

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

    public native void nativeBlur(String cacheDir, int X, int Y, Bitmap in, Bitmap out);
    public native void nativeMono(String cacheDir, int X, int Y, Bitmap in, Bitmap out);
}
