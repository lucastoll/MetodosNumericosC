#include <stdio.h> //Biblioteca padr�o de entrada/sa�da, printf scanf.
#include <stdlib.h> //emula o prompt de comando, cls pause.
#include <locale.h> //acentua��o / linguagem
#include <math.h>  //fun��es mat�maticas
#include <ctype.h> //Ascii e manipula��o de caracteres to upper to lower
#include <string.h> //Fun��es string
#include <windows.h> //Cores
//Exerc�cio 0.0 Convers�o Dolar
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
float valor, taxa, c;
printf("\n-----------------------------");
printf("\nQual o valor em R$: ");
    scanf("%f", &valor);
printf("\nQual a taxa de convers�o na data atual?  ");
    scanf("%f", &taxa);
c = valor/taxa;
printf("\n A Convers�o de %.2f R$ para D�lar � %.2f US$", valor, c);
printf("\n-----------------------------");
return 0;
}
*/

//Ex�rcicio 0 Else if 2 n�meros ><
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
float n1, n2;
printf("\nDigite os dois n�meros: ");
scanf("%f %f", &n1, &n2);
if (n1>n2)
    printf("n1 � maior que n2");
else if (n2>n1)
    printf("n2 � maior que n1");
else
    printf("Os n�meros s�o iguais");
getch();
}
*/

//Exerc�cio 1 IF Intervalo 0 e 9
/*
int main()
{
setlocale(LC_ALL, "portuguese");
int n1;
printf("Digite um n�mero para saber se ele est� no intervalo de 0 e 9\n");
scanf("%i", &n1);
if ((n1>=0)&&(n1<=9))
    printf("O n�mero %i est� dentro do intervalo 0-9", n1);
else
    printf("O n�mero %i n�o est� dentro do intervalo",n1);

getch();
}
*/

//Exerc�cio 2 IF Intervalo Input
/*
int main()
{
setlocale(LC_ALL, "portuguese");
float in1, in2, n;
printf("Digite o primeiro n�mero do seu intervalo\n");
scanf("%f", &in1);
printf("Digite o segundo n�mero do seu intervalo\n");
scanf("%f", &in2);
printf("Digite um n�mero para saber se est� dentro do intervalo definido\n");
scanf("%f", &n);

float troca1, troca2;
troca1 = 0;
troca2 = 0;

if (in2<in1)
    troca1 = in2;
    troca2 = in1;
    in2 = troca2;
    in1 = troca1;

if ((n>in1)&&(n<in2))
    printf("O n�mero %.1f est� dentro do intervalo %.1f - %.1f", n, in1, in2);
else if ((n==in1) || (n=in2))
    printf("O n�mero %.1f est� na extremidade do intervalo %.1f - %.1f", n, in1, in2);
else
    printf("O n�mero %.1f n�o est� dentro do intervalo %.1f - %.1f", n, in1, in2);


getch();
}
*/

//Exerc�cio 3 IF calculadora 2 n�meros
/*
int main()
{
float soma1, soma2, soma3, sub1, sub2, sub3, mult1, mult2, mult3;
int escolha, escolha2, div1, div2 ,div3, mod1;
setlocale(LC_ALL, "portuguese");

do{
printf("Bem vindo a calculadora de 2 n�meros");
sleep(1);
printf("\nDigite a opera��o que voc� quer fazer\n1 - Soma, 2 - Subtra��o, 3 - Multiplica��o, 4 - Divis�o\n");
scanf("%i", &escolha);



if (escolha==1)
{
    printf("Digite o primeiro n�mero da soma\n");
    scanf("%f", &soma1);
    printf("Digite o segundo n�mero da soma\n");
    scanf("%f", &soma2);
    soma3 = soma1 + soma2;
    printf("\nA soma de %.2f com %.2f � igual a %.2f", soma1, soma2, soma3);
}
if (escolha==2)
{
    printf("Digite o primeiro n�mero da subtra��o\n");
    scanf("%f", &sub1);
    printf("Digite o segundo n�mero da subtra��o\n");
    scanf("%f", &sub2);
    sub3 = sub1 - sub2;
    printf("\nA subtra��o de %.2f com %.2f � igual a %.2f", sub1, sub2, sub3);

}
if (escolha==3)
{
    printf("Digite o primeiro n�mero da multiplica��o\n");
    scanf("%f" , &mult1);
    printf("Digite o segundo n�mero da multiplica��o\n");
    scanf("%f", &mult2);
    mult3 = mult1 * mult2;
    printf("\nA multiplica��o de %.2f com %.2f � igual a %.2f", mult1, mult2, mult3);
}

if (escolha==4)
{
    printf("Digite o primeiro n�mero da divis�o\n");
    scanf("%i", &div1);
    printf("Digite o segundo n�mero da divis�o\n");
    scanf("%i", &div2);
    div3 = div1 / div2;
    mod1 = div1 % div2;
    printf("\nA divis�o  de %i com %i � igual a %i com resto %i", div1, div2, div3, mod1);
}
printf("\nDigite 1 para continuar: ");
scanf("%i", &escolha2);
system("cls");
}while(escolha2==1);

return(0);
}
*/


//Exerc�cio 4 IF tr�s n�meros repetido e maior.
/*
int main()
{
setlocale(LC_ALL, "portuguese");
float n1, n2, n3;
printf("Digite o primeiro n�mero: ");
scanf("%f", &n1);
printf("Digite o segundo n�mero: ");
scanf("%f", &n2);
printf("Digite o terceiro n�mero: ");
scanf("%f", &n3);
//IF MAIOR
if ((n1>n2)&&(n1>n3))
    printf("O n�mero %.2f � o maior dentre os 3", n1);
if ((n2>n1)&&(n2>n3))
    printf("O n�mero %.2f � o maior dentre os 3", n2);
if ((n3>n2)&&(n3>n1))
    printf("O n�mero %.2f � o maior dentre os 3", n3);
//IF REPETIDO
if ((n1==n2)||(n1==n3))
    printf("\nO n�mero %.2f se repete", n1);
if (n2==n3)
    printf("\nO n�mero %.2f se repete", n2);

getch();
}
*/

