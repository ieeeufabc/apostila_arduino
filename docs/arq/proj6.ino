int vermelho=6;//declara a variável "vermelho" como tipo int, ligada na porta 6 do arduino
int verde=5;//declara a variável "verde" como tipo int, ligada na porta 5 do arduino    
int azul=3;//declara a variável "azul" como tipo int, ligada na porta 3 do arduino


void setup()
{
}

void loop()
{
  analogWrite(vermelho,255);//determina o acionamento do pino 6, variável "vermelho" como 255
  delay(1000);//pausa o programa por 1000 milisegundos, 1 segundo
  analogWrite(vermelho,0);//determina o desacionamento do pino 6, variável "vermelho" como 0
  analogWrite(verde,255);//determina o acionamento do pino 5, variável "verde" como 255
  delay(1000);//pausa o programa por 1000 milisegundos, 1 segundo
  analogWrite(verde,0);//determina o desacionamento do pino 5, variável "verde" como 0
  analogWrite(azul,255);//determina o acionamento do pino 3, variável "azul" como 255
  delay(1000);//pausa o programa por 1000 milisegundos, 1 segundo
  analogWrite(azul,0); //determina o desacionamento do pino 3, variável "azul" como 0
  delay(1000);//pausa o programa por 1000 milisegundos, 1 segundo
}
