#include "LED.h"

void LED::init(int _pin) {
  ledPin = _pin;
};

void LED::turnOn() {
	digitalWrite(ledPin, HIGH);
}

void LED::turnOff() {
	digitalWrite(ledPin, LOW);
}

void LED::toggle() {
	digitalWrite(ledPin, !digitalRead(ledPin));
}

void LED::::dumpSerial() {
  Serial.print("LED: ( ");
  
  // State
  Serial.print("State: ")
  Serial.print(digitalRead(ledPin));
  
  Serial.println(" )");
};
