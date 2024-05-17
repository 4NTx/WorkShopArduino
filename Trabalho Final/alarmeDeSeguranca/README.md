# Estação Meteorológica

## Descrição

Este projeto monitora a temperatura, umidade e intensidade da luz ambiente usando um sensor DHT22 e um sensor LDR. LEDs indicam condições específicas: um LED vermelho acende quando a temperatura está muito alta, um LED azul acende quando a umidade está baixa e um LED verde acende quando a luz ambiente está fraca.

## WokWi

 - https://wokwi.com/projects/398099610400269313
 - Alarme De Seguranca.zip
 - ![projeto](https://i.imgur.com/t9jU46C.png)

## Componentes

- 1x Arduino UNO
- 1x Sensor de Temperatura e Umidade (DHT22)
- 1x Sensor de Luz (LDR)
- 3x LEDs (vermelho, azul, verde)
- 3x Resistores de 220Ω (para os LEDs)
- 1x Resistor de 10kΩ (para o LDR)
- Jumpers

## Bibliotecas

- Não necessário

## Ligações

- **DHT22**:

  - VCC -> 5V do Arduino
  - GND -> GND do Arduino
  - DATA -> Pino Digital 2 do Arduino

- **LDR**:

  - Um terminal do LDR -> 5V do Arduino
  - Outro terminal do LDR -> Pino A0 do Arduino
  - Resistor de 10kΩ entre o terminal do LDR e o GND do Arduino

- **LED Vermelho**:

  - Anodo -> Resistor de 220Ω -> Pino Digital 8 do Arduino
  - Cátodo -> GND do Arduino

- **LED Azul**:

  - Anodo -> Resistor de 220Ω -> Pino Digital 7 do Arduino
  - Cátodo -> GND do Arduino

- **LED Verde**:
  - Anodo -> Resistor de 220Ω -> Pino Digital 6 do Arduino
  - Cátodo -> GND do Arduino
