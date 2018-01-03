#ifndef button_H
#define button_H

#include "Arduino.h"

class Button {
private:
	int buttonPin = 4;
	int ledPin = 3;
	int buttonState = 0;

public:
	void init(int _buttonPin, int _ledPin, int _buttonState);
	void update();
	void dumpSerial();

};
#endif