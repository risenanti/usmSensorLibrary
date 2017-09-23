#include "floraGPS.h"

FloraGPS gps;

void setup() {
  Serial.begin(115200);
  gps.init(&Serial2);
}

void loop() {
  gps.update();
  gps.dumpSerial();
}
