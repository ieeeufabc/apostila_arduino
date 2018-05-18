# PROJETOS

## PROJETO 1 - BLINK
Este projeto tem como objetivo demonstrar como realizar o acionamento e desacionamento de um LED.

### LISTA DE MATERIAIS:
 - 1 LED azul;
 - 1 Resistor 220Ω.

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
```c
int led = 12; //declara a variável "led" como tipo int, ligada na porta 12 do arduino 
void setup() {
  pinMode(led, OUTPUT); //declara o pino 12, variável "led", como uma saída 
}
void loop() {
  digitalWrite(led, HIGH); //determina o acionamento do pino 12, variável "led", como HIGH, alto, ligado 
  delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
  digitalWrite(led, LOW); //determina o desacionamento do pino 12, variável "led", como LOW, baixo, desligado 
  delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
}
```

## PROJETO 2 - FAROL
Este projeto tem como objetivo construir um sistema simulado de um farol de transito. Para isso os conceitos aprendidos no Projeto 1 - Blink serão utilizados.
### LISTA DE MATERIAIS
 - 1 LED vermelho
 - 1 LED amarelo
 - 1 LED verde
 - 3 Resistor 220Ω

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
```c
int vermelho = 11; //declara a variável "vermelho" como tipo int, ligada na porta 11 do arduino 
int amarelo = 10; //declara a variável "amarelo" como tipo int, ligada na porta 10 do arduino 
int verde = 9; //declara a variável "verde" como tipo int, ligada na porta 9 do arduino 
void setup() {
  pinMode(vermelho, OUTPUT); //declara o pino 11, variável "vermelho" como uma saída 
  pinMode(amarelo, OUTPUT); //declara o pino 10, variável "amarelo" como uma saída 
  pinMode(verde, OUTPUT); //declara o pino 9, variável "verde" como uma saída 
}
void loop() {
  digitalWrite(vermelho, HIGH); //determina o acionamento do pino 11, variável "vermelho" como HIGH, alto, ligado 
  delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
  digitalWrite(vermelho, LOW); //determina o desacionamento do pino 11, variável "vermelho" como LOW, baixo, desligado 
  digitalWrite(amarelo, HIGH); //determina o acionamento do pino 10, variável "amarelo" como HIGH, alto, ligado 
  delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
  digitalWrite(amarelo, LOW); //determina o desacionamento do pino 10, variável "amarelo" como LOW, baixo, desligado 
  digitalWrite(verde, HIGH); //determina o acionamento do pino 9, variável "verde" como HIGH, alto, ligado 
  delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
  digitalWrite(verde, LOW); //determina o desacionamento do pino 9, variável "verde" como LOW, baixo, desligado 
  delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
}
```

## PROJETO 3 - BOTÃO
Neste projeto será trabalhado a lógica de botões “press” e “switch”, primeiro acionando um LED enquanto o botão é pressionado e posteriormente armazenando os dados em variáveis para manter o LED aceso ou apagado.

### LISTA DE MATERIAIS
 - 1 LED vermelho
 - 1 Botão
 - 1 Resistor 10kΩ
 - 1 Resistor 220Ω

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO - CASO - 1 

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

### CÓDIGO COMENTADO - CASO - 2

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

## PROJETO 4 - ALARME TILT

Nesse projeto utilizaremos um sensor de inclinação para acionar um alarme!

### LISTA DE MATERIAIS
 - 1 LED Vermelho
 - 1 Resistor 220Ω
 - 1 Sensor de inclinação

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
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
## PROJETO 5 - BUZZER
Hora de fazer barulho! Neste projeto faremos uma campainha!

### LISTA DE MATERIAIS
 - 1 Buzzer

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
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
## PROJETO 6 - LED RGB
Neste projeto será iremos controlar as cores de um LED RGB.

### LISTA DE MATERIAIS
 -  1 RGB LED
 -  3 Resistor 220Ω

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
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

