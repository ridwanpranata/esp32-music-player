#include <Arduino.h>
#include "BuzzerTone.h"
#include "TwinkleMelody.h"
#include "LiquidCrystal_I2C.h"
#include "MusicTitle.h"

// Definisi pin buzzer
#define BUZZER_PIN 5
#define CHANNEL 0
#define RESOLUTION 8
#define VOLUME 3

BuzzerTone buzzer(BUZZER_PIN, CHANNEL, RESOLUTION, VOLUME);
TwinkleMelody twinkle(buzzer);
LiquidCrystal_I2C lcd(0x27, 20, 4);
MusicTitle musicTitle(lcd);

void setup()
{
    buzzer.begin();
    musicTitle.begin();
}

void loop()
{
  musicTitle.startSong();
  twinkle.play();
  musicTitle.endSong();
  delay(3000); // Jeda sebelum lagu diulang lagi
}
