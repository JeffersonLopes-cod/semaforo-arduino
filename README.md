
# Projeto Semáforo de Carros

Este projeto implementa um semáforo de carros utilizando uma placa Arduino. O semáforo controla três LEDs (verde, amarelo e vermelho) e um buzzer sonoro para simular um sinal sonoro.

## Componentes Utilizados

- Placa Arduino
- LEDs (Verde, Amarelo, Vermelho)
- Resistores
- Buzzer
- Cabos de conexão
- Protoboard

## Descrição do Código

O código configura os pinos dos LEDs e do buzzer como saídas e implementa a lógica de controle do semáforo. A sequência do semáforo é a seguinte:

1. **Sinal Verde**: O LED verde acende e os outros LEDs apagam.
2. **Sinal Amarelo**: O LED amarelo acende e os outros LEDs apagam.
3. **Sinal Vermelho**: O LED vermelho acende e os outros LEDs apagam.

Além disso, um buzzer emite um som durante o sinal amarelo.

## Diagrama de Conexões

- LED Verde: Pino 11
- LED Amarelo: Pino 12
- LED Vermelho: Pino 13
- Buzzer: Pino 10

## Funções do Código

### setup()
Configura os pinos dos LEDs e do buzzer como saídas.

### loop()
Implementa a sequência de operação do semáforo, incluindo a lógica para acender os LEDs e ativar o buzzer.

### sinalVerde()
Acende o LED verde e apaga os outros LEDs. Dura 3 segundos.

### sinalAmarelo()
Acende o LED amarelo e apaga os outros LEDs. Dura 2 segundos.

### sinalVermelho()
Acende o LED vermelho e apaga os outros LEDs. Dura 5 segundos.

### sonoro()
Ativa o buzzer por 1 segundo durante o sinal amarelo.
