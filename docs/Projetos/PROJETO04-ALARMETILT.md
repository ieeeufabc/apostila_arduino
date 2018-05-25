Nesse projeto utilizaremos um sensor de inclinação para acionar um alarme!

## Lista de materiais

 - 1 LED Vermelho
 - 1 Resistor 220Ω
 - 1 Sensor de inclinação

## Modelo esquemático em Protoboard

![Modelo esquemático][proj4png]

??? note "Código"
    ```c
    const int tilt = 2; 
    const int led = 11;
    int estado; 
    void setup() {
      pinMode(tilt, INPUT); 
      pinMode(led, OUTPUT);
    }
    void loop() {
      estado = digitalRead(tilt); 
      if (estado == HIGH) { 
      } else { 
        digitalWrite(led, LOW);
      }
    }
    ```

??? note "Código Comentado"
    ```c
    const int tilt = 2; //declara a variável "tilt" como tipo int, ligada na porta digital 2 do arduino 
    const int led = 11; //declara a variável "led" como tipo int, ligada na porta digital 11 do arduino
    int estado; //declara a variável "estado" como tipo int 0; variável de estado de acionamento do botão 
    void setup() {
      pinMode(tilt, INPUT); //declara o pino 2, variável "tilt" como uma entrada 
      pinMode(led, OUTPUT); //declara o pino 11, variável "led" como uma saída 
    }
    void loop() {
      estado = digitalRead(tilt); //lê e atribui à variável estado o estado de acionamento do botão
      if (estado == HIGH) { //verifica se o estado do sensor é acionado digitalWrite(led,HIGH); //se acionado, atribui à variável "led" um valor HIGH, de acionado
      } else { //se não, 
        digitalWrite(led, LOW); //atribui à variável "led" um valor LOW, de não acionado 
      }
    }
    ```

## Arquivos para Download

[![ino][../arq/ino.png]][proj4ino]          [![fzz][../arq/fzz.png]][proj4fzz]





[proj4png]: ../arq/proj4.png
[proj4ino]: ../arq/proj4.ino
[proj4fzz]: ../arq/proj4.fzz