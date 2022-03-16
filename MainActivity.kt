package com.example.mainactivity

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.TextView
import com.example.mainactivity.InfoActivity

class MainActivity : AppCompatActivity() {

    val requestFrominfo = 1
    var infoStatusCode = false
    lateinit var infoStatusText: TextView
    lateinit var infoBtn: Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        infoBtn = findViewById(R.id.back_btn)
        infoStatusText = findViewById(R.id.infotext_title)

        infoBtn.setOnClickListener {
            val intent = Intent(this, InfoActivity::class.java)
            intent.putExtra("user_name", "Tom")
            intent.putExtra("user_age", 10)
            intent.putExtra("user_sex","男")
            //startActivity(intent)
            startActivityForResult(intent, requestFrominfo)
        }
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        when (requestCode) {
            requestFrominfo -> if (resultCode == RESULT_OK) {
                val info_status = data?.getBooleanExtra("info_status", false)
                if (info_status == true) {
                    infoStatusCode = info_status
                }
            }
        }
        infoStatusText.text = if (infoStatusCode) "已登录" else "未登录"

    }
}