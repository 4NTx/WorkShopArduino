#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <NewPing.h>

#define TRIGGER_PIN 7
#define ECHO_PIN 6
#define DISTANCIA_MAXIMA 200

LiquidCrystal_I2C lcd(0x27, 16, 2);
NewPing sonar(TRIGGER_PIN, ECHO_PIN, DISTANCIA_MAXIMA);

void setup()
{
    lcd.init();
    lcd.backlight();
    lcd.print("Distancia:");
}

void loop()
{
    delay(50);
    unsigned int microSegundos = sonar.ping();
    float distanciaCm = microSegundos / US_ROUNDTRIP_CM;

    lcd.setCursor(0, 1);
    lcd.print(distanciaCm);
    lcd.print(" cm");
    delay(500);
}
