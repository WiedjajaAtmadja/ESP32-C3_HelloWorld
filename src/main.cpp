// ESP32-C3 CoreBoard: https://wiki.luatos.org/chips/esp32c3/board.html
#include <Arduino.h>
#if defined(ESP32_C3_CORE_BOARD)
  #include <HWCDC.h>
  HWCDC debugSerial;
  #define LED_D4 12
  #define LED_D5 13
#else
  #define LED_D4 0
  #define debugSerial Serial
#endif

void setup() {
  pinMode(LED_D4, OUTPUT);
  digitalWrite(LED_D4, LOW);
  debugSerial.begin(9600);
  // print free heap memory
  debugSerial.print("Free heap: ");
  debugSerial.println(ESP.getFreeHeap());
}

void loop() {
  debugSerial.println("Hello World");
  debugSerial.print("Free heap: ");
  debugSerial.println(ESP.getFreeHeap());
  // for (int i=0; i<1024; i++){
  //   debugSerial.print(".");
  //   analogWrite(LED_D4, i);
  //   delay(50);
  // }
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