#ifndef FLEX_H
#define FLEX_H

#include "Arduino.h"

class Flex {
	private:
		int flexPin = 0;
		float vcc = 4.98;
		float rDiv = 47500.0; //47k resistor
		float stRes = 37300.0; //straight resistance
		float bendRes = 90000.0; //bent resistance
		int reading;
		float flexV;
		float flexR;
		float angle;
		

	public:
		void init(int _flexPin);
		void update();
		void dumpSerial();
};

#endif