//Ex�rcicio 5 IF Tri�ngulos
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
float a, b, c;
printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
printf("\nVerificador de tri�ngulos C");
printf("\nDigite o �ngulo A: ");
scanf("%f", &a);
printf("\nDigite o �ngulo B: ");
scanf("%f", &b);
printf("\nDigite o �ngulo C: ");
scanf("%f", &c);

if ((a < b + c)&&(b < a + c)&&(c < b + a))
    {
    printf("\n� possivel fazer um tri�ngulo com essas medidas.");
    if((a==b)&&(b==c))
        printf("\nTri�ngulo Equil�tero.");
    else if((a!=b)&&(b!=c)&&(c!=a))
        printf("\nTri�ngulo Escaleno.");
    else
        printf("\nTri�ngulo Is�sceles.");
    }
else
    printf("\nN�o � possivel fazer um tri�ngulo com essas medidas.");

printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
getchar();
}
*/

//Ex�rcicio 7 IF mod par ou impar
/*
int main()
{
setlocale(LC_ALL, "portuguese");
int n1;
printf("Digite um n�mero: ");
scanf("%i", &n1);
if (n1>0)
    if (n1%2==0)
    printf("O n�mero %i � par",n1);
    else
    printf("O n�mero %i � impar",n1);
else
    printf("o n�mero � negativo ou neutro.");
getch();
}
*/

//Ex�rcicio 8 mod m�ltiplos
/*
int main ()
{
int n1, n2;
setlocale(LC_ALL, "portuguese");
printf("\nDigite os dois n�meros: ");
scanf("%i %i", &n1, &n2);
if(n1%n2 == 0)
    printf("Os numeros s�o m�lt�plos");
else
    printf("Os numeros n�o s�o m�lt�plos");
getch();
}
*/

//Ex�rcicio 9 Volume cilindro e constante
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
float h, r, V;
const float PI = 3.14159;

printf("\nQual o valor da Altura do cilindro: ");
    scanf("%f", &h);
printf("\nQual o valor do raio da base: ");
    scanf("%f", &r);

V = PI*(pow(r, 2))*h;
printf("O volume do seu cilindro � %.2f M�", V);
return 0;
*/

// Exerc�cio 10 - OBI 01 - Avi�o
/*
// Regras OBI - N�o pode colocar informe o valor
// s� um Scanf
// sa�da sempre tem um \n
int main()
{
int numerocompetidores, numerofolhas, numerofolhasporcompetidor;
scanf("%i %i %i", &numerocompetidores, &numerofolhas, &numerofolhasporcompetidor);
if (numerofolhasporcompetidor * numerocompetidores <= numerofolhas)
    printf("S\n");
else
    printf("N\n");
system("pause");
return 0;
}
*/

// Exerc�cio 11 - OBI 02 - Overflow
/*
int main()
{
int OVERFLOW, n1, n2, resultado;
char operador;
scanf("%i", &OVERFLOW);
scanf("%i %c %i", &n1, &operador, &n2);
if (operador == '+')
    resultado = (n1 + n2);
else
    resultado = (n1 * n2);

if (resultado > OVERFLOW)
    printf("OVERFLOW\n");
else
    printf("OK\n");

system("pause");
return 0;
}
/*
int main()
{
setlocale(LC_ALL, "portuguese");


getch();
}
*/

// Exerc�cio 12 - Switch exemplo
/*
int main()
{
setlocale(LC_ALL, "portuguese");
int num;
printf("\nMenu: \n1.Somar\n2.Subtrair\nDigite a sua op��o: ");
scanf("%i", &num);
switch(num)
  {
    case 1: printf("\nA op��o escolhida foi a 1\n");
            break;
    case 2: printf("\nA op��o escolhida foi a 2\n");
            break;
    default: printf("\nOp��o invalida!\n");
            break;
  }
getch();
}
*/

// Exerc�cio 13 - Switch Calculadora
/*
int main()
{
setlocale(LC_ALL, "portuguese");
float num1, num2, num3;
char operador;
printf("Digite dois n�meros e uma opera��o\n+ = adi��o, - = subtra��o, * = multiplica��o, / = divis�o, ^ = potencia\nExemplo: 10 * 10\n\n");
scanf("%f %c %f", &num1, &operador, &num2);
switch(operador)
  {
    case '+': num3 = num1 + num2;
                printf("Resultado = %.2f", num3);
                break;
    case '-': num3 = num1 - num2;
                printf("Resultado = %.2f", num3);
                break;
    case '*': num3 = num1 * num2;
                printf("Resultado = %.2f", num3);
                break;
    case '^': num3 = pow(num1,num2);
                printf("Resultado = %.2f", num3);
                break;
    case '/': if (num2!=0)
                {
                num3 = num1 / num2;
                printf("\nResultado = %.2f", num3);
                }
              else
                printf("\n N�o existe divis�o por 0!!!!!!");
                break;


    default: printf("Op��o invalida!");
             break;
  }
getchar();
}
*/

