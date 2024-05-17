# Controle de Iluminação Automática

## Descrição

Este projeto utiliza um sensor de luz (LDR) para controlar automaticamente a iluminação com base na intensidade da luz ambiente. Os LEDs acendem quando o ambiente está escuro.

## WokWi

 - https://wokwi.com/projects/398099286810707969
 - Estacao Meteorologica.zip
 - ![projeto](https://i.imgur.com/FwZgKRn.png)


## Componentes

- 1x Arduino UNO
- 1x Sensor de Luz (LDR)
- 3x LEDs (vermelho, azul, verde)
- 3x Resistores de 220Ω (para os LEDs)
- 1x Resistor de 10kΩ (para o LDR)
- Jumpers

## Bibliotecas

- DHT22
- DHT SENSOR LIBRARY

## Ligações

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
