#include <FastLED.h>

/*code called thor hammer
does the fallowing:
1. activates led animation on tilt senson
2. plays thunder on tilt sensor
- tilt sensor/fastLed 
*/
int ledPin = 13;
int inPin = 7;
int value = 0;


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  value = digitalRead(inPin);
  digitalWrite(ledPin, value);

}
