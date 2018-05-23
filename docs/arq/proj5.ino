const int buzzer = 4; //declara a variável "led" como tipo int, ligada na porta digital 4 do arduino


void setup(){
 
  pinMode(buzzer, OUTPUT); //declara o pino 4, variável "buzzer" como uma saída

}

void loop(){
 
  tone(buzzer, 1000); //ativa a frequência de 1000Hz,1KHz na variável "buzzer", pino 4
  delay(1000);        //pausa o programa por 1000 milisegundos, 1 segundo, tocando o tone
  noTone(buzzer);     //desativa frequências emitidas pelo pino 4, variável "buzzer"
  delay(1000);        //pausa o programa por 1000 milisegundos, 1 segundo
  
}
