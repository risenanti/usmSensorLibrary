#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include "Arduino.h"
#include "Adafruit_GPS.h"

class FloraGPS {
  private:
	HardwareSerial* GPSSerial;
	Adafruit_GPS* gps;
	String rawData;
	String dataPoint[13];
  public:
    void init(HardwareSerial* _GPSSerial, int baudrate = 9600);
    void update();
    void dumpSerial();
};

#endif
