#include "FSR.h"

// Similar to setup(): initialize variables, set pinModes, etc.
void FSR::init(int _sensorPin) {
  // Set variables based on parameters
  sensorPin = _sensorPin;
  pinMode(sensorPin, INPUT);
};

// Get sensor data and store it.
//Needs better scaling on readings.
void FSR::update() {
	
	// Lets count!
	int reading = analogRead(sensorPin);
	if(reading != 0){
		fsrV = reading * vcc / 1023.0;
		fsrR = rDiv * (vcc / fsrV - 1.0);
		fsrG = 1.0 / fsrR;
		if (fsrR <= 600)
			force = (fsrG - 0.00075) / 0.00000032639;
		else
			force = fsrG / 0.000000642857;
		}
	else{
		force = 0;
	}
}

// Dump the data in a human-readable format via serial
void FSR::dumpSerial() {
  // Print begin
  Serial.print("Resistance: ( ");

  // Status Variable
  
  Serial.print(fsrR);

  // Print end
  Serial.print(" ohms)");

  Serial.print("Force: ");
  Serial.print(force);
  Serial.println(" g's)");
  delay(500);

};