## PROJETO 7 - HELLO WORD
Olá Mundo!! Chegou a hora de exibir mensagens!

### CÓDIGO COMENTADO
```c
void setup() {
  Serial.begin(9600); //Inicia a serial com Baud Rate de 9600 
}
void loop() {
  Serial.println("Olá Mundo"); //Imprime na tela, pulando linha, a mensagem "Olá Mundo" 
}
```
### RESULTADO
TODO: FIGURA

## PROJETO 8 - POTENCIÔMETRO
Vamos ler e exibir valores no monitor serial!
### LISTA DE MATERIAIS
 - 1 potenciômetro

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
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
## PROJETO 9 - INTENSIDADE DE LUZ
Simularemos agora um sistema de iluminação, onde a intensidade luminosa é regulada pelo potenciômetro e conversão com a função `map()`.
### LISTA DE MATERIAIS

 - 1 LED Vermelho
 - 1 Resistor 220Ω
 - 1 potenciômetro

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA
### CÓDIGO COMENTADO
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
## PROJETO 10 - SMART LIGHT
Cansou de ajustar manualmente a luz de casa? Neste projeto será desenvolvido um sistema automático de controle de intensidade luminosa utilizando LDR.
### LISTA DE MATERIAIS
 - 1 LED Vermelho
 - 1 Resistor 10kΩ
 - 1 Resistor 220Ω
 - 1 LDR

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
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

## PROJETO 11 - TEMPERATURA
Quente ou frio? Nesse projeto faremos a conversão e leitura de sinais analógicos para detecção de temperatura.
### LISTA DE MATERIAIS
 - 1 LM35 Sensor de Temperatura

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
```c
const int lm35 = A0; //declara a variável "lm35" como tipo int, ligada na porta analógica A0 do arduino 
float temperatura; //declara a variável "temperatura" como tipo float; variável de armazenamento de valor de temperatura 
void setup() {
  Serial.begin(9600); //inicia o Monitor Serial com Baud Rate 9600 
}
void loop() {
  temperatura = (float(analogRead(lm35)) * 5 / (1023)) / 0.01; //lê e atribui à variavel float "temperatura" o valor analógico da variável "lm35" convertido pela fórmula em valor de graus Celsius 
  Serial.print("Temperatura: "); //Imprime no Monitor Serial "Temperatura: " 
  Serial.println(temperatura); //Imprime no Monitor Serial o valor da variável "temperatura", variável de valor de temperatura 
  delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo para facilitar a leitura dos valores no Monitor Serial
}
```

## PROJETO 12 - INTENSIDADE DE LUZ
Ansioso para automatizar seus projetos? Nesse projeto iremos utilizar um servo motor de forma autônoma!
### LISTA DE MATERIAIS
 - 1 Servo Motor

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA
### CÓDIGO COMENTADO
```c
#include < Servo.h > //inclui a biblioteca do servo motor 
  const int SERVO = 6; //declara a variável "SERVO" como tipo int, ligada na porta digital 6 do arduino 
Servo servo; //define o Servo Motor como a variável "servo" 
int posicao; //declara a variável "posicao" como tipo int; variável de poosição do servo motor 
void setup() {
  servo.attach(SERVO); //inicia o servo motor 
}
void loop() {
  for (posicao = 0; posicao < 180; posicao++) { //acresce o valor da variável "posição" de 0 a 180, de 1 em 1 
    servo.write(posicao); //atribui o valor da variável "posicao" ao servo motor 
  }
  for (posicao = 180; posicao >= 0; posicao--) { //decresce o valor da variável "posição" de 180 a 0, de 1 em 1 
    servo.write(posicao); //atribui o valor da variável "posicao" ao servo motor 
  }
}
```

## PROJETO 13 - SERVO MOTOR
Chegou a hora de utilizar um servo motor manualmente!!

