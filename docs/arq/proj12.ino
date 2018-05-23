#include <Servo.h> //inclui a biblioteca do servo motor

const int SERVO = 6; //declara a variável "SERVO" como tipo int, ligada na porta digital 6 do arduino

 
Servo servo; //define o Servo Motor como a variável "servo"
int posicao; //declara a variável "posicao" como tipo int; variável de poosição do servo motor

 
void setup ()
{
  servo.attach(SERVO); //inicia o servo motor 
}
 
void loop()
{
  for(posicao = 0; posicao < 180; posicao++) //acresce o valor da variável "posição" de 0 a 180, de 1 em 1
  {
    servo.write(posicao); //atribui o valor da variável "posicao" ao servo motor
  }
  for(posicao = 180; posicao >= 0; posicao--)  //decresce o valor da variável "posição" de 180 a 0, de 1 em 1
  {
    servo.write(posicao); //atribui o valor da variável "posicao" ao servo motor
  }
}
