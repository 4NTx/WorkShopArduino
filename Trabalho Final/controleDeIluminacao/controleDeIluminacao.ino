#define LDR_PIN A0
#define LED_VERDE 6
#define LED_AZUL 7
#define LED_VERMELHO 8

void setup()
{
    pinMode(LED_VERDE, OUTPUT);
    pinMode(LED_AZUL, OUTPUT);
    pinMode(LED_VERMELHO, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int luz = analogRead(LDR_PIN);
    Serial.print("Luz: ");
    Serial.println(luz);

    if (luz < 500)
    {
        digitalWrite(LED_VERDE, HIGH);
        digitalWrite(LED_AZUL, HIGH);
        digitalWrite(LED_VERMELHO, HIGH);
    }
    else
    {
        digitalWrite(LED_VERDE, LOW);
        digitalWrite(LED_AZUL, LOW);
        digitalWrite(LED_VERMELHO, LOW);
    }

    delay(1000);
}
