Vamos ler e exibir valores no monitor serial!

## Lista de materiais

 - 1 potenciômetro

## Modelo esquemático em Protoboard

![Modelo esquemático][proj8png]


??? note "Código"
    ```c
    const int pot = A0; 
    int valor; 
    void setup() {
      Serial.begin(9600); 
    }
    void loop() {
      valor = analogRead(pot); 
      Serial.print("Valor do Potenciometro = "); 
      Serial.println(valor); 
      delay(250); 
    }
    ```

??? note "Código Comentado"
    ```c
    const int pot = A0; //declara a variável "pot" como tipo int, ligada na porta analógica A0 do arduino 
    int valor; //declara a variável "valor" como int;variável que armazena o valor da leitura do potenciômetro 
    void setup() {
      Serial.begin(9600); //Inicia a serial com Baud Rate de 9600 
    }
    void loop() {
      valor = analogRead(pot); //lê e atribui à variável "valor" valor de estado do potênciometro da porta analógica A0 
      Serial.print("Valor do Potenciometro = "); //Imprime no Monitor Serial "Valor do Potenciometro = " 
      Serial.println(valor); //Imprime no Monitor Serial o valor da variável "valor", variável de valor do potênciômetro 
      delay(250); //pausa o programa por 250 milisegundos, para facilitar a leitura dos valores no Monitor Serial 
    }
    ```

## Arquivos para Download

[![ino][../arq/ino.png]][proj8ino]          [![fzz][../arq/fzz.png]][proj8fzz]




[proj8png]: ../arq/proj8.png
[proj8ino]: ../arq/proj8.ino
[proj8fzz]: ../arq/proj8.fzz