// Exerc�cio 14 - Switch vogal e consoante
/*
int main()
{
setlocale(LC_ALL, "portuguese");
char letra, minuscula;
printf("\nDigite uma letra: ");
scanf("%c", &letra);
fflush(stdin);
minuscula=tolower(letra); //passar tudo pra minusculo em outra variavel para dar certo no case,
//mesmo se a letra for maiuscula � printada pois quem � verificado � o minuscula n�o a letra
switch(minuscula)
 {
    case 'a': printf("\nA letra %c � vogal", letra);
             break;
    case 'e': printf("\nA letra %c � vogal", letra);
             break;
    case 'i': printf("\nA letra %c � vogal", letra);
             break;
    case 'o': printf("\nA letra %c � vogal", letra);
             break;
    case 'u': printf("\nA letra %c � vogal", letra);
             break;
    default: printf("\nA letra %c � consoante", letra);
             break;
 }
//if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
    //printf("\nA letra %c � vogal", letra);
//else
    //printf("\n letra %c � consoante", letra);
getchar();
}
*/

// Exerc�cio 15 - Tabela ASCII

/*
int main()
{
	setlocale(LC_ALL, "portuguese");
	char tecla, saida;

	do
	{
		system("color 3E");
		//system("cls");
		tecla = getch();
		printf("\n%c = %i na tabela ASCII\n", tecla, tecla);
		if (tecla >= 48   && tecla <= 57)
			printf("\nDigito num�rico\n\n");
        if (tecla == 27)
            saida = getch();
            printf("Digite esc de novo para sair");
	}while(saida != "27");

}
*/

//Exerc�cio 15.1 - Tabela ascii completa
/*
int main()
{
	unsigned char c; //unsinged de 0 at� 255
	//signed de -128 a +127
	for (c= 0; c< 255; ++c) //mudar c < de acordo com unsigned e signed
	{
	  printf("\t%i-%c", c, c);
	}
	printf("\n");
	for (c= 0; c< 255; ++c) //mudar c < de acordo com unsigned e signed
	{
	  printf("\t%o-%c", c, c);
	}
    printf("\n");
	for (c= 0; c< 255; ++c) //mudar c < de acordo com unsigned e signed
	{
	  printf("\t%X-%c", c, c);
	}

  system("pause");
  return 0;
}
*/


//Exerc�cio 16 - Prescri��o m�dica com for e if aninhado.
/*
int main()
{
int doenca;
int numA, atendimentos;
int ocGripe=0, ocVirose=0, ocCabeca=0, ocNaoDiag=0;
setlocale(LC_ALL, "portuguese");


printf("\nQuantos atendimento ser�o realizados?\n");
scanf("%i", &numA);

for(atendimentos=1;atendimentos<=numA;atendimentos++)
    {
    printf("\n\nInforme o c�digo da doen�a diagnosticada\n");
    scanf("%i", &doenca);
    if ((doenca == 1) || (doenca == 2))
        {
        printf("\nDescri��o Diagnosticada: Virose\nMedicamento Indicado: Descanso");
        ++ocVirose;
        }
    else if ((doenca == 3) || (doenca == 5))
        {
        printf("\nDescri��o Diagnosticada: Dor de Cabe�a\nMedicamento Indicado: Analg�sico");
        ++ocCabeca;
        }
    else if (doenca == 4)
        {
        printf("\nDescri��o Diagnosticada: Gripe\nMedicamento Indicado: Vitamina C");
        ++ocGripe;
        }
    else if (doenca == 6)
        {
        printf("\nDescri��o Diagnosticada: N�o definida\nMedicamento Indicado: Exames");
        ++ocNaoDiag;
        }
    else
        {
        printf("\nC�digo Inv�lido");
        --atendimentos;
        }
    }
// relat�rio
printf("\n\n==============================================");
printf("\nRelat�rio di�rio\n");
printf("\n Ocorr�ncias: Virose = %i", ocVirose);
printf("\n Ocorr�ncias: Dor de cabe�a = %i", ocCabeca);
printf("\n Ocorr�ncias: Gripe = %i", ocGripe);
printf("\n Ocorr�ncias: N�o diagnosticado = %i", ocNaoDiag);
printf("\n==============================================");

getch();
}
*/

// Exerc�cio 17 - Controle de temperatura com for
/*
int main()
{
setlocale(LC_ALL, "portuguese");
float cl, fh;
int x;
for (x=1; x<=5;x++)
    {
    printf("\nInforme o valor em Fahrenheit (F):\n");
    scanf("%f", &fh);

    cl = (fh - 32) / 1.8;
    printf("%.2f", cl);

    if (cl < 15)
        printf("�C = Frio");
    else if ((cl >= 15) && (cl <= 30))
        printf("�C = Normal");
    else
        printf("�C = Quente");
    }
getch();
}
*/


// Exerc�cio 18 - FOR, n�mero negativo ou positivo 3 vezes.
/*
int main()
{
setlocale(LC_ALL, "portuguese");
int i;
float num;
for(i=1;i<=3;)
 {
  printf("\nDigite um n�mero: ");
  scanf("%f", &num);
  fflush(stdin);
  if(num<0)
    printf("\nO n�mero %.2f � negativo\n",num);
  else
    printf("\nO n�mero %.2f N�O � negativo\n",num);
  i++;
 }
printf("\n%i", i);
getch();
}
*/


//Exerc�cio 19 - FOR somatorio 5 valores
/*
int main()
{
setlocale(LC_ALL, "portuguese");
int cont; //variavel de controle
float num,soma=0; //soma = variavel acumuladora

for(cont=1;cont<=5;cont++)
 {
     printf("\nDigite o %i numero: ", cont);
     scanf("%f", &num);
     fflush(stdin);
     soma=soma+num;
 }
printf("\nSoma = %.2f\n\n", soma);
getch();
}
*/

//Exerc�cio 20 - FOR Contador de n�meros pares.
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
int cont=0, num, i; // cont = var. contadora, inicializada com 0 para tratamento

