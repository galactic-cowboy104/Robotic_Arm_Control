#include <Servo.h>

#define IN1 A0
#define IN2 A1
#define IN3 A2
#define IN4 A3

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

uint16_t sig1 = 0;
uint16_t sig2 = 0;
uint16_t sig3 = 0;
uint16_t sig4 = 0;


void setup() {
  
  Serial.begin(9600);

  servo1.attach(2, 1000, 2000);
  servo2.attach(3, 1000, 2000);
  servo3.attach(4, 1000, 2000);
  servo4.attach(5, 1000, 2000);
 
  
}

void loop() {

  sig1 = map(analogRead(IN1), 0, 1023, 0, 180);
  sig2 = map(analogRead(IN2), 0, 1023, 0, 180);
  sig3 = map(analogRead(IN3), 0, 1023, 0, 180);
  sig4 = map(analogRead(IN4), 0, 1023, 0, 180);

  servo1.write(sig1);
  servo2.write(sig2);
  servo3.write(sig3);
  servo4.write(sig4);
  
  Serial.println("Señal 1: " + String(sig1));
  Serial.println("Señal 2: " + String(sig2));
  Serial.println("Señal 3: " + String(sig3));
  Serial.println("Señal 4: " + String(sig4));
  Serial.println("");

  delay(10);

}
