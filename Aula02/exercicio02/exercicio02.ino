#include <Servo.h>
#include <LiquidCrystal.h>

#define SERVO_PIN 9
#define RS 7
#define EN 8
#define D4 9
#define D5 10
#define D6 11
#define D7 12

Servo meuServo;
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);
int anguloServo = 0;

void setup()
{
    meuServo.attach(SERVO_PIN);
    lcd.begin(16, 2);
    lcd.print("Posicao Servo:");
}

void loop()
{
    for (int pos = 0; pos <= 180; pos++)
    {
        meuServo.write(pos);
        mostrarPosicao(pos);
        delay(15);
    }
    for (int pos = 180; pos >= 0; pos--)
    {
        meuServo.write(pos);
        mostrarPosicao(pos);
        delay(15);
    }
}

void mostrarPosicao(int pos)
{
    lcd.setCursor(0, 1);
    lcd.print("Angulo: ");
    lcd.print(pos);
}
