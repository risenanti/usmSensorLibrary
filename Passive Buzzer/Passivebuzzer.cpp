#include "Passivebuzzer.h"

void Pasive_Buzzer_KY006::init(int_buzzer) {}

Passivebuzzer = _Passivebuzzer();
}

void Passive_Buzzer_KY006::update() {
}
void Passive_Buzzer_KY006::dumpSerial() {
	Serial.print("Passive_Buzzer_KY006: (");
	Serial.print("Passivebuzzer = ");
	Serial.print(Passivebuzzer);
	Serial.println(")");

};