for(i=0;i<5;i++)
 {
     printf("\nDigite o %i numero: ", i+1);
     scanf("%i", &num);
     fflush(stdin);

     if(num%2==0)
        cont=cont+1; //somar um na variavel contadora de soma
 }
printf("\nQuantidade de numeros pares = %i\n", cont);

getch();
}
*/

//Exerc�cio 21 - FOR menor valor digitado - n�o inicializar a variavel pois se n�o o menor valor vai ser o inicializado

/*
int main ()
{
setlocale(LC_ALL, "portuguese");
int i;
float num,menor;
for(i=0;i<5;i=i+1)
 {
     printf("\nDigite o %i numero: ", i+1); //i n�o altera
     scanf("%f", &num);
     fflush(stdin);

     if(i==0 || num<menor) // if primeira vez do loop
        menor = num; //atribui o primeiro valor a variavel, resolvendo o problema da inicilzia��o
 }
printf("\nMenor valor digitado = %.2f\n\n", menor);
getch();
}
*/




//Exerc�cio 22 - Controle de temperatura com FOR e sleep
/*
int main()
{
setlocale(LC_ALL,"portuguese");
int temp, cont;
printf("\nQual a temperatura? ");
scanf("%i", &temp); //20 --- tem que chegar a 50

//resfriamento
for (cont = temp; cont > 50 ; cont -= 1) //--cont
{
	printf("\n Resfriando %i ",cont);
	_sleep(500); // 1000 milesimos de segundos - 1 segundo
}
//aquecimento
for (cont=temp; cont < 50 ; ++cont)
{
	printf("\n Aquecendo %i ",cont);
	_sleep(500);
}
printf("\nFim do programa");
system("pause");
return 0;
}

*/





//Exerc�cio 23 - relat�rio empresarial.
/*
int main ()
{
setlocale(LC_ALL, "portuguese");

getch();
}

*/





//Exerc�cio 24 do while area e perimetro de um quadrado.
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
char op='s';
float lado,p,a;
while(toupper(op)=='S')
 {
  system("cls");
  printf("\nDigite o lado do quadrado\n");
  scanf("%f", &lado);
  fflush(stdin);
  a = pow(lado, 2); // math.h area = lado ao quadrado
  p=4*lado; //perimetro = lado x 4

  printf("\nArea: %.2f\n\nPerimetro: %.2f\n" ,a,p); //resutlado

  printf("\nDeseja continuar? [S]im ou [N]ao: "); //variavel while
  scanf("%c", &op);
  fflush(stdin);
 }
getch();
}

*/





//Exerc�cio 25 m�dia escolar com while e do while.
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
float n1,n2;
char controle='S';
do
 {
  system("cls");
  printf("Programa calcular m�dia dos alunos");
    //primeira nota
    do
     {
    printf("\nDigite a nota 1 (0-10): ");
    scanf("%f", &n1);
    fflush(stdin);
    if (n1<0 || n1>10)
        printf("\nValor invalido\n\n");
     }while(n1<0 || n1>10);
    //segunda nota
    do
     {
    printf("\nDigite a nota 2 (0-10): ");
    scanf("%f", &n2);
    fflush(stdin);
    if (n2<0 || n2>10)
        printf("\nValor invalido\n\n");
     }while(n2<0 || n2>10);
    //m�dia
    printf("\nMedia=%.2f\n\n", (n1+n2)/2);
    _sleep(1000);
    printf("\nDeseja continuar? S ou N: " );
    scanf("%c", &controle);
    fflush(stdin);
 }while(controle=='s' || controle=='S'); //fim do dowhile
system("pause");
return 0;
}
*/





//Exerc�cio 26 conta bancaria.
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
float saldo_inicial=0, saldo=0, deposito=0, retirada=0;
int cont=0, cont1=0;

printf("Digite o saldo inicial da conta banc�ria (valor n�merico): ");
scanf("%f", &saldo_inicial);
fflush(stdin);
saldo = saldo_inicial;
do
{
//inicio do loop
system("cls");
printf("SALDO ATUAL: %.2fR$", saldo);
printf("\nO que voc� deseja fazer?\n1 - Dep�sito 2 - Retirada 3 - Encerrar opera��es\n");
scanf("%i", &cont);
fflush(stdin);
//Deposito

if (cont==1)
    {
    printf("\nDigite o valor que deseja depositar\n");
    scanf("%f", &deposito);
    printf("\nDepositando o valor de %.2fR$ na conta com saldo atual de %.2fR$", deposito, saldo);
    saldo += deposito;
    printf("\nSaldo apos a opera��o: %.2fR$\nDigite qualquer caractere para continuar.", saldo);
    getch();
    }
else if (cont==2)
    {
    printf("\nDigite o valor que deseja retirar\n");
    scanf("%f", &retirada);
    fflush(stdin);
    printf("\nRetirando o valor de %.2fR$ na conta com saldo de %.2fR$", retirada, saldo);
    sleep(1);
    saldo -= retirada;
    printf("\nSaldo apos a opera��o: %.2fR$\nDigite qualquer caractere para continuar.", saldo);
    getch();
    }
else if (cont==3)
    break;
else
    printf("\nOp��o inv�lida");
    sleep(5);
}while(cont != 3);

if (saldo == 0)
printf("\nEncerrando opera��es...\nSitua��o da conta: Conta zerada (%.2fR$)\n", saldo);
else if (saldo < 0)
printf("\nEncerrando opera��es...\nSitua��o da conta: Conta estourada (%.2fR$)\n", saldo);
else
printf("\nEncerrando opera��es...\nSitua��o da conta: Conta preferencial (%.2fR$)\n", saldo);

system("pause");
return 0;
}
*/





