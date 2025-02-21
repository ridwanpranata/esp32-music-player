#include "OdeToJoyMelody.h"

OdeToJoyMelody::OdeToJoyMelody(BuzzerTone &buzzer) : _buzzer(buzzer) {}

void OdeToJoyMelody::play() {
    // Durasi dasar (dalam milidetik)
    int noteDuration = 400;  // Quarter note

    // --- Ode to Joy Melody ---
    // Bagian 1:
    _buzzer.playTone(NOTE_E, noteDuration);  // E
    _buzzer.playTone(NOTE_E, noteDuration);  // E
    _buzzer.playTone(NOTE_FN, noteDuration); // F
    _buzzer.playTone(NOTE_G, noteDuration);  // G

    _buzzer.playTone(NOTE_G, noteDuration);  // G
    _buzzer.playTone(NOTE_FN, noteDuration); // F
    _buzzer.playTone(NOTE_E, noteDuration);  // E
    _buzzer.playTone(NOTE_D, noteDuration);  // D

    // Bagian 2:
    _buzzer.playTone(NOTE_C, noteDuration);  // C
    _buzzer.playTone(NOTE_C, noteDuration);  // C
    _buzzer.playTone(NOTE_D, noteDuration);  // D
    _buzzer.playTone(NOTE_E, noteDuration);  // E

    _buzzer.playTone(NOTE_E, noteDuration);  // E
    _buzzer.playTone(NOTE_D, noteDuration);  // D
    _buzzer.playTone(NOTE_D, noteDuration);  // D

    // Ulangi bagian 1 dan 2 (opsional, sesuai kebutuhan)
    _buzzer.playTone(NOTE_E, noteDuration);  // E
    _buzzer.playTone(NOTE_E, noteDuration);  // E
    _buzzer.playTone(NOTE_FN, noteDuration); // F
    _buzzer.playTone(NOTE_G, noteDuration);  // G

    _buzzer.playTone(NOTE_G, noteDuration);  // G
    _buzzer.playTone(NOTE_FN, noteDuration); // F
    _buzzer.playTone(NOTE_E, noteDuration);  // E
    _buzzer.playTone(NOTE_D, noteDuration);  // D

    _buzzer.playTone(NOTE_C, noteDuration);  // C
    _buzzer.playTone(NOTE_C, noteDuration);  // C
    _buzzer.playTone(NOTE_D, noteDuration);  // D
    _buzzer.playTone(NOTE_E, noteDuration);  // E

    _buzzer.playTone(NOTE_D, noteDuration);  // D
    _buzzer.playTone(NOTE_C, noteDuration);  // C
    _buzzer.playTone(NOTE_C, noteDuration);  // C
}
