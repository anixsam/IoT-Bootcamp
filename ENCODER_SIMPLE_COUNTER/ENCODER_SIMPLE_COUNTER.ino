#include "ESPRotary.h";

#define ROTARY_PIN1	14
#define ROTARY_PIN2	12

ESPRotary r = ESPRotary(ROTARY_PIN1, ROTARY_PIN2);

void setup() {
  Serial.begin(9600);
  delay(50);
 
  r.setChangedHandler(rotate);
}

void loop() {
  r.loop();
}


void rotate(ESPRotary& r) {
   Serial.println(r.getPosition());
}
