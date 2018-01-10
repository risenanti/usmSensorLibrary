#include "tilt_sensor.h"




void tilt_sensor::init(int _TiltsensorPin, int _ledPin ) {
	TiltsensorPin = _TiltsensorPin;
	ledPin = _ledPin;
	pinMode(ledPin, OUTPUT);
	pinMode(TiltsensorPin, INPUT);


};

void tilt_sensor::update() {
	//checks to state of the sensor to read either a high or low value.
	tiltsensorState = digitalRead(TiltsensorPin);

	//Led is high when sensor is tilted.
	if (tiltsensorState == HIGH) {
		digitalWrite(ledPin, HIGH);
	}
	else {
		digitalWrite(ledPin, LOW);

	}

}

void tilt_sensor::dumpSerial() {
	Serial.print(tiltsensorState)
};

