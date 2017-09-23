#ifndef TMP36_H
#define TMP36_H

#include "Arduino.h"

class TMP36 {
  private:
    int tmpPin;
    int reading;   // Raw value from ADC hardware
    float voltage; // of sensor
    float tempC;   // 
	float tempF;   //
  public:
    void init(int _analogPin);
    void update();
    void dumpSerial();
};

#endif