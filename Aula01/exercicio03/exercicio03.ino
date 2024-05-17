#define LEDVerde 2
#define LEDVermelho 3
#define BOTAO 4

int estadoBotao = 0;
int estadoLEDVerde = LOW;
int estadoLEDVermelho = HIGH;

void setup()
{
  pinMode(LEDVerde, OUTPUT);
  pinMode(LEDVermelho, OUTPUT);
  pinMode(BOTAO, INPUT);

  digitalWrite(LEDVerde, estadoLEDVerde);
  digitalWrite(LEDVermelho, estadoLEDVermelho);
}

void loop()
{
  estadoBotao = digitalRead(BOTAO);

  if (estadoBotao == HIGH)
  {
    estadoLEDVerde = !estadoLEDVerde;
    estadoLEDVermelho = !estadoLEDVermelho;

    digitalWrite(LEDVerde, estadoLEDVerde);
    digitalWrite(LEDVermelho, estadoLEDVermelho);

    delay(200);
  }
}
