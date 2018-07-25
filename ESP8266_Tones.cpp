
#include "Arduino.h"
#include "ESP8266_Tones.h"
#include "Tone_Pitches.h"


ESP8266_Tones::ESP8266_Tones(int _pin)
{
  pinMode(_pin, OUTPUT);
}

// Tone Generator
void ESP8266_Tones::Play_Tone(int _pin, int _frequency, int _length) {
  pinMode(_pin, OUTPUT);
  analogWriteFreq(_frequency);
  analogWrite(_pin, 512);
  delay(_length);
  analogWrite(_pin, 0);
}


void ESP8266_Tones::Chirp(int _pin) {
  Play_Tone(_pin, Note_A7, 10); // F6
  Play_Tone(_pin, Note_C8, 20); // F5
} // End of beep

void ESP8266_Tones::Bleep(int _pin) {
  Play_Tone(_pin, Note_C7, 50); // F6
  Play_Tone(_pin, Note_C8, 100); // F5
} // End of beep

void ESP8266_Tones::Tone_Down(int _pin) {
  Play_Tone(_pin, Note_F6, 200); // F6
  Play_Tone(_pin, Note_F5, 200); // F5
  Play_Tone(_pin, Note_C6, 200); // C6
} // End of beep

void ESP8266_Tones::Tone_Up(int _pin) {
  Play_Tone(_pin, Note_C6, 200); // C6
  Play_Tone(_pin, Note_F5, 200); // F5
  Play_Tone(_pin, Note_F6, 200); // F6
} // End of beep

void ESP8266_Tones::Ringer(int _pin) {
  Play_Tone(_pin, Note_F6, 75);
  Play_Tone(_pin, Note_F5, 75);
  Play_Tone(_pin, Note_F6, 75);
  Play_Tone(_pin, Note_F5, 75);
  Play_Tone(_pin, Note_F6, 75);
  Play_Tone(_pin, Note_F5, 75);
  Play_Tone(_pin, Note_F6, 75);
  Play_Tone(_pin, Note_F5, 75);
} // End of beep

// Star Wars Imperial March
void ESP8266_Tones::Imperial_March(int _pin) {
  Play_Tone(_pin, Note_A4, 500);
  Play_Tone(_pin, Note_A4, 500);
  Play_Tone(_pin, Note_A4, 500);
  Play_Tone(_pin, Note_F4, 350);
  Play_Tone(_pin, Note_C5, 150);
  Play_Tone(_pin, Note_A4, 500);
  Play_Tone(_pin, Note_F4, 350);
  Play_Tone(_pin, Note_C5, 150);
  Play_Tone(_pin, Note_A4, 650);
} // End of march

// Close Encounters Theme
// http://www.johnloomis.org/ece303L/notes/music/Close_Encounters.html and http://www.johnloomis.org/ece303L/notes/music/Close_Encounters.html
void ESP8266_Tones::Close_Encounters(int _pin) {
  Play_Tone(_pin, Note_G6, 300); // G6
  Play_Tone(_pin, Note_A6, 300); // A6
  Play_Tone(_pin, Note_F6, 300); // F6
  Play_Tone(_pin, Note_F5, 300); // F5
  Play_Tone(_pin, Note_C6, 300); // C6
} // End of Close encounters


// Harry Potter (Hedwig's Theme)
void ESP8266_Tones::Harry_Potter(int _pin) {

  Play_Tone(_pin, Note_DS5, 300);
  Play_Tone(_pin, Note_GS5, 450);
  Play_Tone(_pin, Note_B5, 150);
  Play_Tone(_pin, Note_A5, 300);
  Play_Tone(_pin, Note_GS5, 600);
  Play_Tone(_pin, Note_DS6, 300);
  Play_Tone(_pin, Note_CS6, 750);
  Play_Tone(_pin, Note_AS5, 750);

  Play_Tone(_pin, Note_GS5, 450);
  Play_Tone(_pin, Note_B5, 150);
  Play_Tone(_pin, Note_A5, 300);

  //  Play_Tone(Note_F5, 600);
  Play_Tone(_pin, Note_G5, 600);

  Play_Tone(_pin, Note_A5, 300);
  Play_Tone(_pin, Note_DS5, 750);

} // End of Harry Potter

