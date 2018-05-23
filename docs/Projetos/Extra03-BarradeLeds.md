Este é um projeto extra! Tente refazer o[Projeto 2 - Farol](Projetos/PROJETO02-FAROL.md) utilizando os conceitos de vetor.

## Lista de materiais

 - 3 LED vermelho
 - 1 Potenciômetro
 - 3 Resistor 220Ω

## Modelo esquemático em Protoboard

![Modelo esquemático][proj18png]

??? note "Código"
    ```c
    int led[] = {11, 10, 9}; 
    const int pot = A0; 
    int quantidade = 3; 
    int valor; 
    void setup() {
    for (int pino = 0; pino < quantidade; pino++) { 
    pinMode(led[pino], OUTPUT); 
    }
    }
    void loop() {
    valor = analogRead(pot); 
    valor = map(valor,0,1023,-1,2);
    for(int i = 0; i <= valor; i++) {
    digitalWrite(led[valor], HIGH); 
    }
    for(int i = 2; i > valor; i--) {
    digitalWrite(led[valor], LOW);
    }
    }
    ```

??? note "Código Comentado"
    ```c
    int led[] = {11, 10, 9}; //declara a variável "led" como um vetor, contendo o número das portas onde o led está conectado
    const int pot = A0; //declara a variável "pot" como tipo int, ligada na porta analógica A0 do arduino
    int quantidade = 3; //declara a variável "quantidade" como int 3, o número de leds conectados no sistema, declatados no vetor "leds"
    int valor; //declara a variável "valor" como int;variável que armazena o  valor da leitura do potenciômetro
    void setup() {
    for (int pino = 0; pino < quantidade; pino++) { //declara pino por pino como saída, desde 0 até o número total de pinos
    pinMode(led[pino], OUTPUT); //declara o pino de acordo com a posição dovetor como uma saída
    }
    }
    void loop() {
    valor = analogRead(pot); //lê e atribui à variável "valor" o valor do potenciômetro
    valor = map(valor,0,1023,-1,2); //utiliza-se a função map() para mapear uma escala de 0 a 1023 em uma escala de -1 a 2 de forma proporcional, como uma regra de três
    for(int i = 0; i <= valor; i++) {
    digitalWrite(led[valor], HIGH); //determina o acionamento da variável "led" no pino equivalente ao valor do potenciômetro
    }
    for(int i = 2; i > valor; i--) {
    digitalWrite(led[valor], LOW); //determina o desacionamento da variável "led" no pino equivalente ao valor do potenciômetro
    }
    }
    ```

## Arquivos para consulta

[Arquivo ino][proj18ino]

[Arquivo fzz][proj18fzz]



[proj18png]: ../img/proj/proj18.png
[proj18ino]: ../arq/proj18.ino
[proj18fzz]: ../arq/proj18.fzz