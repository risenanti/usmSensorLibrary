#include "tmp36.h"

TMP36 example;

void setup() {
  Serial.begin(9600);
  example.init(9, 10);
}

void loop() {
  example.update();
  example.dumpSerial();
}
