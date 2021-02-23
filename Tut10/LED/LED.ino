int switchPin=2;
int ledPin=13;
boolean lastButton=LOW;
boolean ledOn=false;

void setup()
{
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  Serial.println(digitalRead(switchPin));
   
 if(digitalRead(switchPin) == HIGH && lastButton==LOW)
 {
     ledOn=!ledOn;
     lastButton=HIGH;
 }
 else
 {
   lastButton=digitalWrite(switchPin);
 }
}
