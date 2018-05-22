Neste projeto será trabalhado a lógica de botões “press” e “switch”, primeiro acionando um LED enquanto o botão é pressionado e posteriormente armazenando os dados em variáveis para manter o LED aceso ou apagado.

## Lista de materiais

 - 1 LED vermelho
 - 1 Botão
 - 1 Resistor 10kΩ
 - 1 Resistor 220Ω

## Modelo esquemático em Protoboard

TODO: FIGURA

??? note "Código - Caso - 1"
    ```c
    const int botao = 8; 
    const int led = 7; 
    int estado; 
    void setup() {
      pinMode(botao, INPUT); 
      pinMode(led, OUTPUT); 
    }
    void loop() {
      estado = digitalRead(botao); 
      if (estado == HIGH) { 
        digitalWrite(led, HIGH); 
      } else { 
        digitalWrite(led, LOW); 
      }
    }
    ```


??? note "Código Comentado - Caso - 1"
    ```c
    const int botao = 8; //declara a variável "botao" como tipo int, ligada na porta 8 do arduino 
    const int led = 7; //declara a variável "led" como tipo int, ligada na porta 7 do arduino 
    int estado; //declara a variável "estado" como tipo int, variável de estado de acionamento do botão 
    void setup() {
      pinMode(botao, INPUT); //declara o pino 8, variável "botao" como uma entrada 
      pinMode(led, OUTPUT); //declara o pino 7, variável "led" como uma saída 
    }
    void loop() {
      estado = digitalRead(botao); //lê e atribui à variável estado o estado de acionamento do botão 
      if (estado == HIGH) { //verifica se o estado do botão é acionado 
        digitalWrite(led, HIGH); //se acionado, atribui à variável "led" um valor HIGH, de acionado 
      } else { //se não, 
        digitalWrite(led, LOW); //atribui à variável "led" um valor LOW, de não acionado 
      }
    }
    ```

??? note "Código - Caso - 2"
    ```c
    void loop() {
      var = digitalRead(botao); 
      if ((var == HIGH) && (var2 == LOW)) { 
        estado = 1 - estado;
      }
      var2 =
        var;
      if (estado == 1) { 
        digitalWrite(led, HIGH); 
        digitalWrite(led, LOW);
      }
    }
    ```

??? note "Código Comentado - Caso - 2"
    ```c
    void loop() {
      var = digitalRead(botao); //lê e atribui à variável "var" o estado de acionamento do botão 
      if ((var == HIGH) && (var2 == LOW)) { //se a variável "var" estiver em estado de acionamento de botão, e a variável "var2" não estiver 
        estado = 1 - estado; //decrementa a variável "estado" 
      }
      var2 =
        var; //iguala os valores das variáveis de leitura instantânea e de armazenamento de valores de acionamento do botão 
      if (estado == 1) { //verifica o valor da variável estado 
        digitalWrite(led, HIGH); //atribui à variável "led" um valor HIGH, de acionado } else { //se não, 
        digitalWrite(led, LOW); //atribui à variável "led" um valor LOW, de não acionado 
      }
    }
    ```