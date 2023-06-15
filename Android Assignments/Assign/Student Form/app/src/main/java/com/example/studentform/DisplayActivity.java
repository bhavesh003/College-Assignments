package com.example.studentform;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;

import androidx.annotation.Nullable;

public class DisplayActivity extends Activity {
    TextView tv1,tv2 ,tv3;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity2);
        tv1=findViewById(R.id.t1);
        tv2=findViewById(R.id.t2);
        tv3=findViewById(R.id.t3);

        Intent i=getIntent();
        String name=i.getStringExtra("name");
        String rollNo=i.getStringExtra("rollNo");
        String percentage=i.getStringExtra("percentage");

        tv1.setText("Name:"+name);
        tv2.setText("Roll no:"+rollNo);
        tv3.setText("Percentage:"+percentage);
    }
}
