#include <FastLED.h>

/*code called thor hammer
does the fallowing:
1. activates led animation on tilt senson
2. plays thunder on tilt sensor
- tilt sensor/fastLed 
*/
#define LED_DATA_PIN    3
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
#define NUM_LEDS    8

CRGB leds[NUM_LEDS];

#define BRIGHTNESS          96
#define FRAMES_PER_SECOND  120
int ledPin = 13;
int inPin = 7;
int value = 0;


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  value = digitalRead(inPin);
  digitalWrite(ledPin, value);
  if(value > 1)
  {
    PlayAnimation();
  }

}
void PlaySound(){
   //* play thunder 
}
void PlayAnimation(){
     delay(3000); // 3 second delay for recovery
}