//Exerc�cio - 27 rand exemplo
///*
int main ()
{
setlocale(LC_ALL, "portuguese");
int variavel, i, jogador;
srand(time(NULL));

//for(i=0; i < 100; i++)
//{

variavel = ("%i", rand() % 33);
//printf("\n%i", variavel);

if (variavel < 34)
    printf("funcionou ");

system("pause");
return 0;
}
//*/


// Exerc�cio 28 - piano notas beep
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
char tecla;
printf("PIANO\n1-DO\n2-RE\n3-MI\n4-FA\n5-SO\n6-LA\nSI\n");
//tecla = getche();
do
{
tecla = getch();
if(toupper(tecla) == '1')
    Beep(261, 900); //do
else if(toupper(tecla) == '2')
    Beep(329, 900); //re
else if(toupper(tecla) == '3')
    Beep(349, 900); //mi
else if(toupper(tecla) == '4')
    Beep(392, 900); //so
else if(toupper(tecla) == '5')
    Beep(440, 900); //la
else if(toupper(tecla) == '6')
    Beep(493, 900); //si
}while(tecla != 27);
printf("\n Fim do piano");
getch();
}
*/



//Exerc�cio 29 - jogo do advinha
/*
int main ()
{
system("color 5E");
setlocale(LC_ALL, "portuguese");
int escolha, coringa, hp=3, cont=1;
srand(time(NULL));
coringa = ("%i", rand() % 11);
printf("Jogo do advinha \02\nVoc� precisa advinhar o caractere coringa, esse caractere � um n�mero de 1 a 10.");
sleep(2);
printf("\nVoc� tem 3 vidas para acertar, caso suas vidas sejam esgotadas voc� perde!");
sleep(2);
printf("\nIniciando jogo...");
sleep(4);
do
{
system("cls");
if (hp==3)
    printf("HP: \03 \03 \03");
else if (hp==2)
    printf("HP: \03 \03");
else
    printf("HP: \03");
sleep(1);
diferente:
printf("\nDigite um n�mero (1 a 10): ");
scanf("%i", &escolha);
fflush(stdin);

if (escolha != coringa)
    {
    printf("\aVoc� errou -1 de HP\n");
    hp = hp - 1;
    if (hp == 0)
        {
        printf("\nVoc� perdeu! HP esgotado, fim de jogo.");
        printf("\nO Coringa era o n�mero %i \02", coringa);
        controle:
        printf("\nDeseja jogar novamente? \n[1] Sim\n[2] N�o\n");
        scanf("%i", &cont);
        fflush(stdin);
        if (cont == 1)
            {
            coringa = ("%i", rand() % 11);
            hp = 3;
            continue;
            }
        else if(cont == 2)
            break;
        else
            {
            printf("\nOp��o Inv�lida.");
            goto controle;
            }
        }
    }
else if (escolha == coringa)
    {
    printf("Voc� acertou! Parab�ns \02\n");
    sleep(1);
    controle2:
        printf("Deseja jogar novamente? \n[1] Sim\n[2] N�o\n");
        scanf("%i", &cont);
        fflush(stdin);
        if (cont == 1)
            {
            coringa = ("%i", rand() % 11);
            hp = 3;
            continue;
            }
        else if(cont == 2)
            break;
        else
            printf("Op��o Inv�lida.");
            goto controle2;
    }
getch();
}while(cont == 1);
printf("\nEncerrando opera��es...");
getch();
}

*/





//Exerc�cio 30 - Matriz Vetores e contabiliza��o de negativos.
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
int numero[6], x, neg=0;
//leitura do vetor
for(x=0;x<6;x++)
    {
     printf("\nDigite o n�mero da posi��o %i: ",x);
     scanf("%i", &numero[x]);
     fflush(stdin);
    }

for(x=0;x<16;x++)
    if(numero[x]<0) //contabiliza��o negativos
        neg++;
printf("quantidade de n�meros negativos = %i\n\n", neg);
getch();
}
*/






// Exerc�cio 31 vetor e verifica��o de repeti��o
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
int numero[10],x,procurado,cont=0;
//leitura do vetor
for(x=0;x<10;x++)
    {
     printf("\nN�mero[%i] = ",x);
     scanf("%i", &numero[x]);
     fflush(stdin);
    }
do
{
printf("\nDigite o n�mero que deseja procurar: ");
scanf("%i", &procurado);
fflush(stdin);
for(x=0;x<10;x++)
    if(numero[x]==procurado)
        cont++;
}while(cont==0);
printf("\nO n�mero %i foi encontrado %i vez(es)\n\n", procurado, cont);
getch();
}
*/






// Exerc�cio 32 Soma de vetor(res)
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
int A[100], B[100], C[100], i, qtde;
printf("Vetor A\n");

do // perguntar o tamanho do vetor
{
printf("\nDigite a quantidade de elementos do vetor(max.100): ");
scanf("%i" ,&qtde);
fflush(stdin);
}while(qtde<1 || qtde > 100);


for (i=0;i<qtde;i++) // Declara��o vetor a
{
    printf("A[%i]: ", i);
    scanf("%i", &A[i]);
}
printf("\nVetor B\n");
for(i=0;i<qtde;i++) // Declara��o vetor b
{
    printf("B[%i]: ", i);
    scanf("%i", &B[i]);
}
printf("\nSoma dos Vetores, Vetor C.");
for (i=0;i<qtde;i++) // Soma dos vetores
{
    C[i]=A[i]+B[i];
    printf("\nC[%i] = %i", i, C[i]);
}
getch();
return 0;
}
//1
*/


//Exerc�cio 33 - Vetor multidimensional mostrar na tela
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
int mat[3][3],i,j;

