package com.example.timedatepicker;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.view.accessibility.AccessibilityViewCommand;

import android.annotation.SuppressLint;
import android.app.DatePickerDialog;
import android.app.TimePickerDialog;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.DatePicker;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.TimePicker;

import java.util.Calendar;

public class MainActivity extends AppCompatActivity {

    private Button timePickerButton;
    private Button datePickerButton;
    private Button timePickerButton1;
    private Button datePickerButton1;
    private EditText ed1;



    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        datePickerButton = findViewById(R.id.datePickerButton);
        datePickerButton1 = findViewById(R.id.datePickerButton1);
        timePickerButton = findViewById(R.id.timePickerButton);
        timePickerButton1 = findViewById(R.id.timePickerButton1);



        datePickerButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                showDatePickerDialog();
            }
        });

        timePickerButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                showTimePickerDialog();
            }
        });
        datePickerButton1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                showDatePickerDialog1();
            }
        });

        timePickerButton1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                showTimePickerDialog1();
            }
        });
    }

    private void showDatePickerDialog() {

        final Calendar c = Calendar.getInstance();
        int year = c.get(Calendar.YEAR);
        int month = c.get(Calendar.MONTH);
        int day = c.get(Calendar.DAY_OF_MONTH);


        DatePickerDialog datePickerDialog = new DatePickerDialog(this,
                new DatePickerDialog.OnDateSetListener() {
                    @Override
                    public void onDateSet(DatePicker view, int year, int monthOfYear, int dayOfMonth) {
                        String chosenDate = dayOfMonth + "/" + (monthOfYear + 1) + "/" + year;
                        ((TextView)findViewById(R.id.chosenDateTextView)).setText(chosenDate);

                    }
                }, year, month, day);

        datePickerDialog.show();
    }

    private void showDatePickerDialog1() {

        final Calendar c = Calendar.getInstance();
        int year = c.get(Calendar.YEAR);
        int month = c.get(Calendar.MONTH);
        int day = c.get(Calendar.DAY_OF_MONTH);


        DatePickerDialog datePickerDialog = new DatePickerDialog(this,
                new DatePickerDialog.OnDateSetListener() {
                    @Override
                    public void onDateSet(DatePicker view, int year, int monthOfYear, int dayOfMonth) {
                        String chosenDate = dayOfMonth + "/" + (monthOfYear + 1) + "/" + year;
                        ((TextView)findViewById(R.id.chosenDateTextView1)).setText(chosenDate);

                    }
                }, year, month, day);

        datePickerDialog.show();
    }

    private void showTimePickerDialog() {
        final Calendar c = Calendar.getInstance();
        int hour = c.get(Calendar.HOUR_OF_DAY);
        int minute = c.get(Calendar.MINUTE);

        TimePickerDialog timePickerDialog = new TimePickerDialog(this,
                new TimePickerDialog.OnTimeSetListener() {
                    @Override
                    public void onTimeSet(TimePicker view, int hourOfDay, int minute) {
                        String chosenTime = hourOfDay + ":" + minute;
                        ((TextView)findViewById(R.id.chosenTimeTextView)).setText(chosenTime);


                    }
                }, hour, minute, false);

        timePickerDialog.show();
    }

    private void showTimePickerDialog1() {
        final Calendar c = Calendar.getInstance();
        int hour = c.get(Calendar.HOUR_OF_DAY);
        int minute = c.get(Calendar.MINUTE);

        TimePickerDialog timePickerDialog = new TimePickerDialog(this,
                new TimePickerDialog.OnTimeSetListener() {
                    @Override
                    public void onTimeSet(TimePicker view, int hourOfDay, int minute) {
                        String chosenTime = hourOfDay + ":" + minute;
                        ((TextView)findViewById(R.id.chosenTimeTextView1)).setText(chosenTime);


                    }
                }, hour, minute, false);

        timePickerDialog.show();
    }
}
