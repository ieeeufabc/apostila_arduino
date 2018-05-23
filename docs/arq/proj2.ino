int vermelho = 11; //declara a variável "vermelho" como tipo int, ligada na porta 11 do arduino
int amarelo = 10; //declara a variável "amarelo" como tipo int, ligada na porta 10 do arduino
int verde = 9; //declara a variável "verde" como tipo int, ligada na porta 9 do arduino

void setup() {
pinMode(vermelho,OUTPUT); //declara o pino 11, variável "vermelho" como uma saída
pinMode(amarelo,OUTPUT); //declara o pino 10, variável "amarelo" como uma saída
pinMode(verde,OUTPUT); //declara o pino 9, variável "verde" como uma saída
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
