#include "flex.h"

Flex flexRes;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  flexRes.init(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  flexRes.update();
  flexRes.dumpSerial();
  delay(500);
}
