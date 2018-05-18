# ARDUINO UNO
Nesta apostila mostraremos como trabalhar com a placa microcontroladora da marca Arduino. Por ser um open source project (uma plataforma aberta), há disponível gratuitamente o diagrama de circuito de suas placas assim como o seu software. Dessa forma, existem diversas outras marcas de microcontroladores compatíveis com o original e até mesmo a possibilidade do usuário montar sua própria placa. Utilizaremos o modelo Arduino UNO R3, mas também podem ser usadas outras marcas como Freeduino, Seeeduino, Boarduino, Sanguino, Roboduino, etc, que são totalmente comunicáveis com o Arduino IDE, Arduino Shields e tudo mais que você pode usar com uma placa Arduino Oficial.
## O QUE EXATAMENTE É UM ARDUINO?
Segundo o site FlipFlop, Arduino é uma placa composta por um microcontrolador Atmel, circuitos de entrada/saída e que pode ser facilmente conectada à um computador e programada via IDE (Integrated Development Environment, ou Ambiente de Desenvolvimento Integrado), utilizando uma linguagem baseada em C/C++ sem a necessidade de equipamentos extras além de um cabo USB.
Em outras palavras, Arduino é um pequeno computador que você pode programar através de um computador, utilizando um software (IDE) para processar sinais de entradas e acionar saídas. O Arduino funcionará independente de um computador posteriormente.
## O que fazemos com um Arduino
As possibilidades de aplicação com Arduino são infinitas. Os programas são extremamente flexíveis, ou seja, podem ser alterados para executar as funções exatamente como desejado.
Há também uma enorme gama de sensores e atuadores, que são conectados as Entradas e Saídas do Arduino. Esses sensores e atuadores são conhecidos como módulos. Os módulos podem ser utilizados em um projeto para ler sinais específicos, como corrente, temperatura, etc. e acionar atuadores específicos, como lâmpadas, reles, etc.
A Imagem abaixo ilustra alguns dos módulos mais comuns:

TODO: FIGURA
Fonte: https://www.filipeflop.com/blog/o-que-e-arduino/

## Como funciona o Arduino

TODO: FIGURA

A placa Arduino UNO é composta por 14 entradas e saídas digitais, das quais 6 podem ser usadas como PWM, além de conter 6 entradas analógicas. As 6 entradas analógicas estão nos pinos denominados A0 até A5. Os pinos que podem ser usados como saída PWM são os 3, 5, 6, 9, 10 e 11 usando a função analogWrite. Há também os pinos TX (que transmitem) e RX (que recebe) dados via serial que podem ser enviados a módulos que convertem esse sinal em outra forma, como por exemplo um módulo Bluetooth.

TODO: FIGURA

O Arduino pode ser alimentado tanto via USB como por fonte externa (DC ou bateria). A placa trabalha com tensão entre 6V a 20V, porém usando menos que 7V, o pino de alimentação de 5V pode fornecer menos que isso e a placa ficará instável. Já uma tensão acima de 12V pode causar algum dano à ela. Sendo assim a faixa ideal de tensão para se trabalhar é entre 7V a 12V. O pino Vin é um pino interligado diretamente à entrada de tensão realizada no plug DC, ou seja, se eu estiver entrando com 12V no pino de DC, estará saindo 12V no Vin. Os pinos 5V e 3V3 fornecem esses respectivos valores de tensão para um circuito externo (protoboard), os dois pinos Gnd são terra e o pino RESET serve para resetar o Arduino quando fornecido tensão nele. A figura abaixo mostra esses pinos.

TODO: FIGURA

O Arduino pode fornecer e receber apenas 40mA em cada pino, podendo danificá-la caso seja fornecido uma corrente maior. Há também um resistor de pull up interno de 20-50 kOhm.

A quadro abaixo mostra os dados completos da placa Arduino UNO.

|                                 |                            |
|---------------------------------|----------------------------|
| Microcontrolador                | ATmega328                  |
| Tensão de operação              | 5v                         |
| Tensão de entrada (recomendada) | 7-12v                      |
| Tensão de entrada (limites)     | 6-20V                      |
| Pinos de I/O Digitais           | 14 (6 deles com saída PWM) |
| Pinos Analógicos                | 6                          |
| Corrente CC por I/O Pino        | 40mA                       |
| Corrente do Pino 3.3V           | 50mA                       |
| Memória Flash                   | 32 KB (ATmega328) 0.5 KB   |
| SRAM                            | 2 KB (ATmega328)           |
| EEPROM                          | 1 KB (ATmega328)           |
| Velocidade do Clock             | 16MHz                      |

## Instalando a IDE
Você vai precisar de acesso à Internet para baixar o Arduino IDE (Integrated Development Environment), o software usado para escrever seu código Arduino que está disponível gratuitamente no site. http://arduino.cc/en/Main/Software
Após baixar o software do site você pode clicar no ícone do aplicativo para abri-lo direto, como na imagem abaixo:

