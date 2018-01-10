#pragma once
#ifndef Tilt_Sensor_H
#define Tilt_Sensor_H

#include "Arduino.h"

class tilt_sensor {
private:
	int TiltsensorPin
	int ledPin

public :
	void init(int _TiltsensorPin, int _ledPin);
	void update();
	void dumpSerial();
};
#endif

