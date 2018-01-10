#ifndef Passive_Buzzer_KY006_H
#define Passive_Buzzer_KY006_H

#include "Arduino.h"

class Passivebuzzer {
private:
	int buzzer;

public:
	void init(int_buzzer);
	void update();
	void dumpSerial();
	Passivebuzzer();
	~Passivebuzzer();
};

#endif