Olá Mundo!! Chegou a hora de exibir mensagens!

### RESULTADO

![Modelo esquemático][proj7png]

??? note "Código Comentado"
    ```c
    void setup() {
      Serial.begin(9600);
    }
    void loop() {
      Serial.println("Olá Mundo");
    }
    ```

??? note "Código Comentado"
    ```c
    void setup() {
      Serial.begin(9600); //Inicia a serial com Baud Rate de 9600 
    }
    void loop() {
      Serial.println("Olá Mundo"); //Imprime na tela, pulando linha, a mensagem "Olá Mundo" 
    }
    ```

## Arquivos para consulta

[Arquivo ino][proj7ino]




[proj7png]: ../img/proj/proj7.png
[proj7ino]: ../arq/proj7.ino
