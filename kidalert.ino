#include <SoftwareSerial.h>
#include "Emic2TtsModule.h"

int rxSpeech = 4;
int txSpeech = 5;

SoftwareSerial emic2Serial = SoftwareSerial(rxSpeech,txSpeech);
Emic2TtsModule emic = Emic2TtsModule(&emic2Serial);

void setup() {
   emic2Serial.begin(9600);
   emic.init();
   emic.say("[hxae<300,10>piy<300,10> brrrx<600,12> th<100> dey<600,10> tuw<600,15> yu<1200,14>_<300> "\
             "hxae<300,10>piy<300,10> brrrx<600,12> th<100> dey<600,10> tuw<600,17> yu<1200,15>_<300>" \
             "hxae<300,10>piy<300,10> brrrx<600,22> th<100> dey<600,19> dih<500,15>rrr<200,14> m<100,14>ih<400,14>ih<550,12> k_<120>_<300>" \
             "hxae<300,20>piy<300,20> brrrx<600,19> th<100> dey<600,15> tuw<600,17> yu<1400,15>] ");
   delay(2000);
   emic.say("[ae<400,10>nd meh<300,12>niy<500,10> m<100,13>ow<1000,13>rrr<300,13>] ");
}

void loop() {
  // put your main code here, to run repeatedly: 
  
}