for(i=0; i<3; i++)
    for(j=0;j<3;j++)
    {
    printf("Digite mat[%i][%i]= ", i, j);
    scanf("%i", &mat[i][j]);
    fflush(stdin);
    }
for(i=0; i<3; i++)
    {
    for(j=0;j<3;j++)
        printf("%i\t", mat[i][j]);
    printf("\n");
    }
system("pause");
return 0;
}

*/


//Exerc�cio 34 - Jogo da mem�ria com vetor, compara��o vetor.
/*
int main()
{
system("color 4E");
setlocale(LC_ALL, "portuguese");
int vetor[5],  i, numero, contagem=0;
srand(time(NULL));
printf("Advinhe os valores!\n");
getch();
for (i=0; i<5; i++)
{
vetor[i] = ("%i", rand() % 10 + 1);
printf("%i ", vetor[i]);
usleep(250000);
}
usleep(100000);
system("cls");
printf("Digite a sequ�ncia de n�meros igual estava na tela.\n");
for(i=0;i<5;i++)
    {
    scanf("%i", &numero);
    if(numero==vetor[i])
        {
        contagem++;
        }
    }
printf("A resposta era %i %i %i %i %i", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
printf("\nVoc� acertou %i n�meros", contagem);
getch();
}
*/


//Exerc�cio 35 - ache o wally, vetor multidimensional s� um caractere, randomizar um elemento do vetor.
/*
int main()
{
system("color 4E");
setlocale(LC_ALL, "portuguese");
srand(time(NULL));
int i, j, a, b, cordx, cordy;
char matriz[5][5];
for(i=0; i<5; i++) //definir
    {
    for(j=0;j<5;j++)
    {
    matriz[i][j] = '\01';
    }
    }
//a = ("%i", rand() % 10 + 1);
//b = ("%i", rand() % 10 + 1);
//matriz[a][b] = '\02';
//printar matriz
for(i=0; i<5; i++)
    {
    for(j=0;j<5;j++)
        printf("%c ", matriz[i][j]);
    printf("\n");
    }
//randomizar wally
a = ("%i", rand() % 5 + 1);
b = ("%i", rand() % 5 + 1);
matriz[a][b] = "\02";
int tentativa = 1, sabugo = 1;

do
{
printf("\nOnde est� o wally? passe em coordenadas\nEx: 1 2\n");
scanf("%i", &cordx);
fflush(stdin);
cordx -= 1;
scanf("%i", &cordy);
cordy -= 1;
if ((cordx==a)&&(cordy==b))
    {
    printf("Voc� ganhou!");
    break;
    }
else
    {
    printf("\nVoc� errou, tente de novo");
    tentativa += 1;
    }
}while(sabugo == 1);
printf("\nVoc� acertou em %i tentativas.\n", tentativa);

for(i=0; i<5; i++)
    {
    for(j=0;j<5;j++)
        printf("%c ", matriz[i][j]);
    printf("\n");
    }
getch();
}
*/


//Exerc�cio 36 - String verifica��o quantas vezes aparece.
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
char frase[] = "Alunos da Facens", letra;
int i, tam, cont=0, sabugo=1;
do
{

system("cls");
printf("\nDigite uma frase: ");
gets(frase);
fflush(stdin);
tam=strlen(frase); //tamanho = tamanho da frase

printf("\nDigite uma letra: ");
scanf("%c", &letra);
fflush(stdin);
for(i=0;i<tam;i++)
    if(toupper(frase[i])==toupper(letra)) //verifica��ol letra por letra
        cont++; //achou a letra

if (cont==0)
    printf("A letra %c n�o aparece nenhuma vez", letra);
else
    printf("\nA letra %c aparece %i vez na frase\n", letra, cont);
getch();
}while(sabugo==1);
getch();
}
*/

//Exerc�cio 37 - Verifica��o de senha correta / incorreta / quase correta
/*
int main()
{
char senha1[7], senha2[7];
int i, cont=0, cont1=0; //cont = contador geral, cont1 = contador dos 3 primeiros

printf("\nDigite a senha: ");
gets(senha1);
fflush(stdin);

printf("\nConfirme a senha: ");
gets(senha2);
fflush(stdin);

for(i=0;i<6;i++)
{
if (senha1[i]==senha2[i])
    {
    cont++;
        if (i<3)
            cont1++;
    }
}

if (cont==6)
    printf("\nSenha valida.");
else if (cont1==3)
    printf("\nErro de digitacao, tente de novo.");
else
    printf("\nSenha invalida");


getch();
}
*/

//Exerc�cio 38 senha com fun��o pronta
/*
int main()
{
char senha1[7], senha2[7];
int i, cont=0, cont1=0; //cont = contador geral, cont1 = contador dos 3 primeiros

printf("\nDigite a senha: ");
gets(senha1);
fflush(stdin);

printf("\nConfirme a senha: ");
gets(senha2);
fflush(stdin);

if(strcmp(senha1, senha2) == 0)
    printf("\nSenha valida!");
else if(strncmp(senha1, senha2, 3)==0)
    printf("\nApenas 3 primeiros caracteres corretos");
else
    printf("\nSenha invalida!");

getch();
}
*/
//Exerc�cio 39 - Criptografar vetor.

