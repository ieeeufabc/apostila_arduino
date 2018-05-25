Hora de fazer barulho! Neste projeto faremos uma campainha!

## Lista de materiais

 - 1 Buzzer

## Modelo esquemático em Protoboard

![Modelo esquemático][proj5png]

??? note "Código"
    ```c
    const int buzzer = 4;
    void setup() {
        pinMode(buzzer, OUTPUT);
        void loop() {
          tone(buzzer, 1000);
          delay(1000);
          noTone(buzzer);
          delay(1000);
        }
    ```

??? note "Código Comentado"
    ```c
    const int buzzer = 4; //declara a variável "led" como tipo int, ligada na porta digital 4 do arduino 
    void setup() {
        pinMode(buzzer, OUTPUT); //declara o pino 4, variável "buzzer" como uma saída } 
        void loop() {
          tone(buzzer, 1000); //ativa a frequência de 1000Hz,1KHz na variável "buzzer", pino 4 
          delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo, tocando o tone 
          noTone(buzzer); //desativa frequências emitidas pelo pino 4, variável "buzzer" 
          delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
        }
    ```

## Arquivos para Download

[![ino][../arq/ino.png]][proj5ino]          [![fzz][../arq/fzz.png]][proj5fzz]





[proj5png]: ../arq/proj5.png
[proj5ino]: ../arq/proj5.ino
[proj5fzz]: ../arq/proj5.fzz