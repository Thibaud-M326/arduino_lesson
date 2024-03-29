#include <Servo.h>

Servo servo;

void setup()
{
    servo.attach(9);
    servo.write(90);
}

void loop()
{
    servo.write(90);
    delay(500);
    servo.write(30);
    delay(500);
}