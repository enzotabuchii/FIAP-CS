#include "Servo.h"

Servo servo;

void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT_PULLUP);
  servo.attach(3);
}

void loop() {
  Serial.println(!digitalRead(4));
  servo.write(0);
  delay(1000);
  servo.write(180);
  delay(1000);
}
