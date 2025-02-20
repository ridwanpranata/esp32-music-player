#ifndef MUSICTITLE_H
#define MUSICTITLE_H

#include <Arduino.h>
#include "LiquidCrystal_I2C.h"

class MusicTitle
{
public:
    MusicTitle(LiquidCrystal_I2C &lcd);
    void begin();
    void startSong();
    void endSong();

private:
    LiquidCrystal_I2C &_lcd; // Reference to LiquiedCrystal_I2C object that has defined in main program
};

#endif
