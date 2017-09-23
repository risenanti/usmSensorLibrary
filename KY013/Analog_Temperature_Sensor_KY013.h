#ifndef ANALOG_TEMPERATURE_SENSOR_KY013_H
#define ANALOG_TEMPERATURE_SENSOR_KY013_H

#include "Arduino.h"

class KY013 {
private:
	int tempPin;
	double Temp_C;
	double Temp_F;
public:
	void init(int _tempPin);
	void update();
	void dumpSerial();
};
#endif