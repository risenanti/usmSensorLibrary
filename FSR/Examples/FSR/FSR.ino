#include "FSR.h"

FSR fsr;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  fsr.init(0);
}

void loop() {
  // put your main code here, to run repeatedly:
fsr.update();
fsr.dumpSerial();
}
