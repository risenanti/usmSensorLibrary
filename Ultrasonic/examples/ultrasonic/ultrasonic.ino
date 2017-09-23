#include "ultrasonic.h"

Ultrasonic ultrasonic;

void setup() {
  Serial.begin(9600);
  ultrasonic.init(9, 10);
}

void loop() {
  ultrasonic.update();
  ultrasonic.dumpSerial();
}
