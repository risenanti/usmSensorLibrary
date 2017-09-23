#ifndef FSR_H
#define FSR_H

#include "Arduino.h"

class FSR {
  private:
    int sensorPin;
    float vcc = 4.98;
    float rDiv = 3230.0;
    float force;
    float fsrV;
    float fsrR;
    float fsrG;
  public:
    void init(int _sensorPin);
    void update();
    void dumpSerial();
};

#endif

