#include "Analog_Temperature_Sensor_KY013.h"
#include <math.h>


void KY013::init(int _tempPin)
{
	tempPin = _tempPin; //Analog Pins Only
	pinMode(tempPin, INPUT);
}

void KY013::update()
{
	Temp_C = log((10240000 / analogRead(tempPin) - 10000));
	Temp_C = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp_C * Temp_C))* Temp_C);
	Temp_C = Temp_C - 273.15; // Convert Kelvin to Celcius

	Temp_F = log((10240000 / analogRead(tempPin) - 10000));
	Temp_F = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp_F * Temp_F))* Temp_F);
	Temp_F = Temp_F - 273.15; // Convert Kelvin to Celcius
	Temp_F = Temp_F * 1.8 + 32;
}

void KY013::dumpSerial()
{
	Serial.print("Temperature: ");
	Serial.print(Temp_C);
	Serial.println("*C");
	Serial.println();
	Serial.print("Termperature: ");
	Serial.print(Temp_F);
	Serial.println("*F");
	delay(1000);
}