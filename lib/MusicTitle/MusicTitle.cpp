#include "MusicTitle.h"

MusicTitle::MusicTitle(LiquidCrystal_I2C &lcd) : _lcd(lcd) {}

void MusicTitle::begin()
{
    _lcd.init();
    _lcd.backlight();

    _lcd.setCursor(0, 0);
    _lcd.print("[Music Player]");
    _lcd.setCursor(0, 1);
    _lcd.print("Song : -            ");
    _lcd.setCursor(0, 3);
    _lcd.print("By: ESP 32");

    delay(2000);
}

void MusicTitle::startSong()
{
    for (size_t i = 0; i < 3; i++)
    {
        _lcd.setCursor(0, 1);
        _lcd.print("Song :              ");
        delay(1000);
        _lcd.setCursor(0, 1);
        _lcd.print("Song : Twinkle!");
        delay(1000);
    }
}

void MusicTitle::endSong()
{
    for (size_t i = 0; i < 3; i++)
    {
        _lcd.setCursor(0, 1);
        _lcd.print("Song :              ");
        delay(1000);
        _lcd.setCursor(0, 1);
        _lcd.print("Song : Twinkle!");
        delay(1000);
    }
    _lcd.setCursor(0, 1);
    _lcd.print("Song : -            ");
}
