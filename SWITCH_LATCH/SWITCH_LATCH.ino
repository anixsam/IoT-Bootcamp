int prev=0;
void setup()
{
  pinMode(5,INPUT_PULLUP);
  pinMode(4,OUTPUT);
}

void loop()
{
  int swtch = digitalRead(5);
  if(swtch==0)
  {
     if(prev==1)
      prev=0;
     else
      prev=1;
  }

  if(prev==0)
    digitalWrite(4,HIGH);
  else
    digitalWrite(4,LOW);

  delay(250);
}
