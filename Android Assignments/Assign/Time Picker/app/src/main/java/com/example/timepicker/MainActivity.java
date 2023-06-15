package com.example.timepicker;

import androidx.appcompat.app.AppCompatActivity;

import android.view.View;
import android.widget.TimePicker;
import android.os.Bundle;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    TimePicker timepicker;
    Button button;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        button=findViewById(R.id.button);
        timepicker=findViewById(R.id.timepicker);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(getBaseContext(), "Time selected :"+timepicker.getCurrentHour()+":"+timepicker.getCurrentMinute(), Toast.LENGTH_SHORT).show();

            }
        });
    }
}