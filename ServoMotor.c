#include <Servo.h>

Servo servoMotor; 

int angle = 0; 

void setup() {
  servoMotor.attach(9); 
}

void loop() {
 
  for (angle = 0; angle <= 180; angle += 1) {
    servoMotor.write(angle); 
    delay(15);
  }
  
  for (angle = 180; angle >= 0; angle -= 1) {
    servoMotor.write(angle);  
    delay(15);  
  }
}
