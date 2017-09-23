#ifndef LED_H
#define LED_H

#include "Arduino.h"

class LED {
  private:
    int ledPin;
  public:
    void init(int _pin);
    void turnOn();
	void turnOff();
	void toggle();
    void dumpSerial();
};

#endif