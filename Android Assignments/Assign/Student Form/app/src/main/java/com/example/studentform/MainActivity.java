package com.example.studentform;

import androidx.appcompat.app.AppCompatActivity;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity extends Activity {
    EditText ed1,ed2,ed3;
    Button bu1;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        ed1=findViewById(R.id.e1);
        ed2=findViewById(R.id.e2);
        ed3=findViewById(R.id.e3);
        bu1=findViewById(R.id.b1);
        bu1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String name=ed1.getText().toString();
                String rollNo=ed2.getText().toString();
                String percentage=ed3.getText().toString();

                Intent i=new Intent(getApplicationContext(),DisplayActivity.class);
                   i.putExtra("name",name);
                   i.putExtra("rollNo",rollNo);
                   i.putExtra("percentage",percentage);
                   startActivity(i);
            }
        });
    }
}