#include <Arduino.h>

void setup() {
    // 设定引脚为输出模式
    pinMode(24, OUTPUT);
    pinMode(25, OUTPUT);
    pinMode(26, OUTPUT);
    pinMode(33, OUTPUT);
    pinMode(34, OUTPUT);
    pinMode(14, OUTPUT);
    Serial.begin(115200);
}

void loop() {
    digitalWrite(24, HIGH);
    delay(1000);
    digitalWrite(24, LOW);
    
    digitalWrite(25, HIGH);
    delay(1000);
    digitalWrite(25, LOW);
    
    digitalWrite(26, HIGH);
    delay(1000);
    digitalWrite(26, LOW);
    
    digitalWrite(32, HIGH);
    delay(1000);
    digitalWrite(32, LOW);
    
    digitalWrite(33, HIGH);
    delay(1000);
    digitalWrite(33, LOW);
    delay(1000);
    digitalWrite(14, HIGH);
    delay(1000);
    digitalWrite(14, LOW);
    delay(1000);
    Serial.print("LED is ON\n");
}
