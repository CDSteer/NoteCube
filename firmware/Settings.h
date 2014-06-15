#ifndef SETTINGS_H
#define SETTINGS_H
#include "string.h"

class Settings{
  private:
    bool solid;
    bool flashing;
    bool breathing;
  public:
    Settings();
    ~Settings();
    bool isSolid();
    bool isFlashing();
    bool isBreathing();
    int setMode(int);
};

#endif // !SETTINGS_H