package com.example.learnintent

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.Button
import android.widget.TextView

class LoginActivity : AppCompatActivity() {

    val tag = "LoginActivity"

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_login)

        val userName = intent.getStringExtra("user_name")
        val userAge = intent.getIntExtra("user_age", 15)
        // debug
        Log.d("$tag userName", userName.toString())
        Log.d("$tag userAge", userAge.toString())

        // layout object
        val loginUserName: TextView = findViewById(R.id.login_user_name)
        val loginConfirmBtn: Button = findViewById(R.id.login_confirm_btn)
        loginUserName.text = "Name is $userName. $userAge years old."

        loginConfirmBtn.setOnClickListener {
            val intent = Intent()
            intent.putExtra("login_status", true)
            setResult(RESULT_OK, intent)
            finish()
        }

    }
}