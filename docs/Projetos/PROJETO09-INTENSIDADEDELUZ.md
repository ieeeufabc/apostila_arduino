Simularemos agora um sistema de iluminação, onde a intensidade luminosa é regulada pelo potenciômetro e conversão com a função `map()`.

## Lista de materiais

 - 1 LED Vermelho
 - 1 Resistor 220Ω
 - 1 potenciômetro

## Modelo esquemático em Protoboard

![Modelo esquemático][proj9png]

??? note "Código"
    ```c
    const int pot = A0; 
    const int led = 11; 
    int valor; 
    void setup() {
      pinMode(led, OUTPUT);
    }
    void loop() {
      valor = analogRead(pot); 
      valor = map(valor, 0, 1023, 0, 255);
      analogWrite(led, valor); 
    }

    ```
    
??? note "Código Comentado"
    ```c
    const int pot = A0; //declara a variável "pot" como tipo int, ligada na porta analógica A0 do arduino
    const int led = 11; //declara a variável "led" como tipo int, ligada na porta digital 11 do arduino 
    int valor; //declara a variável "valor" como int;variável que armazena o valor da leitura do potenciômetro 
    void setup() {
      pinMode(led, OUTPUT); //declara o pino 11, variável "led" como uma saída 
    }
    void loop() {
      valor = analogRead(pot); //lê e atribui à variável "valor" o valor do potenciômetro 
      valor = map(valor, 0, 1023, 0, 255); //utiliza-se a função map() para mapear uma escala de 0-1023 em uma escala de 0 a 255 de forma proporcional, como uma regra de três 
      analogWrite(led, valor); //determina o acionamento do pino 11, variável "led" de acordo com os valores da variável "valor" de valor do potenciômetro 
    }

    ```

## Arquivos para consulta

[Arquivo ino][proj9ino]
[Arquivo fzz][proj9fzz]





[proj9png]: ../img/proj/proj9.png
[proj9ino]: ../arq/proj9.ino
[proj9fzz]: ../arq/proj9.fzz