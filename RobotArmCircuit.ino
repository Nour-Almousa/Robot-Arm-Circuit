#include <Servo.h>
Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;

//Potentiometers Defintion
int pot1 = A0;
int pot2 = A1;
int pot3 = A2;
int pot4 = A3;
int pot5 = A4;
  
int valPot1;
int valPot2;
int valPot3;
int valPot4;
int valPot5;

void setup()
{
//define servo1 start position
motor1.attach(9); 
motor1.write(90); 
//define servo2 start position
motor2.attach(6);
motor2.write(90);
//define servo3 start position
motor3.attach(5);
motor3.write(90); 
//define servo4 start position
motor4.attach(3);
motor4.write(90); 
//define servo5 start position
motor5.attach(10);
motor5.write(0); 
}
void loop()
{
valPot1 = analogRead(pot1);
valPot1 = map (valPot1, 0, 1023, 0, 90); //(servo value between 0 and 90)
motor1.write(valPot1);
valPot2 = analogRead(pot2);
valPot2 = map (valPot2, 0, 1023, 0, 90);
motor2.write(valPot2);
valPot3 = analogRead(pot3);
valPot3 = map (valPot3, 0, 1023, 0, 90);
motor3.write(valPot3);
valPot4 = analogRead(pot4);
valPot4 = map (valPot4, 0, 1023, 0, 90);
motor4.write(valPot4);
valPot5 = analogRead(pot5);
valPot5 = map (valPot5, 0, 1023, 0, 90);
motor5.write(valPot5);
}