TODO: FIGURA

Ou você pode clicar no ícone do aplicativo .exe e instalá-lo em seu PC. Não há complicações na instalação, somente aceite os termos e espere finalizar.

TODO: FIGURA

##Como funciona o IDE?
O IDE é dividido em três partes: a barra de ferramentas que fica na parte superior, a janela de código no centro, e na janela de mensagens na parte inferior.

TODO: FIGURA

### Selecionar Tipo de Arduino
Conferir se o modelo da placa utilizado está configurado no programa. Para isso, vá em TOOL > BOARD (na barra de ferramentas), em seguida escolha o modelo da placa Arduino que está utilizando como mostra a figura abaixo

TODO: FIGURA

### Selecionar Porta de Comunicação
É necessário selecionar a porta correta para comunicação entre o Arduino e o Computador. Para isso, vá até o menu **Tools -> Port -> COM3**. A porta varia de acordo com a entrada USB que você conectou sua placa.

TODO: FIGURA

# Programação
Trabalhar com Arduino é bastante simples sua programação é dividida em dois blocos que são escritos em linguagem C/C++. Um dos blocos no escopo do código é o void setup(), onde faremos a configuração dos pinos a serem utilizados. No outro bloco, o void loop(), será executado o código de comando  em ciclos infinitos e repetitivos. Abaixo segue o exemplo mais simples disponível mostrando o uso dos dois blocos.

O código acima é um simples teste onde o primeiro bloco está dizendo que o pino 13 (led) do Arduino será saída, e no segundo está dizendo que a saída será alta (5V) por mil milissegundos (1 segundo) e em seguida ficará desligada também por mil milissegundos. Vale observar que a função delay conta o tempo em milissegundos.

## Operadores

Saber usar os operadores de maneira correta é essencial na programação tanto operadores aritméticos, lógicos e de comparação, por isso segue abaixo a tabela com os símbolos e suas respectivas funções:


| Símbolos | Funções                  | Tipo       |
|----------|--------------------------|------------|
| x++      | x = x + 1                | Aritmética |
| x--      | x = x - 1                | Aritmética |
| x += y   | x = x + y                | Aritmética |
| x -= y   | x = x - y                | Aritmética |
| x \*= y   | x = x \* y              | Aritmética |
| x /= y   | x = x / y                | Aritmética |
| x ==y    | x É igual a y            | Comparação |
| x != y   | x é diferente de y       | Comparação |
| x < y    | x é menor que y          | Comparação |
| x > y    | x é maior que y          | Comparação |
| x <= y   | x é menor igual y        | Comparação |
| x >= y   | x é maior igual y        | Comparação |
| &&       | Porta lógica “E” (AND)   | Lógicos    |
| ||       | Porta lógica “OU” (OR)   | Lógicos    |
| !        | Porta lógica “NÃO” (NOT) | Lógicos    |

## Constantes
Constantes são valores que não podem ser alterados, normalmente assumem dois valores e podem ser interpretados como números binários 0 (zero) e 1 (um).

 *TRUE/FALSE: são constantes booleanas que definem estados lógicos. Verdadeiro é qualquer valor que não seja zero. Falso é sempre o valor zero.
 *HIGH/LOW: essas constantes definem as tensões nos pinos digitais do Arduino. Alto é uma tensão de 5 volts; baixo, o terra (ou 0 volt).
 *INPUT/OUTPUT: são constantes programadas pela função “pinMode()” para os pinos do Arduino; eles podem ser entradas (de sensores), INPUT ou podem ser saídas (de controle), OUTPUT.

## Variáveis
As variáveis são posições na memória do programa que possuem um nome e o tipo de informação que irão guardar. Essas posições podem inicialmente estar vazias ou contar algum valor e sempre podem ser alteradas pelo programa ou pelo programador. A variável deve ser declarada antes de ser chamada e deve constituir de um nome e o tipo. Uma variável pode ser global ou local de acordo de onde ela foi declarada, se for logo no início, antes da função void setup(), ela será global e pode ser usada e “vista” por qualquer função do programa. Se for declarada dentro de uma função, ela será local e será usada e “vista” somente por essa função.
 *byte - esse tipo armazena 8 bits (0-255);
 *int - armazena números inteiros de até 16 bits;
 *long - armazena números inteiros de até 32 bits;
 *float - variáveis deste tipo podem armazenar números fracionários de até 32 bits.
As vezes temos que guardar várias variáveis do mesmo tipo e usá-las com frequência. Sendo assim, guardamos em vetores. Abaixo mostramos como montar vetores no Arduino, lembrando que sempre a primeira posição será a posição 0.
 *Para declarar vetores diga seu tipo, um nome e escrever “Vetor” na frente seguido de colchetes, quando declarar valores separe-os com vírgula e sempre entre chaves como no exemplo: `int nomeVetor [ ] = {1, 3, 4, 7}`; 
 *Pode-se também declarar o tamanho do vetor, para isso coloque o número de termos entre os colchetes como no exemplo: `int nomeVetor[13]` ;
 *Pode-se também armazenar um determinado valor em um lugar específico do vetor como no exemplo que guarda um inteiro de valor 2 na posição 8 do vetor: `int nomeVetor[8]= 2`;

