void setup()
{
  pinMode(5,INPUT_PULLUP);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int swtch = digitalRead(5);//Reading value from switch
  if(!swtch)
    digitalWrite(4,HIGH);
  else
    digitalWrite(4,LOW);
    
  Serial.println(swtch);
}
