#include <SoftwareSerial.h>
#include "Emic2TtsModule.h"

int rxSpeech = 4;
int txSpeech = 5;

SoftwareSerial emic2Serial = SoftwareSerial(rxSpeech,txSpeech);
Emic2TtsModule emic = Emic2TtsModule(&emic2Serial);

void setup() {
  emic2Serial.begin(9600);
  emic.init();
  emic.say("Katherine, go back to bed!");
}

void loop() {
  // put your main code here, to run repeatedly: 
  
}
