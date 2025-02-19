// ESP32-C3 CoreBoard: https://wiki.luatos.org/chips/esp32c3/board.html
#include <Arduino.h>
// #include <HWCDC.h>
#define LED_D4 0
// #define LED_D5 13

// HWCDC cdcSerial;
void setup() {
  pinMode(LED_D4, OUTPUT);
  // pinMode(LED_D5, OUTPUT);
  digitalWrite(LED_D4, LOW);
  // digitalWrite(LED_D5, LOW);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello World");
  for (int i=0; i<1024; i++){
    Serial.print(".");
    analogWrite(LED_D4, i);
    delay(50);
  }
  delay(1000);
  // for (int i=1023; i>=0; i--){
  //   analogWrite(LED_D4, i);
  //   delay(50);
  // }
  // digitalWrite(LED_D4, HIGH);
  // digitalWrite(LED_D5, LOW);
  // delay(100);
  // digitalWrite(LED_D4, LOW);
  // digitalWrite(LED_D5, HIGH);
  // delay(1000);
}