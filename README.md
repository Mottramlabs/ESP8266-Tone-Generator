## ESP8266-Tone-Generator
Simple library to drive a speaker with an ESP8266 to make alert tones

~~~c++
// ESP8266 Tone Generator library - ESP8266 only.
// Does not work with Arduino as analogWriteFreq not present in Arduino library

// Functions
	Play_Tone(Speaker Pin, Frequency, Duration);
	Chirp(Speaker);
	Bleep(Speaker);
	Tone_Down(Speaker);
	Tone_Up(Speaker);
	Ringer(Speaker);
	Imperial_March(Speaker);
	Close_Encounters(Speaker);
	Harry_Potter(Speaker);
~~~



### Speaker Driver Schematic

![Display-Type-B](https://github.com/Mottramlabs/ESP8266-Tone-Generator/blob/master/Speaker%20Driver.png?raw=true)

#### 10th July 2020
Changed the speaker connection to be an input when not used. This avoids power supply noise being picked up by the 
speaker driver on some boards.
