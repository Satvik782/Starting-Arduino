#include<Wire.h>

int temp_address=72;

void setup() {
 Serial.begin(9600);
 Wire.begin();

}

void loop() 
{
  //Send a request
  //Start Talking
  Wire.beginTransmission(temp_address);
  //Askfor Register Zero
  Wire.send(0);
  //Complete Transmission
  Wire.endTransmission();
  //Request 1 byte
  Wire.requestFrom(temp_address,1);
  //Wait for response
  while(Wire.available()==0);
  //get the temp
  int c=Wire.receive();
  //COnvert to farheneit
  int f=round(c*9.0/5.0+32.0);
  //print the results
  Serial.print(c);
  Serial.print("C,");
  Serial.print(f);
  Serial.print("F.");
  //delay,then do it again
  delay(500);

}
