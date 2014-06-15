#ifndef BREATHLIGHT_H
#define BREATHLIGHT_H
#include "NoteLight.h"

class BreathLight: public NoteLight{
  private:
    int i;
  public:
    BreathLight();
    ~BreathLight();
    int breathGreen();
    int breathRed();
    int breathBlue();
    void delay(unsigned long delay);
};

#endif // !BREATHLIGHT_H