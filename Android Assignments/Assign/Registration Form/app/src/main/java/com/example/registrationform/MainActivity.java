package com.example.registrationform;


import android.annotation.SuppressLint;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    EditText e1,e2,e3,e4,e5;
    Button b;
    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        e1=findViewById(R.id.name);
        e2=findViewById(R.id.email);
        e3=findViewById(R.id.pass);
        e4=findViewById(R.id.age);
        e5=findViewById(R.id.mobno);

        b=findViewById(R.id.b1);
        b.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                String name = e1.getText().toString();
                String email = e2.getText().toString();
                String pwd = e3.getText().toString();
                String age = e4.getText().toString();
                String mob = e5.getText().toString();

                if(!(pwd.isEmpty())) {
                    dialogfragment df = new dialogfragment();
                    df.show(getSupportFragmentManager(), "Alert");
                }
                else
                {
                    Toast.makeText(MainActivity.this, "Incorrect Password", Toast.LENGTH_SHORT).show();
                }
            }
        });

    }
}