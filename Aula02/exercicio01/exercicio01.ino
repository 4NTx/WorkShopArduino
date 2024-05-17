#include <Servo.h>

#define POTENCIOMETRO A0
#define SERVO_PIN 9

Servo meuServo;
int valorPotenciometro = 0;
int anguloServo = 0;

void setup()
{
  meuServo.attach(SERVO_PIN);
}

void loop()
{
  valorPotenciometro = analogRead(POTENCIOMETRO);
  anguloServo = map(valorPotenciometro, 0, 1023, 0, 180);
  meuServo.write(anguloServo);
  delay(15);
}
