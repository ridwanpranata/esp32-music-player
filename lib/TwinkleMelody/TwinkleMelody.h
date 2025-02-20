#ifndef TWINKLEMELODY_H
#define TWINKLEMELODY_H

#include <Arduino.h>
#include "BuzzerTone.h"

// Define note frequency in Hertz
#define C   262
#define D   294
#define E   330
#define FA  349
#define G   392
#define A   440
#define B   494
#define C2  523

class TwinkleMelody {
    public:
        TwinkleMelody(BuzzerTone &buzzer);
        void play();
    private:
        BuzzerTone &_buzzer; // Reference to BuzzerTone object that has defined in main program
};

#endif
