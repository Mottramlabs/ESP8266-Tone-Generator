

#include <ESP8266WiFi.h>              // Needed for EPS8266

#define Speaker 12

#include <ESP8266_Tones.h>
ESP8266_Tones Mytone(Speaker);


void setup() {
  // put your setup code here, to run once:

}

void loop() {

  yield();

  Mytone.Tone_Up(Speaker);

  delay(3000);

}
