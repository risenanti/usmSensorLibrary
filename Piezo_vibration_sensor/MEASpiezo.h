#pragma once
#ifndef PiezoVS_H
#define PiezoVS_H
#include "Arduino.h"


class MEASpiezo
{
Private:
	int PIEZO_PIN = A0;
	int piezoADC = analogRead(PIEZO_PIN);
	float piezoV = piezoADC / 1023.0 * 5.0;

public:
	void init(int _PIEZO_PIN, int _piezoADC);
	void update();
	void dumpSerial();
	MEASpiezo();
	~MEASpiezo();
};
#endif

