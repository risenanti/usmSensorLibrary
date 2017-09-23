#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include "Arduino.h"

class Ultrasonic {
  private:
    int echoPin;
    int triggerPin;
    long int duration_us; // Microseconds
    long int distance_cm; // Centimeters
    long int distance_in; // Inches
  public:
    void init(int _triggerPin, int _echoPin);
    void update();
    void dumpSerial();
};

#endif
