void setup() 
{
  pinMode(motorPin, OUTPUT)
}

void loop()
{  
  //Accelerate from 0 to 255
  for(int i=0;i<=255;i++)
  {
    analogWrite(motorPin,i);
    delay(10);
  }
  //Hold at top speed
  delay(500);
  //Decrease Speed from255 to 0
  for(int i=255;i>=0;i--)
  {
    analogWrite(motorPin,i);
    delay(10);
  }
  //Hold at zero
  delay(500);
}