#include <windows.h> //Trocar a cor de um trecho de texto.
/*
int main()
{
char senha1[100], cripto[100], descripto[100];
int i, cont=0, tam, color, lastcolor, escolha;
setlocale(LC_ALL, "portuguese");
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;
GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
saved_attributes = consoleInfo.wAttributes;

srand(time(NULL));

printf("\nDigite a mensagem: ");
gets(senha1);
fflush(stdin);
tam = strlen(senha1);

for(i=0; i<tam; i++)
    {
    printf("%c ", senha1[i]);
    }
sleep(1);
printf("\nCriptografando...");
sleep(2);
system("cls");
printf("Mensagem criptografada\n");
sleep(1);
strcpy(cripto, senha1);
for(i=0; i<tam; i++)
    {
    lastcolor = color;
    color = ("%i", rand() % 7+1);
    if (lastcolor == color)
        color = 8;
    usleep(250000);
    SetConsoleTextAttribute(hConsole, color);
    cripto[i]+=1;
    printf("%i", cripto[i]);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
sleep(1);
strcpy(descripto, cripto);

do
{
printf("\nDeseja descriptografar? 1 - Sim 2 - No\n");
scanf("%i", &escolha);
}while(!(escolha==1||escolha==2));
if (escolha==1)
{
for(i=0; i<tam; i++)
{
usleep(250000);
descripto[i]-=1;
printf("%c", descripto[i]);
}
printf("\nOverall\n");
printf("\nMensagem Original: ");
sleep(1);
puts(senha1);
printf("\nMensagem Criptografada: ");
sleep(1);
puts(cripto);
printf("ou\n");
for(i=0;i<tam;i++)
    printf("%i", cripto[i]);
printf("\n\nMensagem Descriptografada: ");
sleep(1);
puts(descripto);
sleep(1);
if (strcmp(senha1, descripto)==0)
    printf("Mensagem original e descriptografada s�o iguais, programa concluido com sucesso.");
}
getch();
}

*/


//Exerc�cio 40 - Vetor, colocar vetor em ROL crescente.
/*
int main()
{
int mat[100], tam, i, j,aux;
do
{
    printf("Tamanho do vetor (max.100): ");
    scanf("%i", &tam);
    fflush(stdin);
}while(tam < 1 || tam > 100);
//leitura do vetor
for(i=0;i<tam;i++)
    {
        printf("mat[%i]= ",i);
        scanf("%i", &mat[i]);
        fflush(stdin);
    }
//ordena��o do vetor
for(i=0;i<tam;i++)
    for(j=i+1;j<tam;j++)
      if(mat[i]>mat[j])
        {
         aux=mat[i];
         mat [i]=mat[j];
         mat [j]=aux;
        }
//mostrar vetor
printf("\nVetor ordenado\n");
for(i=0;i<tam;i++)
    printf("mat[%i] = %i\n", i, mat[i]);

getch();
}
*/




//Exerc�cio 40 - Vetor, colocar vetor em ROL crescente.
/*
int main()
{
int mat[100], tam, i, j,aux;
do
{
    printf("Tamanho do vetor (max.100): ");
    scanf("%i", &tam);
    fflush(stdin);
}while(tam < 1 || tam > 100);
//leitura do vetor
for(i=0;i<tam;i++)
    {
        printf("mat[%i]= ",i);
        scanf("%i", &mat[i]);
        fflush(stdin);
    }
//ordena��o do vetor
for(i=0;i<tam;i++)
    for(j=i+1;j<tam;j++)
      if(mat[i]>mat[j])
        {
         aux=mat[i];
         mat [i]=mat[j];
         mat [j]=aux;
        }
//mostrar vetor
printf("\nVetor ordenado\n");
for(i=0;i<tam;i++)
    printf("mat[%i] = %i\n", i, mat[i]);

getch();
*/

//Exerc�cio 41 - Matriz bidimensional - Somar colunas e verificar qual coluna tem a maior soma.
/*
int main()
{
int matriz[10][10],linha,coluna,lin,col,soma[10],maior,pos;
do
 {
 	printf("\nLinhas: ");
 	scanf("%i",&linha);
 	fflush(stdin);
 }while(linha<1 || linha>10);
do
 {
 	printf("\nColunas: ");
 	scanf("%i",&coluna);
 	fflush(stdin);
 }while(coluna<1 || coluna>10);
//leitura da matriz
for(lin=0;lin<linha;lin++)
  for(col=0;col<coluna;col++)
    {
    	printf("\nmatriz[%i][%i]= ",lin,col);
    	scanf("%i",&matriz[lin][col]);
    	fflush(stdin);
    }//for
//soma das colunas
for(col=0;col<coluna;col++)
  {
  	soma[col]=0;    //limpando cada elemento do meu vetor
  	for(lin=0;lin<linha;lin++)
  	  soma[col]+=matriz[lin][col];
  }//for col
//mostra matriz
printf("\n");
for(lin=0;lin<linha;lin++)
  {
    for(col=0;col<coluna;col++)
       	printf("%i\t",matriz[lin][col]);
    printf("\n");
  }//for
//verifica maior coluna
for(col=0;col<coluna;col++)
  {
  	if(col==0)
  	  {
  	  	maior=soma[0];    //1� elemento do vetor soma
  	  	pos=0;
  	  }//if
  	printf("\nColuna %i - Soma: %i\n",col,soma[col]);
  	if(maior<soma[col])
  	  {
  	  	maior=soma[col];
  	  	pos=col;
  	  }//if
  }//for
printf("\nMaior coluna %i - Soma: %i\n\n",pos,maior);
printf("somasoma %i", soma[0]);

system("pause");
return 0;
}//main
*/

