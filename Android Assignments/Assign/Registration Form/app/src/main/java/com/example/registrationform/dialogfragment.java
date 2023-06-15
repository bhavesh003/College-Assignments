package com.example.registrationform;

import android.content.Intent;

import android.os.Bundle;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.fragment.app.DialogFragment;

public class dialogfragment extends DialogFragment {
        public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState){
                super.onCreateView(inflater,container,savedInstanceState);
                return inflater.inflate(R.layout.second,container,false);

        }
}