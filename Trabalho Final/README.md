# Projeto Final: Blockino
# Projeto desatualizado
## Descrição

Este projeto é uma versão do Blockino que permite aos estudantes programar um Arduino com vários sensores e atuadores já conectados, sem a necessidade de montagem física dos componentes eletrônicos. A ideia é facilitar o aprendizado de programação e interação com dispositivos de hardware, fornecendo uma plataforma com componentes pré-conectados.

## WokWi

- https://wokwi.com/projects/398704619127480321
- Projeto Final.zip
- ![projeto](https://i.imgur.com/gX9QieJ.png)

## Componentes

- 1x Arduino UNO
- 1x Sensor de Temperatura e Umidade (DHT22)
- 1x Sensor de Luz (LDR)
- 1x Sensor de Distância Ultrassônico (HC-SR04)
- 1x Sensor de Movimento (PIR)
- 1x Botão Push-button
- 3x LEDs (vermelho, azul, verde)
- 1x Buzzer
- 1x Servo Motor
- 4x Resistores de 220Ω (para os LEDs)
- 1x Resistor de 10kΩ (para o LDR)
- Jumpers

## Bibliotecas

- DHT22
- DHT SENSOR LIBRARY
- ServoMotor
- DebouncedLDR

## Ligações

### DHT22 (Sensor de Temperatura e Umidade)

- VCC -> 5V do Arduino
- GND -> GND do Arduino
- DATA -> Pino Digital 2 do Arduino

### LDR (Sensor de Luz)

- Um terminal do LDR -> 5V do Arduino
- Outro terminal do LDR -> Pino A0 do Arduino
- Resistor de 10kΩ entre o terminal do LDR e o GND do Arduino

### HC-SR04 (Sensor de Distância Ultrassônico)

- VCC -> 5V do Arduino
- GND -> GND do Arduino
- TRIG -> Pino Digital 4 do Arduino
- ECHO -> Pino Digital 5 do Arduino

### PIR (Sensor de Movimento)

- VCC -> 5V do Arduino
- GND -> GND do Arduino
- OUT -> Pino Digital 3 do Arduino

### Botão Push-button

- Terminal direito (1.r) -> Pino Digital 11 do Arduino
- Terminal direito (2.r) -> GND do Arduino
- Terminal esquerdo (3.l) -> 5V do Arduino

### LEDs

#### LED Vermelho

- Anodo -> Resistor de 220Ω -> Pino Digital 8 do Arduino
- Cátodo -> GND do Arduino

#### LED Azul

- Anodo -> Resistor de 220Ω -> Pino Digital 7 do Arduino
- Cátodo -> GND do Arduino

#### LED Verde

- Anodo -> Resistor de 220Ω -> Pino Digital 6 do Arduino
- Cátodo -> GND do Arduino

### Buzzer

- Pino positivo -> Pino Digital 9 do Arduino
- Pino negativo -> GND do Arduino

### Servo Motor

- VCC -> 5V do Arduino
- GND -> GND do Arduino
- Sinal -> Pino Digital 10 do Arduino
