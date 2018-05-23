int sensor = A0; //declara a variável "sensor" como tipo int, ligada na porta analógica A0 do arduino

int valor; //declara a variável "valor" como tipo int; variável de armazenamento de valor lido pelo sensor
 
void setup(){
    Serial.begin(9600);//inicia o Monitor Serial com Baud Rate 9600 
}
 
void loop(){
    valor = analogRead(sensor);//lê e atribui à variavel "valor" o valor analógico da variável "sensor"
    Serial.println(valor);//Imprime no Monitor Serial o valor da variável "valor", variável de valor do sensor
    delay(500);//pausa o programa por 500 milisegundos, para facilitar a leitura dos valores no Monitor Serial

}
