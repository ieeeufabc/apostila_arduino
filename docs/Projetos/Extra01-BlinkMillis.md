Este é um projeto extra! Tente refazer o [Projeto 1 - Blink](Projetos/PROJETO01-BLINK.md) utilizando a função `millis()`.

## Lista de materiais

 - 1 LED Azul
 - 1 LED Infravermelho
 - 1 Resistor 5kΩ
 - 1 Resistor 220Ω



??? note "Código" 
    ```c
    int led = 12;
    bool estado = LOW;
    unsigned long anteriorMillis = 0;
    long intervalo = 1000; 
    void setup() {
      pinMode(led, OUTPUT); 
    }
    void loop() {
      unsigned long atualMillis = millis(); 
      if (atualMillis - anteriorMillis >= intervalo) { 
        anteriorMillis = atualMillis; 
        if (estado == LOW) {
          estado = HIGH;
        } else { 
          estado = LOW; 
        }
        digitalWrite(led, estado); 
      }
    }
    ```

    
??? note "Código Comentado"
    ```c
    int led = 12; //declara a variável "led" como tipo int, conectada na porta 12 do arduino 
    bool estado = LOW; //declara a variável "estado" como tipo bool, LOW, baixo, desligada; variável de mudança de estado do led 
    unsigned long anteriorMillis = 0; //declara a variável "anteriorMillis" como unsigned long como zero; variável de tempo 
    long intervalo = 1000; //declara a variável "intervalo" como tipo long 1000; variável de intervalo de tempo, piscadas 
    void setup() {
      pinMode(led, OUTPUT); //determina o desacionamento do pino 12, variável "led" como LOW, baixo, desligado 
    }
    void loop() {
      unsigned long atualMillis = millis(); //declara a variável "atualMillis" como unsigned long como millis, tempo contado desde o início do programa 
      if (atualMillis - anteriorMillis >= intervalo) { //compara o tempo atual com o passado, conferindo se o intervalo de tempo foi atingido 
        anteriorMillis = atualMillis; // quando o intervalo de tempo for atingido, os parâmetros de comapração de tempo se igualam, dando início a um novo intervalo 
        if (estado == LOW) { // se o led estiver desligado 
          estado = HIGH; //liga 
        } else { // senão, significa que está aceso 
          estado = LOW; // então desliga 
        }
        digitalWrite(led, estado); //determina o estado do pino 12, variável "led" de acordo com o resultado da variável "estado" 
      }
    }
    ```

## Arquivos para Download

    [![Arquivo ino](../arq/ino.png](../arq/proj16.ino)              [![Arquivo fzz](../arq/fzz.png](../arq/proj16.fzz)
