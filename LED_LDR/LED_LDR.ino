float ldr;
void setup() 
{
  pinMode(A0,INPUT);
  pinMode(5,OUTPUT);//D1 pin 
  Serial.begin(9600);
}

void loop()
{
  ldr=analogRead(A0);
  Serial.println(ldr);
  digitalWrite(5,ldr);
    
}
