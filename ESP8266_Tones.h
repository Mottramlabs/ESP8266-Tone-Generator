/*  ESP8266 Tone Generator library - ESP8266 only.
    Does not work with Arduino as analogWriteFreq not present in Arduino library
    Started - 21st July 2018 - David Mottram
*/

#ifndef Tone_h
#define Tone_h

// Check of legacy IDE
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif


class ESP8266_Tones
{
  public:
    ESP8266_Tones(int pin);
    void Play_Tone(int _pin, int _frequency, int _length);

    void Chirp(int _pin);
    void Bleep(int _pin);
    void Tone_Down(int _pin);
    void Tone_Up(int _pin);
    void Ringer(int _pin);
    void Imperial_March(int _pin);
    void Close_Encounters(int _pin);
    void Harry_Potter(int _pin);

  private:
    int _pin;

};

#endif
