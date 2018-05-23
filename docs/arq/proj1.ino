int led = 12; //declara a variável "led" como tipo int, ligada na porta 12 do arduino

void setup() {
pinMode(led,OUTPUT); //declara o pino 12, variável "liga" como uma saída
}

void loop() {
  digitalWrite(led, HIGH); //determina o acionamento do pino 12, variável "led" como HIGH, alto, ligado
  delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo
  digitalWrite(led, LOW); //determina o desacionamento do pino 12, variável "led" como LOW, baixo, desligado
  delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo
}
