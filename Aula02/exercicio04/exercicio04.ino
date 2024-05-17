#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define LCD_ADDRESS 0x27
#define LCD_COLUNAS 16
#define LCD_LINHAS 2
#define TERMISTOR_PIN A0
#define FOTORESISTOR_PIN A1
#define RESISTOR_SERIE 10000
#define RESISTENCIA_NOMINAL 10000
#define TEMPERATURA_NOMINAL 25
#define COEFICIENTE_B 3950

LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLUNAS, LCD_LINHAS);

void setup()
{
    lcd.init();
    lcd.backlight();
}

void loop()
{
    float temperatura = lerTemperatura();
    int valorLuz = lerLuminosidade();

    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temperatura);
    lcd.print("C");

    lcd.setCursor(0, 1);
    lcd.print("Luz: ");
    lcd.print(valorLuz);
    lcd.print("%");

    delay(1000);
}

float lerTemperatura()
{
    int valorADC = analogRead(TERMISTOR_PIN);
    float resistenciaTermistor = RESISTOR_SERIE / (1023.0 / valorADC - 1.0);
    float steinhart;
    steinhart = resistenciaTermistor / RESISTENCIA_NOMINAL;
    steinhart = log(steinhart);
    steinhart /= COEFICIENTE_B;
    steinhart += 1.0 / (TEMPERATURA_NOMINAL + 273.15);
    steinhart = 1.0 / steinhart;
    steinhart -= 273.15;

    return steinhart;
}

int lerLuminosidade()
{
    int valorADC = analogRead(FOTORESISTOR_PIN);
    int luminosidade = map(valorADC, 0, 1023, 0, 100);

    return luminosidade;
}
