#define PIR_PIN 3
#define BUZZER_PIN 9
#define LED_VERDE 6
#define LED_AZUL 7
#define LED_VERMELHO 8

void setup()
{
    pinMode(PIR_PIN, INPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(LED_VERDE, OUTPUT);
    pinMode(LED_AZUL, OUTPUT);
    pinMode(LED_VERMELHO, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int movimento = digitalRead(PIR_PIN);

    if (movimento == HIGH)
    {
        digitalWrite(BUZZER_PIN, HIGH);
        digitalWrite(LED_VERMELHO, HIGH);
        digitalWrite(LED_VERDE, LOW);
        Serial.println("Movimento detectado!");
    }
    else
    {
        digitalWrite(BUZZER_PIN, LOW);
        digitalWrite(LED_VERMELHO, LOW);
        digitalWrite(LED_VERDE, HIGH);
        Serial.println("Nenhum movimento.");
    }

    delay(1000);
}
