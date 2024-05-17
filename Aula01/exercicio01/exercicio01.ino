#define LED_VERDE 2
#define LED_AMARELO 3
#define LED_AZUL 4

void setup()
{
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
}

void loop()
{
  digitalWrite(LED_VERDE, HIGH);
  delay(500);
  digitalWrite(LED_VERDE, LOW);
  delay(500);

  digitalWrite(LED_AMARELO, HIGH);
  delay(500);
  digitalWrite(LED_AMARELO, LOW);
  delay(500);

  digitalWrite(LED_AZUL, HIGH);
  delay(500);
  digitalWrite(LED_AZUL, LOW);
  delay(500);
}
