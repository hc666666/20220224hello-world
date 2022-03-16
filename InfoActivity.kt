package com.example.mainactivity

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.Button
import android.widget.TextView

class InfoActivity : AppCompatActivity() {
    val tag="InfoActivity"
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_info)

        val userName = intent.getStringExtra("user_name")
        val userSex = intent.getStringExtra("user_sex")
        val userAge = intent.getStringExtra("user_age")
        // debug
        Log.d("$tag userName", userName.toString())
        Log.d("$tag userSex", userName.toString())
        Log.d("$tag userAge", userAge.toString())
        val infoUserName: TextView = findViewById(R.id.infotext_title)
        val infoConfirmBtn: Button = findViewById(R.id.back_btn)
        infoUserName.text="姓名：$userName 性别：$userSex 年龄：$userAge"
        infoConfirmBtn.setOnClickListener{
            val intent = Intent()
            intent.putExtra("info_status", true)
            setResult(RESULT_OK, intent)
            finish()
        }
    }
}