

#include <FastLED.h>


#define NUM_LEDS 5

#define DATA_PIN 3
#define CLOCK_PIN 13

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  delay(500);
  leds[0] = CRGB::Black;
  FastLED.show();
  leds[1] = CRGB::Black;
  FastLED.show();
  leds[2] = CRGB::Black;
  FastLED.show();
  leds[3] = CRGB::Black;
  FastLED.show();
  leds[4] = CRGB::Black;
  FastLED.show();


  int count = 0;
if(0==0){ //Füllstand dependancy
  while (count <= 4) {
    leds[count] = CRGB::Green;
    delay(analogRead(A5));
    FastLED.show();
    count++;
  }

}

  count = 0;
}
