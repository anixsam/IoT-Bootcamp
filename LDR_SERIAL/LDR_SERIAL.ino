float ldr;
void setup() 
{
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  ldr=analogRead(A0);
  Serial.println(ldr);
}
