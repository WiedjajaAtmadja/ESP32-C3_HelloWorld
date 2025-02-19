// ESP32-C3 CoreBoard: https://wiki.luatos.org/chips/esp32c3/board.html
#include <Arduino.h>
#include <HWCDC.h>
#define LED_D4 12
#define LED_D5 13

HWCDC cdcSerial;
void setup() {
  pinMode(LED_D4, OUTPUT);
  pinMode(LED_D5, OUTPUT);
  cdcSerial.begin(9600);
}

void loop() {
  cdcSerial.println("Hello World");
  digitalWrite(LED_D4, HIGH);
  digitalWrite(LED_D5, LOW);
  delay(100);
  digitalWrite(LED_D4, LOW);
  digitalWrite(LED_D5, HIGH);
  delay(1000);
}