package com.adonnai.firstandroidndkproject;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends Activity {
	static {
		System.loadLibrary("FirstAndroidNDKProject");
	}
	
	public native int addTwoNumbers(int x,int y);
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		
		int x= addTwoNumbers(10,20);
		Log.e("dhara"," value of x : " + x);
	}
}
