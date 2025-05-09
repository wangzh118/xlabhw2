#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "bmp.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 OLED(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1); // 使用 I2C 接口

void setup() {
    Serial.begin(115200);
    Wire.begin(26,25); // SDA, SCL 引脚
    OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C); // I2C 地址为 0x3C
    OLED.clearDisplay();
    OLED.setCursor(1,1);// 设置光标位置
    OLED.setTextSize(1); // 设置字体大小
    OLED.setTextColor(SSD1306_WHITE); // 设置字体颜色
    delay(1000); // 延时 1 秒
    OLED.drawBitmap(0, 0, BMP_1, 128, 64, SSD1306_WHITE); // 显示图片
    OLED.display(); // 刷新显示
    randomSeed(analogRead(0)); // 初始化随机数种子
}

void loop() {

    // 在这里添加你的代码
    /*delay(1000); // 延时 1 秒
      while(1){
      int randomNumber1 = random(0, 128); // 生成 0 到 99 的随机数
      int randomNumber2 = random(0, 64); // 生成 0 到 99 的随机数
         OLED.setCursor(randomNumber1,randomNumber2); // 设置光标位置
      int i=random(1, 4); // 生成 1 到 3 的随机数
         OLED.setTextSize(i); // 设置字体大小
         OLED.setTextColor(SSD1306_WHITE); // 设置字体颜色
         OLED.println("I LOVE YOU!"); // 显示文本
         OLED.display(); // 刷新显示
          delay(500); // 延时 500 毫秒
         OLED.clearDisplay(); // 清除显示
        }*/
   
    
}