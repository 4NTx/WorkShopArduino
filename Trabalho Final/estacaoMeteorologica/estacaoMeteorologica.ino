#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22

#define LDR_PIN A0
#define LED_VERDE 6
#define LED_AZUL 7
#define LED_VERMELHO 8

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
    pinMode(LED_VERDE, OUTPUT);
    pinMode(LED_AZUL, OUTPUT);
    pinMode(LED_VERMELHO, OUTPUT);
    Serial.begin(9600);
    dht.begin();
}

void loop()
{
    float temperatura = dht.readTemperature();
    float umidade = dht.readHumidity();
    int luz = analogRead(LDR_PIN);

    if (isnan(temperatura) || isnan(umidade))
    {
        Serial.println("Falha na leitura do DHT22!");
        return;
    }

    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print(" °C, Umidade: ");
    Serial.print(umidade);
    Serial.print(" %, Luz: ");
    Serial.println(luz);

    if (temperatura > 30)
    {
        digitalWrite(LED_VERMELHO, HIGH);
    }
    else
    {
        digitalWrite(LED_VERMELHO, LOW);
    }

    if (umidade < 30)
    {
        digitalWrite(LED_AZUL, HIGH);
    }
    else
    {
        digitalWrite(LED_AZUL, LOW);
    }

    if (luz < 500)
    {
        digitalWrite(LED_VERDE, HIGH);
    }
    else
    {
        digitalWrite(LED_VERDE, LOW);
    }

    delay(2000);
}
