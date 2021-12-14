int ldr;
void setup() 
{
  pinMode(A0,INPUT);
  pinMode(5,OUTPUT);//D1 pin 
}

void loop()
{
  ldr=analogRead(A0);
  digitalWrite(5,ldr);
    
}
