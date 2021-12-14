void setup() {
  pinMode(4,OUTPUT);//D2 in Node MCU
}

void loop() {

  digitalWrite(4,HIGH); //Turn on LED
  delay(1000);
  digitalWrite(4,LOW); //Turn off LED
  delay(1000);

}
