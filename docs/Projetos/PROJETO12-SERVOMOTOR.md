Ansioso para automatizar seus projetos? Nesse projeto iremos utilizar um servo motor de forma autônoma!

## Lista de materiais

 - 1 Servo Motor

## Modelo esquemático em Protoboard

![Modelo esquemático][../arq/proj12.png]


??? note "Código"  
    ```c
	#include < Servo.h >
	  const int SERVO = 6;
	Servo servo; 
	int posicao; 
	void setup() {
	  servo.attach(SERVO); 
	}
	void loop() {
	  for (posicao = 0; posicao < 180; posicao++) { 
	    servo.write(posicao); 
	  }
	  for (posicao = 180; posicao >= 0; posicao--) { 
	    servo.write(posicao);
	  }
    }
    ```

??? note "Código Comentado"
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


## Arquivos para Download

[![Arquivo ino](../arq/ino.png)](../arq/proj12.ino)          [![Arquivo fzz](../arq/fzz.png)](../arq/proj12.fzz)

