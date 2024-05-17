# Sistema de Alarme de Segurança

## Descrição

Este projeto utiliza um sensor de movimento (PIR) para detectar movimento em uma área. Quando o movimento é detectado, um alarme sonoro (buzzer) e visual (LED vermelho) é ativado.

## WokWi

 - https://wokwi.com/projects/398099723094951937
 - Controle De Iluminacao.zip
 - ![projeto](https://i.imgur.com/m5f5Qh6.png)

## Componentes

- 1x Arduino UNO
- 1x Sensor de Movimento (PIR)
- 1x Buzzer
- 3x LEDs (vermelho, azul, verde)
- Jumpers

## Bibliotecas

- Não necessário

## Ligações

- **PIR**:

  - VCC -> 5V do Arduino
  - GND -> GND do Arduino
  - OUT -> Pino Digital 3 do Arduino

- **Buzzer**:

  - Pino positivo -> Pino Digital 9 do Arduino
  - Pino negativo -> GND do Arduino

- **LED Vermelho**:

  - Anodo -> Pino Digital 8 do Arduino
  - Cátodo -> GND do Arduino

- **LED Azul**:

  - Anodo -> Pino Digital 7 do Arduino
  - Cátodo -> GND do Arduino

- **LED Verde**:
  - Anodo -> Pino Digital 6 do Arduino
  - Cátodo -> GND do Arduino
