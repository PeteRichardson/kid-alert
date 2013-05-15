#include <SoftwareSerial.h>
#include "Emic2TtsModule.h"

int pirPin   =  2;
int rxSpeech =  4;
int txSpeech =  5;
int ledPin   = 13;

int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status

SoftwareSerial emic2Serial = SoftwareSerial(rxSpeech,txSpeech);
Emic2TtsModule emic = Emic2TtsModule(&emic2Serial);

void setup() {
  emic2Serial.begin(9600);
  emic.init();
  emic.say("");
}

void loop() {
  val = digitalRead(pirPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED ON
    if (pirState == LOW) {
      // we have just turned on
      emic.say(">>__Katherine!<<Go back to __bed. ");
      // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW); // turn LED OFF
    if (pirState == HIGH){
      // we have just turned of
      emic.say("good night");
      // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
}