### LISTA DE MATERIAIS
 - 1 Servo motor
 - 1 Potenciômetro

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA
### CÓDIGO COMENTADO
```c
#include < Servo.h > //inclui a biblioteca do servo motor 
  Servo servo; //define o Servo Motor como a variável "servo" 
const int SERVO = 6; //declara a variável "SERVO" como tipo int, ligada na porta digital 6 do arduino 
const int pot = A0; //declara a variável "pot" como tipo int, ligada na porta analógica A0 do arduino 
int valor; //declara a variável "valor" como int;variável que armazena o valor da leitura do potenciômetro 
void setup() {
  servo.attach(SERVO); //inicia o servo motor 
}
void loop() {
  valor = analogRead(pot); //lê e atribui à variável "valor" o valor do potenciômetro 
  valor = map(valor, 0, 1023, 0, 180); //utiliza-se a função map() para mapear uma escala de 0 a 1023 em uma escala de 0 a 255 de forma proporcional, como uma regra de três 
  servo.write(valor); //atribui o valor da variável "valor" ao servo motor 
}
```

## PROJETO 14 - ULTRASSOM
Utilizando o sensor ultrassônico será determinada a distância entre objetos!

### LISTA DE MATERIAIS
 - Sensor ultrassónico

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
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

## PROJETO 15 - SCANNER
Neste projeto identificaremos cores por ondas de infravermelho.
### LISTA DE MATERIAIS
 - 1 LED Azul
 - 1 LED Infravermelho
 - 1 Resistor 5kΩ
 - 1 Resistor 220Ω

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
```c
int sensor = A0; //declara a variável "sensor" como tipo int, ligada na porta analógica A0 do arduino 
int valor; //declara a variável "valor" como tipo int; variável de armazenamento de valor lido pelo sensor 
void setup() {
  Serial.begin(9600); //inicia o Monitor Serial com Baud Rate 9600 
}
void loop() {
  valor = analogRead(sensor); //lê e atribui à variavel "valor" o valor analógico da variável "sensor" 
  Serial.println(valor); //Imprime no Monitor Serial o valor da variável "valor", variável de valor do sensor 
  delay(500); //pausa o programa por 500 milisegundos, para facilitar a leitura dos valores no Monitor Serial 
}
```

## PROJETO EXTRA 1 - BLINK “MILLIS”
Este é um projeto extra! Tente refazer o Projeto 1 – Blink utilizando a função `millis()`.

### LISTA DE MATERIAIS
 - 1 LED Azul
 - 1 LED Infravermelho
 - 1 Resistor 5kΩ
 - 1 Resistor 220Ω

### MODELO ESQUEMÁTICO EM PROTOBOARD
TODO: FIGURA

### CÓDIGO COMENTADO
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

## PROJETO EXTRA 2 - FAROL VETOR

Este é um projeto extra! Tente refazer o Projeto 2 - Farol utilizando os conceitos de vetor.

### CÓDIGO COMENTADO
```c
int led[] = {11,10,9}; //declara a variável "led" como um vetor, contendo o número das portas onde o led está conectado 
int quantidade = 3; //declara a variável "quantidade" como int 3, o número de leds conectados no sistema, declatados no vetor "leds" 
void setup() {
  for (int pino = 0; pino < quantidade; pino++) { //declara pino por pino como saída, desde 0 até o número total de pinos 
    pinMode(led[pino], OUTPUT); //declara o pino de acordo com a posição do vetor como uma saída 
  }
}
void loop() {
  for (int pino = 0; pino < quantidade; pino++) { //percorre o vetor, de posição em posição, do 0 à quantidade total de pinos 
    digitalWrite(led[pino], HIGH); //determina o acionamento do pino, variável "led" como HIGH, alto, ligado 
    delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo 
    digitalWrite(led[pino], LOW); //determina o desacionamento do pino, variável "led" como LOW, baixo, desligado 
  }
}
```