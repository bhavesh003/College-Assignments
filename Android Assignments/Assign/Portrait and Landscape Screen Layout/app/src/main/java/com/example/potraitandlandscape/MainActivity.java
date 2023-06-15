package com.example.potraitandlandscape;

import static java.lang.Math.pow;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.TextView;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button b1 = findViewById(R.id.b1);
        b1.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                double inputRate = 0.0;
                double convertedRate = 0.0;
                EditText inputText = (EditText) findViewById(R.id.e1);
                TextView convertedText = (TextView) findViewById(R.id.t4);
                inputRate = Double.parseDouble(inputText.getText().toString()) / 100.0;
                RadioButton rb2 = findViewById(R.id.rb2);

                if (rb2.isChecked()) {
                    convertedRate = (pow((1.0 + inputRate), (1.0 / 12.0)) - 1.0) * 100.0;
                } else {
                    convertedRate = (pow((1.0 + inputRate), 12) - 1.0) * 100.0;
                }
                convertedText.setText(String.format("Converted Rate is %1$.4f%%", convertedRate));
            }
        });
    }
}