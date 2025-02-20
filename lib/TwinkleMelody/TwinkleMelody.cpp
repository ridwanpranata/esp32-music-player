#include "TwinkleMelody.h"

TwinkleMelody::TwinkleMelody(BuzzerTone &buzzer) : _buzzer(buzzer) {}

void TwinkleMelody::play() {
    // "Twinkle Twinkle Little Star"
    _buzzer.playTone(C, 500); _buzzer.playTone(C, 500);
    _buzzer.playTone(G, 500); _buzzer.playTone(G, 500);
    _buzzer.playTone(A, 500); _buzzer.playTone(A, 500);
    _buzzer.playTone(G, 1000);

    // "How I wonder what you are"
    _buzzer.playTone(FA, 500); _buzzer.playTone(FA, 500);
    _buzzer.playTone(E, 500);  _buzzer.playTone(E, 500);
    _buzzer.playTone(D, 500);  _buzzer.playTone(D, 500);
    _buzzer.playTone(C, 1000);
    
    // "Up above the world so high"
    _buzzer.playTone(G, 500); _buzzer.playTone(G, 500);
    _buzzer.playTone(FA, 500); _buzzer.playTone(FA, 500);
    _buzzer.playTone(E, 500);  _buzzer.playTone(E, 500);
    _buzzer.playTone(D, 1000);

    // "Like a diamond in the sky"
    _buzzer.playTone(G, 500); _buzzer.playTone(G, 500);
    _buzzer.playTone(FA, 500); _buzzer.playTone(FA, 500);
    _buzzer.playTone(E, 500);  _buzzer.playTone(E, 500);
    _buzzer.playTone(D, 1000);
}
