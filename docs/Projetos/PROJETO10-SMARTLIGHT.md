Cansou de ajustar manualmente a luz de casa? Neste projeto será desenvolvido um sistema automático de controle de intensidade luminosa utilizando LDR.

## Lista de materiais

 - 1 LED Vermelho
 - 1 Resistor 10kΩ
 - 1 Resistor 220Ω
 - 1 LDR

## Modelo esquemático em Protoboard

![Modelo esquemático][../arq/proj10.png]


??? note "Código"
    ```c
    const int ldr = A0;
    int led = 11;
    int valor; 
    void setup() {
      pinMode(led, OUTPUT); 
    }
    void loop() {
      valor = analogRead(ldr);
      ldr valor = map(valor, 0, 1023, 0, 255);
      analogWrite(led, valor);
    }
    ```
    
??? note "Código Comentado"
    ```c
    const int ldr = A0; //declara a variável "ldr" como tipo int, ligada na porta analógica A0 do arduino const 
    int led = 11; //declara a variável "led" como tipo int, ligada na porta digital 11 do arduino 
    int valor; //declara a variável "valor" como int;variável que armazena o valor da leitura do ldr 
    void setup() {
      pinMode(led, OUTPUT); //declara o pino 11, variável "led" como uma saída 
    }
    void loop() {
      valor = analogRead(ldr); //lê e atribui à variável "valor" o valor do 
      ldr valor = map(valor, 0, 1023, 0, 255); //utiliza-se a função map() para mapear uma escala de 0-1023 em uma escala de 0 a 255 de forma proporcional, como uma regra de três 
      analogWrite(led, valor); //determina o acionamento do pino 11, variável "led" de acordo com os valores da variável "valor" de valor do ldr 
    }

    ```
    
## Arquivos para Download


[![Arquivo ino](../arq/ino.png)](../arq/proj10.ino)          [![Arquivo fzz](../arq/fzz.png)](../arq/proj10.fzz)