/*

//Exerc�cio 42 - Strings nome Jedi
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
setlocale(LC_ALL, "portuguese");
char nome[100], sobrenome[100], mae[100], nome_jedai[100], sabugo[100], composto_jedi[100], cidade[100];
int i,j;

printf("Bem vindo Padawan\n");
//sleep(2);
printf("voc� chegou a uma parte muito importante de seu treinamento...\n");
//sleep(2);
printf("necessitamos de saber informa��es sobre seu nome e suas origens.\n\n");
//sleep(1);
printf("Nome:\n");
scanf("%s", nome);
printf("\n");
printf("Sobrenome:\n");
scanf("%s", sobrenome);
printf("\n");
printf("Nome da m�e:\n");
scanf("%s", mae);
printf("\n");
printf("Cidade de origem:\n");
scanf("%s", cidade);
printf("\n");
//nome Jedi
for(i=0;i<3;i++)
    nome_jedai[i]=nome[i];
nome_jedai[3] = (tolower(sobrenome[0]));
nome_jedai[4] = sobrenome[1];
//Sobrenome Jedai
for(i=0;i<2;i++)
    sabugo[i]=mae[i];
sabugo[2] = (tolower(cidade[0]));
sabugo[3] = cidade[1];
sabugo[4] = cidade[2];
//Nome composto Jedi
for(i=0;i<3;i++)
    composto_jedi[i]=nome_jedai[i];
composto_jedi[3] = '-';
for(i=4,j=2;i<7;i++,j++)
    composto_jedi[i]=sabugo[j];
printf("\nSeu nome JEDI � %s %s\n",nome_jedai, sabugo);
printf("Nome composto: %s\n", composto_jedi);
system("pause");
return 0;
}

//for(i=0;i<2;u++)

//for achar sobrenome
//for z=tam(strlen);z>=0;z--)
    // if nome[z]=' '
    // for (j=0;j<2;j++;i++)
    //  njedi[i] = nome  [z+1+j];
    //   z=-10;

*/
//Exerc�cio 43 String - Quantas vezes uma letra aparece na string.
/*
int main ()
{
setlocale(LC_ALL, "portuguese");
char frase[] = "Alunos da Facens", letra;
int i, tam, cont=0, sabugo=1,pos[100];
do
{
system("cls");
printf("\nDigite uma frase: ");
gets(frase);
fflush(stdin);
tam=strlen(frase); //tamanho = tamanho da frase

printf("\nDigite uma letra: ");
scanf("%c", &letra);
fflush(stdin);
for(i=0;i<tam;i++)
    if(toupper(frase[i])==toupper(letra)) //verifica��ol letra por letra
        {
            pos[cont]=i+1;
            cont++; //achou a letra
        }


if (cont==0)
    printf("A letra n�o aparece nenhuma vez");
else
    {
    printf("\nA letra %c aparece %i vezes na frase nas posi��es\n", letra, cont);
    for(i=0;i<cont;i++)
        printf("%i ", pos[i]);
    }

cont=0;
getch();
}while(sabugo==1);
getch();
}
*/



//Exerc�cio 44 - Procurar string dentro de uma string.
/*
int main()
{
char frase[80], str[80];
int pos[80], tamf, tams, i, cont, cont2, j, qtde=0,x,z,ilson;

printf("\nDigite uma frase: ");
gets(frase);
fflush(stdin);
tamf=strlen(frase);  //Tamanho da frase
printf("Digite o string a ser buscado: ");
gets(str);
fflush(stdin);
tams=strlen(str); //Tamanho da string buscada
for(i=0;i<tamf;i++)                             //For repete enquanto j < tamanho da frase
 {
  cont=0; //Define contagem = 0 cada vez que repetir o primeiro for
  for(j=0;j<tams;j++)                           //for string, repete at� j < tamanho da string
  {
   if(frase[i+j]==str[j]) //Compara��o, primeira letra da Frase (0+0) � igual a primeira letra da string? (0)
   //Caso ele entre nesse if e n�o entre no proximo, o j acrescenta 1, pois ele n�o entra no else que reseta o for
   {
      cont++; //Para cada letra igual que ele acha acrescente o cont
      if(cont==tams) //S� entra aqui quando tiver achado todos os elementos da string na frase
      {
       qtde++;
       for(z=0;z<tams;z++,x++) //For para guardar as posi��es que a string for achada, guarda os numeros e m um vetor
       {
         pos[x]=i+1+z;
       }
      }//if cont
   }//if frase
   else
    j=tams; //Caso a letra da frase n�o seja igual a a letra da string, j = tams, ent�o o volta para o primeiro for

  }//for j=0
 }//for i=0
if(qtde==0)
    printf("\nN�o ha ocorrencia do string %s na frase", str);
else
 {
  printf("\nO string %s ocorreu %i vezes nas posicoes:\n", str, qtde);
  for(i=0;i<x;i++)
    printf("%i\t",pos[i]);
 }
 printf("\n");


system("pause");
getch();
}
*/

// Exerc�cio 45 f�rmula de bhaskara
/*
int main()
{
double A, B, C, delta;

scanf("%lf %lf %lf", &A, &B, &C);

if (((B*B) - 4 * A * C) < 0 || A==0)
    printf("Impossivel calcular\n");
else
    {
    delta = sqrt((B*B) - 4 * A * C);
    printf("R1 = %.5lf\nR2 = %.5lf\n", ((-B + delta)/(2*A)), ((-B - delta)/(2*A)));
    }

system("pause");
return 0;
}
*/


// Exerc�cio  ROL CRESCENTE, sort
/*
int main()
{
int a, b, c, um, dois, tres, mat[100], i, j, aux;
scanf("%i %i %i", &a, &b, &c);

mat[0]=a;
mat[1]=b;
mat[2]=c;


for(i=0;i<3;i++)
    for(j=i+1;j<3;j++) // verifica 0>0, 0>1, 0>2, depois que volta no for de cima, 1>2
      if(mat[i]>mat[j])
        {
         aux=mat[i];
         mat [i]=mat[j];
         mat [j]=aux;
        }

um = mat[0];
dois = mat[1];
tres = mat[2];
printf("%i\n%i\n%i\n\n", um, dois, tres);
printf("%i\n%i\n%i\n", a, b, c);


system("pause");
return(0);
}
*/