# Funções
Muitas vezes precisamos executar a mesma tarefa diversas vezes. Quando isso acontece, para diminuir as chances de erros e deixar o código mais claro criamos funções. No Arduino também utilizamos muito essa ferramenta. Abaixo segue de modo simplificado como criar funções no Arduino e tem basicamente a seguinte estrutura:

 *Tipo da função (int, float, etc.);
 *Nome da função (o nome que achar melhor) seguido de “Function”;
 *Os parâmetros que são passados para a função;
 *Operação que deseja que a função execute;
 *Retorna o valor (ou valores) que a função calculou.

Abaixo temos um exemplo de função que recebe os valores de a, b, c e calcula as raízes e as retorna como x1 e x2

Temos funções na biblioteca do Arduino que são muito úteis. Essas funções podem ser de tempo, matemáticas e de entrada e saída. Segue algumas principais delas com seus respectivos usos:

|                       | Funções Matemáticas        |                                                                               |
|-----------------------|----------------------------|-------------------------------------------------------------------------------|
| Função                | Função                     | Descrição                                                                     |
| pow(base, exp)        | pow(base, exp)             | Elevar um número à potência                                                   |
| sq(x)                 | sq(x)                      | Eleva x ao quadrado                                                           |
| sqrt(k)               | sqrt(k)                    | Raiz quadrada de k                                                            |
| abs(y)                | abs(y)                     | Módulo de y, valor absoluto                                                   |
| min(x, y)             | min(x, y)                  | Retorna menor número entre x e y int                                          |
| max(x, y)             | max(x, y)                  | Retorna maior número entre x e y int                                          |
| random(min, max)      | random(min, max)           | Retorna número aleatório entre min e max                                      |


|                       | Funções de Tempo           |                                                                               |
|-----------------------|----------------------------|-------------------------------------------------------------------------------|
| delay(ms)             | delay(ms)                  | Pausa o programa por ms milissegundos                                         |
| delayMicroseconds(us) | delayMicroseconds(us)      | Pausa o programa por us microsegundos                                         |
| millis(t) / micro(us) | millis(t) / micro(us)      | Tempo em milissegundos / micro segundos desde que programa começou a executar |


|                       | Funções de Entrada e Saída |                                                                               |
|-----------------------|----------------------------|-------------------------------------------------------------------------------|
| pinMode(pin, I/O)     | pinMode(pin, I/O)          | Configura pino específico para ser I/O                                        |
| digitalWrite( )       | digitalWrite( )            | Escreve HIGH/LOW em um pino digital                                           |
| digitalRead( )        | digitalRead( )             | Lê HIGH/LOW no pino digital específico                                        |
| analogWrite( )        | analogWrite( )             | Escreve valor analógico PWM em um pino                                        |
| analogRead( )         | analogRead( )              | Lê valor de tensão no pino específico                                         |

## Laços

Nos códigos dos programas muitas vezes é preciso executar uma função diversas vezes ou até que uma certa condição seja satisfeita. Para isso, usamos os comandos de laço que nada mais são comandos de repetição para se fazer uma determinada tarefa ou estabelecer o que fazer caso ela não seja feita. Os laços mais comuns são:

### If (condicional) e if... Else

É um laço de controle de fluxo onde ele executa certas instruções somente se as condições dentro dos parênteses forem aceitas. As instruções devem ser colocadas depois do if e dentro de chaves (recomendado) ou não. Exemplo de uso do if:

TODO: FIGURA

Se acrescentarmos mais um bloco de instruções, pode-se criar o comando if... else, que nada mais é se a primeira condição (if) não for satisfeita o programa atua com as instruções dentro de else. O exemplo abaixo ilustra isso:

TODO: FIGURA

### Switch...case
Esse laço controla o fluxo de programas permitindo o programador especificar diferentes códigos que deverão ser executados em diferentes condições. O switch compara o valor especificado com as sentenças e quando o valor é o mesmo, ele executa o código. Usualmente coloca-se a palavra break, assim quando uma condição é aceita o programa para de executar e pula para a próxima ação.

TODO: FIGURA

### While

É um dos laços mais usado nos programas. Sua função é executar determinadas instruções até que uma condição inicialmente verdadeira se torne falsa ou o contrário.

TODO: FIGURA

### For

A declaração for é a mais utilizada na programação e é usada para repetir as instruções colocadas entre chaves. Normalmente se usa um contador para fazer o ciclo desejado. Esse laço é dividido em três partes: for(inicialização; condição; incremento). Note que cada parâmetro dentro do parênteses é separado por ponto e vírgula.

TODO: FIGURA
