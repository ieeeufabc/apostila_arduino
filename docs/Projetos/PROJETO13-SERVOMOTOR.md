Chegou a hora de utilizar um servo motor manualmente!!

## Lista de materiais

 - 1 Servo motor
 - 1 Potenciômetro

## Modelo esquemático em Protoboard

![Modelo esquemático][proj13png]
	
??? note "Código"
    ```c
	#include < Servo.h > 
	  Servo servo;
	const int SERVO = 6;
	const int pot = A0; 
	int valor; 
	void setup() {
	  servo.attach(SERVO);
	}
	void loop() {
	  valor = analogRead(pot); 
	  valor = map(valor, 0, 1023, 0, 180);
	  servo.write(valor); 
	}
    ```


??? note "Código Comentado"
    ```c
	#include < Servo.h > //inclui a biblioteca do servo motor 
	  Servo servo; //define o Servo Motor como a variável "servo" 
	const int SERVO = 6; //declara a variável "SERVO" como tipo int, ligada na porta digital 6 do arduino 
	const int pot = A0; //declara a variável "pot" como tipo int, ligada na porta analógica A0 do arduino 
	int valor; //declara a variável "valor" como int;variável que armazena o valor da leitura do potenciômetro 
	void setup() {
	  servo.attach(SERVO); //inicia o servo motor 
	}
	void loop() {
	  valor = analogRead(pot); //lê e atribui à variável "valor" o valor do potenciômetro 
	  valor = map(valor, 0, 1023, 0, 180); //utiliza-se a função map() para mapear uma escala de 0 a 1023 em uma escala de 0 a 255 de forma proporcional, como uma regra de três 
	  servo.write(valor); //atribui o valor da variável "valor" ao servo motor 
	}
    ```

## Arquivos para Download

[![ino][../arq/ino.png]][proj13ino]          [![fzz][../arq/fzz.png]][proj13fzz]




[proj13png]: ../arq/proj13.png
[proj13ino]: ../arq/proj13.ino
[proj13fzz]: ../arq/proj13.fzz