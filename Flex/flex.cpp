#include "flex.h"

// Similar to setup(): initialize variables, set pinModes, etc.
void Flex::init(int _flexPin) {
  // Set variables based on parameters
	flexPin = _flexPin;
	pinMode(flexPin, INPUT);
};

// Get sensor data and store it.
void Flex::update() {
	
	reading = analogRead(flexPin);
	flexV = reading * vcc / 1023.0;
	flexR = rDiv * (vcc / flexV - 1.0);
	angle = map(flexR, stRes, bendRes, 0, 90.0);
	delay(500);
}

// Dump the data in a human-readable format via serial
void Flex::dumpSerial() {
  // Print begin
	Serial.print("Resistance: ");
	Serial.print(flexR);
	Serial.print(" ohms");
	Serial.println();
	Serial.print("Bend: ");
	Serial.print(angle);
	Serial.print(" degrees");
	Serial.println();
};
