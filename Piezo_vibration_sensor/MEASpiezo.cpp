#include "MEASpiezo.h"

void MEASpiezo::(init _PIEZO_PIN, init _piezoADC) {
	PIEZO_PIN = __PIEZO_PIN;
	pinMode(PIEZO_PIN, INPUT);

};
void MEASpiezo::update() {
	reading = analogRead(PIEZO_PIN);
	piezoV = reading / 1023.0 * 5.0;
	delay(250);
}
void MEASpiezo::dumpSerial() {

	Serial.print("Voltage:");
	Serial.println(piezoV);
};
