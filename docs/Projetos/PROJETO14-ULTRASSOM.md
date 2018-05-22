Utilizando o sensor ultrassônico será determinada a distância entre objetos!

## Lista de materiais

 - Sensor ultrassónico

## Modelo esquemático em Protoboard

TODO: FIGURA

??? note "Código"
    ```c
    #include < Ultrasonic.h > 
      const int trigger = 5; 
    const int echo = 4; 
    Ultrasonic ultrasonic(trigger, echo); 
    void setup() {
      Serial.begin(9600); 
    }
    void loop() {
      float cm; 
      long microsec = ultrasonic.timing(); 
      cm = ultrasonic.convert(microsec, Ultrasonic::CM); 
      Serial.print("Distancia em cm: "); 
      Serial.println(cm); 
      delay(250); 
    }
    ```
    
??? note "Código Comentado"
    ```c
    #include < Ultrasonic.h > //inclui a bibllioteca Ultrasonic.h 
      const int trigger = 5; //declara a variável "trigger" como tipo int, ligada na porta digital 5 do arduino; variável de envio de onda sonora 
    const int echo = 4; //declara a variável "echo" como tipo int, ligada na porta digital 4 do arduino; variável de recebimento de onda sonora 
    Ultrasonic ultrasonic(trigger, echo); //declaração do sensor de ultrassom com as respectivas variáveis e pinos de envio e recebimento de onda sonora 
    void setup() {
      Serial.begin(9600); //Inicia a serial com Baud Rate de 9600 
    }
    void loop() {
      float cm; //declara variável "cm" como tipo float, onde será armazenado o valor da distância 
      long microsec = ultrasonic.timing(); //declara a variável 
      cm = ultrasonic.convert(microsec, Ultrasonic::CM); //atribui à variável "cm" o valor convertido de microsegundos para centímetros 
      Serial.print("Distancia em cm: "); //Imprime no Monitor Serial "Distancia em cm: " 
      Serial.println(cm); //Imprime no Monitor Serial o valor da variável "cm", variável de valor da distância detectada 
      delay(250); //pausa o programa por 250 milisegundos, para facilitar a leitura dos valores no Monitor Serial 
    }
    ```