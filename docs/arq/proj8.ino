const int pot = A0; //declara a variável "pot" como tipo int, ligada na porta analógica A0 do arduino

int valor; //declara a variável "valor" como int;variável que armazena o valor da leitura do potenciômetro 

void setup() 
{     

Serial.begin(9600); //inicia o Monitor Serial com Baud Rate 9600 
} 

void loop() 
{      

valor = analogRead(pot); //lê e atribui à variável "valor" valor de estado do potênciometro da porta analógica A0
Serial.print("Valor do Potenciometro = "); //Imprime no Monitor Serial "Valor do Potenciometro = "   
Serial.println(valor); //Imprime no Monitor Serial o valor da variável "valor", variável de valor do potênciômetro   
delay(250);//pausa o programa por 250 milisegundos, para facilitar a leitura dos valores no Monitor Serial

}
