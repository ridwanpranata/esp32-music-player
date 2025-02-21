#include <Arduino.h>
#include "BuzzerTone.h"
#include "TwinkleMelody.h"
#include "OdeToJoyMelody.h"
#include "LiquidCrystal_I2C.h"
#include "MusicTitle.h"

// Define buzzer pin and other buzzer configuration
#define BUZZER_PIN 5
#define CHANNEL 0
#define RESOLUTION 8
#define VOLUME 3

// Define LCD configuration
#define LCD_ADDRESS 0x27
#define LCD_COLS 20
#define LCD_ROWS 4

// Define buzzer pin and other buzzer configuration
#define SWITCH_PIN 12

BuzzerTone buzzer(BUZZER_PIN, CHANNEL, RESOLUTION, VOLUME);
TwinkleMelody twinkle(buzzer);
OdeToJoyMelody odeToJoy(buzzer);

LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLS, LCD_ROWS);
MusicTitle musicTitle(lcd);

bool systemOn = false;

void setup()
{
    pinMode(SWITCH_PIN, INPUT_PULLUP); // User internal pull-up resistor
    Serial.begin(115200); // Initialize Serial Monitor
    buzzer.begin();
    musicTitle.begin();
}

void loop()
{
    bool switchState = digitalRead(SWITCH_PIN) == LOW;

    if (switchState && !systemOn) {
        systemOn = true;
        Serial.println("Sistem ON");
        musicTitle.startSong(); // todo : nanti buat untuk music title nya fleksible tergantung lagu
        odeToJoy.play();
        musicTitle.endSong();
        delay(1000);
    } 
    else if (!switchState && systemOn) {
        systemOn = false;
        Serial.println("Sistem OFF");
        buzzer.stop();
        musicTitle.clearDisplay();
    }

    delay(100); // Hindari looping terlalu cepat
}
