#ifndef ODETOJOYMELODY_H
#define ODETOJOYMELODY_H

#include <Arduino.h>
#include "BuzzerTone.h"

// Define note frequency in Hertz
#define NOTE_C   262
#define NOTE_D   294
#define NOTE_E   330
#define NOTE_FN  349   // Gunakan NOTE_FN sebagai pengganti F agar tidak konflik
#define NOTE_G   392
#define NOTE_A   440
#define NOTE_B   494
#define NOTE_C2  523

class OdeToJoyMelody {
    public:
        OdeToJoyMelody(BuzzerTone &buzzer);
        void play();
    private:
        BuzzerTone &_buzzer; // Reference to BuzzerTone object that has defined in main program
};

#endif
