#include<Servo.h>
Servo satvikServo;

int ServoPin=9;
int distPin=0;

void setup() {
  //"Attach" The Servo object
  //No need to set up output manually
  satvikServo.attach(servoPin);
}

void loop() {
  //Turn motor 0 to 180 by 20 degrees each
  int dist =analogRead(distPin);
  int pos= map(dist,0,1023,0,180);
  satvikServo.write(pos);
    
}
