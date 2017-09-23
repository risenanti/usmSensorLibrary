#include "template.h"

// Similar to setup(): initialize variables, set pinModes, etc.
void Template::init(int _aPrivateVariable, int _anotherVariable) {
  // Set variables based on parameters
  aPrivateIntializedVariable = _aPrivateVariable;
  aStatusVariable = _anotherVariable;
};

// Get sensor data and store it.
void Template::update() {
	
	// Lets count!
	aStatusVariable = aStatusVariable + 1;
}

// Dump the data in a human-readable format via serial
void Template::dumpSerial() {
  // Print begin
  Serial.print("Template: ( ");

  // Status Variable
  Serial.print("aStatusVariable = ");
  Serial.print(aStatusVariable);

  // Print end
  Serial.println(" )");
};
