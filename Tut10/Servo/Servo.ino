#include<Servo.h>
Servo satvikServo;

int ServoPin=9;


void setup() {

  Serial.begin(9600);
  //"Attach" The Servo object
  //No need to set up output manually
  satvikServo.attach(servoPin);
}

void loop() {
  while(Serial.available()==0);

  int data=Serial.read()-'0';

  int pos=map(data,0,9,0,180);
  pos=constraint(pos,0,180);
  
  //Turn the Servo
  satvikServo.write(pos);
  Serial.flush();
    
}
