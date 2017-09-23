#include "tmp36.h"

void TMP36::init(int _analogPin) {
  tmpPin = _analogPin;
};

void TMP36::update() {
  analogRead(tmpPin);
  voltage = reading * 5.0 / 1024.0;
  tempC = (voltage - 0.5) * 100;    //converting from 10 mv per degree wit 500 mV offset
                                    //to degrees ((voltage - 500mV) times 100)
  tempF = (tempC * 9.0 / 5.0) + 32.0;
}

void TMP36::dumpSerial() {
  Serial.print("Temperature Sensor: ( ");
  
  // Voltage
  Serial.print("voltage = ");
  Serial.print(voltage);
  Serial.print(" volts, ");
  
  // Temp
  Serial.print("tempC = ");
  Serial.print(tempC);
  Serial.print("C, ");
  
  //Temp
  Serial.print("tempF = ");
  Serial.print(tempF);
  Serial.print("F");
  
  Serial.println(" )");
};
