#include "PushButton.h"

void Button::init(int _buttonPin, int _ledPin, int _buttonState) {
	buttonPin = _buttonPin;
	ledPin = _ledPin;
	buttonState = _buttonState;

	pinMode(ledPin, OUTPUT);
	pinMode(buttonPin, INPUT_PULLUP);
};
//Get sensor data and store it 
void Button::update() {
	buttonState = digitalRead(buttonPin);
	delay(200);

}
void Button::dumpSerial() {
	digitalWrite(ledPin, HIGH);
	digitalWrite(ledPin, LOW);
};
