# Robot-Arm-Circuit
- The robot arm has five joints, so this robot arm consists of five servo motors and five potentiometers. The potentiometer controls the angle of the servo motor.
- I used the **Tinkercad Circuits tool** to easily simulate the robot arm circuit with Arduino.
### Components
1. Arduino Uno R3
2. Five Positional Micro Servos
3. Five 10 kΩ Potentiometers
4. Breadboard 
5. Jumper wires

![Screenshot circuit](https://user-images.githubusercontent.com/86366710/129685475-2602713a-33e2-4285-883a-7cbe42c1d66c.png)

- The potentiometers are connected to analog pins: A0 to A4
- The servos are connected to digital pins: 3, 5, 6, 9, 10
- The values of analog input pins are ranging from 0 to 1023, and I want the servo value to be from 0 to 90
- I used the map() function so that the possible values of the angle are from 0 to 90
