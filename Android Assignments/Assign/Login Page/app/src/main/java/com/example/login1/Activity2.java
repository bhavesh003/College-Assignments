package com.example.login1;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;


public class Activity2 extends Activity{
    TextView tv1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity2);
        tv1=findViewById(R.id.t1);
        String ans=getIntent().getStringExtra("uname");
        tv1.setText("Welcome "+ans);
    }
}

