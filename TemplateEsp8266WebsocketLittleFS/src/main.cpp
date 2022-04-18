#include <Arduino.h>
#include <littleFS.h>

#ifdef ESP32
#include <WiFi.h>
#include <AsyncTCP.h>
#elif defined(ESP8266)
#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#endif

#include <ESPAsyncWebServer.h>

// --------------------------------------------------------
// SPIFFS initialization
// --------------------------------------------------------
void initLittleFS(){
  if(!LittleFS.begin()) {
    Serial.println("Cannot mount SPIFFS volume...");
  }
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  initLittleFS();
}

void loop() {
  // put your main code here, to run repeatedly:
}