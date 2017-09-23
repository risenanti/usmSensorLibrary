#ifndef TEMPLATE_H
#define TEMPLATE_H

#include "Arduino.h"

class Template {
  private:
    int aPrivateIntializedVariable;
    int aStatusVariable;
  public:
    void init(int _aPrivateVariable, int _anotherVariable);
    void update();
    void dumpSerial();
};

#endif
