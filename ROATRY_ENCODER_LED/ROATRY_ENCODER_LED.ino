#include "ESPRotary.h";

#define ROTARY_PIN1  14
#define ROTARY_PIN2 12
int pos;
int led[2] = {4,5};
ESPRotary r = ESPRotary(ROTARY_PIN1, ROTARY_PIN2);

void setup() {
  
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  delay(50);
  

  r.setChangedHandler(rotate);
}

void loop() {
  r.loop();
}

void rotate(ESPRotary& r) {
   pos = r.getPosition();

   digitalWrite(led[pos],HI  GH);
   digitalWrite(led[pos-1],LOW);
   Serial.println(pos);
}
