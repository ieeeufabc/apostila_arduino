int led[] = {11, 10, 9}; //declara a variável "led" como um vetor, contendo o número das portas onde o led está conectado
const int pot = A0; //declara a variável "pot" como tipo int, ligada na porta analógica A0 do arduino

int quantidade = 3;  //declara a variável "quantidade" como int 3, o número de leds conectados no sistema, declatados no vetor "leds"
int valor;  //declara a variável "valor" como int;variável que armazena o valor da leitura do potenciômetro 

void setup() {
  for (int pino = 0; pino < quantidade; pino++) { //declara pino por pino como saída, desde 0 até o número total de pinos
    pinMode(led[pino], OUTPUT); //declara o pino de acordo com a posição do vetor como uma saída
  }
}

void loop() {
valor =  analogRead(pot);//lê e atribui à variável "valor" o valor do potenciômetro
valor = map(valor,0,1023,0,2); //utiliza-se a função map() para mapear uma escala de 0-1023 em uma escala 0 a 255 de forma proporcional, como uma regra de três 



digitalWrite(led[valor], HIGH ); //determina o acionamento da variável "led" no pino equivalente ao valor do potenciômetro
digitalWrite(led[valor+1], LOW );//determina o desacionamento da variável "led" no próximo pino equivalente ao valor do potenciômetro

delay(500);

}
