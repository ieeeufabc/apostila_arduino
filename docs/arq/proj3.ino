const int botao = 8; //declara a variável "botao" como tipo int, ligada na porta 8 do arduino
const int led = 7; //declara a variável "led" como tipo int, ligada na porta 7 do arduino

int var=0;       // declara a variável "var" como tipo int 0; variável de valor instantâneo de acionamento do botão
int var2=0;     // declara a variável "var2" como tipo int 0; variável de valor armazenado de acionamento do botão
int estado=0;  //declara a variável "estado" como tipo int 0

void setup()
{
  pinMode(botao,INPUT); //declara o pino 8, variável "botao" como uma entrada
  pinMode(led,OUTPUT);  //declara o pino 7, variável "led" como uma saída
}

void loop()
{
  var=digitalRead(botao); //lê e atribui à variável "var" o estado de acionamento do botão
  if ((var == HIGH) && (var2 == LOW)) { //se a variável "var" estiver em estado de acionamento de botão, e a variável "var2" não estiver
    estado = 1 - estado; //decrementa a variável "estado"
  }

  var2=var; //iguala os valores das variáveis de leitura instantânea e de armazenamento de valores de acionamento do botão
  
  if (estado == 1) { //verifica o valor da variável estado
    digitalWrite(led, HIGH); //atribui à variável "led" um valor HIGH, de acionado
  } else {                   //se não,
    digitalWrite(led, LOW);  //atribui à variável "led" um valor LOW, de não acionado
  }
}
