Este projeto tem como objetivo demonstrar como realizar o acionamento e desacionamento de um LED.

## Lista de materiais:

 - 1 LED azul;
 - 1 Resistor 220Ω.

## Modelo esquemático em Protoboard

![Modelo esquemático](../arq/proj1.png)

??? note "Código"
    ```c
    int led = 12;
    void setup() {
      pinMode(led, OUTPUT);
    }
    void loop() {
      digitalWrite(led, HIGH);
      delay(1000); 
      digitalWrite(led, LOW); 
      delay(1000);
    }
    ```

??? note "Código Comentado"
    ```c
    int led = 12; //declara a variável "led" como tipo int, ligada na porta 12 do arduino 
    void setup() {
      pinMode(led, OUTPUT); //declara o pino 12, variável "led", como uma saída 
    }
    void loop() {
      digitalWrite(led, HIGH); //determina o acionamento do pino 12, variável "led", como HIGH, alto, ligado 
      delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
      digitalWrite(led, LOW); //determina o desacionamento do pino 12, variável "led", como LOW, baixo, desligado 
      delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
    }
    ```

## Arquivos para Download

[![Arquivo ino](../arq/ino.png)](../arq/proj1.ino)          [![Arquivo fzz](../arq/fzz.png)](../arq/proj1.fzz)