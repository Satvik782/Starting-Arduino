int buttonPin = 8;
void setup()
{
  pinMode(buttonPin, INPUT);

  //Allows us to listen to serial communication from the arduino
  Serial.begin(9600);
}

void loop() 
{
  Serial.println(digitalRead(buttonPin));
  delay(1000);
}
