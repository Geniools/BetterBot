#include <Arduino.h>
#include "WifiModule.h"

int LED_RED = 13;

WifiModule wifi;

void setup() {
    Serial.begin(9600);
    pinMode(LED_RED, OUTPUT);
}

void loop() {
    digitalWrite(LED_RED, LOW);
    wifi.test(11);
    delay(500);
    digitalWrite(LED_RED, HIGH);
    wifi.test(12);
    delay(500);
}
