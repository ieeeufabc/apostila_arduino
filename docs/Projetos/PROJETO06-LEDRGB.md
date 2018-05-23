Neste projeto será iremos controlar as cores de um LED RGB.

## Lista de materiais

 -  1 RGB LED
 -  3 Resistor 220Ω

## Modelo esquemático em Protoboard

![Modelo esquemático][proj6png]

??? note "Código"
    ```c
    int vermelho = 6; 
    int verde = 5; 
    int azul = 3; 
    void setup() {
      pinMode(vemelho, OUTPUT); 
      pinMode(verde, OUTPUT); 
      pinMode(azul, OUTPUT); 
    }
    void loop() {
      analogWrite(vermelho, 255);
      delay(1000);
      analogWrite(vermelho, 0);
      analogWrite(verde, 255);
      delay(1000);
      analogWrite(verde, 0);
      analogWrite(azul, 255);
      delay(1000);
      analogWrite(azul, 0);
      delay(1000);
    }
    ```

??? note "Código Comentado"
    ```c
    int vermelho = 6; //declara a variável "vermelho" como tipo int, ligada na porta 6 do arduino 
    int verde = 5; //declara a variável "verde" como tipo int, ligada na porta 5 do arduino 
    int azul = 3; //declara a variável "azul" como tipo int, ligada na porta 3 do arduino 
    void setup() {
      pinMode(vemelho, OUTPUT); //declara o pino 6, variável "vermelho", como uma saída 
      pinMode(verde, OUTPUT); //declara o pino 5, variável "verde", como uma saída 
      pinMode(azul, OUTPUT); //declara o pino 3, variável "azul", como uma saída 
    }
    void loop() {
      analogWrite(vermelho, 255); //determina o acionamento do pino 6, variável "vermelho" como 255 
      delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
      analogWrite(vermelho, 0); //determina o desacionamento do pino 6, variável "vermelho" como 0 
      analogWrite(verde, 255); //determina o acionamento do pino 5, variável "verde" como 255 
      delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
      analogWrite(verde, 0); //determina o desacionamento do pino 5, variável "verde" como 0 
      analogWrite(azul, 255); //determina o acionamento do pino 3, variável "azul" como 255 
      delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
      analogWrite(azul, 0); //determina o desacionamento do pino 3, variável "azul" como 0 
      delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
    }
    ```    

## Arquivos para consulta

[Arquivo ino][proj6ino]
[Arquivo fzz][proj6fzz]





[proj6png]: ../img/proj/proj6.png
[proj6ino]: ../arq/proj6.ino
[proj6fzz]: ../arq/proj6.fzz