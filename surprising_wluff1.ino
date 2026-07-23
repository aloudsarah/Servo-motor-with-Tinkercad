// C++ code
//
/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
Servo servo;

void setup()
{
  servo.attach(9);
}


void loop()
{
 servo.write(90);
 delay(900);
  
   for(int i=0; i<3; i++){
   	
   	servo.write(40);
   	delay(500);
    servo.write(130);
    delay(2000);
   }
  servo.write(90);
  delay(4000);
}