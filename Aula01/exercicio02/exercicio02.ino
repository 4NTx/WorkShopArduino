#define POTENCIOMETRO A0
#define LED 9

int valorPotenciometro = 0;
int valorLED = 0;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  valorPotenciometro = analogRead(POTENCIOMETRO);
  valorLED = map(valorPotenciometro, 0, 1023, 0, 255);
  analogWrite(LED, valorLED);
  delay(10);
}