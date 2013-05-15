#include <SoftwareSerial.h>

int rxSpeech = 4;
int txSpeech = 5;

SoftwareSerial Speech = SoftwareSerial(rxSpeech,txSpeech);

void setup() {
  Speech.begin(9600);
  Speech.println("Katherine, go back to bed!");
}

void loop() {
  // put your main code here, to run repeatedly: 
  
}
