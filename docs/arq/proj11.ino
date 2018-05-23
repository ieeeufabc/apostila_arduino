 
const int lm35 = A0;  //declara a variável "lm35" como tipo int, ligada na porta analógica A0 do arduino

float temperatura; //declara a variável "temperatura" como tipo float; variável de armazenamento de valor de temperatura
 
void setup() {
Serial.begin(9600); //inicia o Monitor Serial com Baud Rate 9600 
}

void loop() {
  
temperatura = (float(analogRead(lm35))*5/(1023))/0.01; //lê e atribui à variavel float "temperatura" o valor analógico da variável "lm35" convertido pela fórmula em valor de graus Celsius
Serial.print("Temperatura: "); //Imprime no Monitor Serial "Temperatura: "
Serial.println(temperatura); //Imprime no Monitor Serial o valor da variável "temperatura", variável de valor de temperatura
delay(1000);//pausa o programa por 1000 milisegundos, 1 segundo para facilitar a leitura dos valores no Monitor Serial

}
