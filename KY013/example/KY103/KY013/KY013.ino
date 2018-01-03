#include "Analog_Temperature_Sensor_KY013.h"

KY013 ky013;

void setup() {
  Serial.begin(9600);
  ky013.init(A0);
}

void loop() {
  ky013.update();
  ky013.dumpSerial();
}
