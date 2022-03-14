package com.example.learnintent

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.TextView

class MainActivity : AppCompatActivity() {

    val requestFromLogin = 1
    var loginStatusCode = false
    lateinit var loginStatusText: TextView
    lateinit var loginBtn: Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        loginBtn = findViewById(R.id.login_btn)
        loginStatusText = findViewById(R.id.login_status_text)

        loginBtn.setOnClickListener {
            val intent = Intent(this, LoginActivity::class.java)
            intent.putExtra("user_name", "Tom")
            intent.putExtra("user_age", 10)
            //startActivity(intent)
            startActivityForResult(intent, requestFromLogin)
        }
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        when (requestCode) {
            requestFromLogin -> if (resultCode == RESULT_OK) {
                val log_status = data?.getBooleanExtra("login_status", false)
                if (log_status == true) {
                    loginStatusCode = log_status
                }
            }
        }
        loginStatusText.text = if (loginStatusCode) "已登录" else "未登录"

    }
}