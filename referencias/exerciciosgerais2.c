#include <stdio.h> //Biblioteca padrão de entrada/saída, printf scanf.
#include <stdlib.h> //emula o prompt de comando, cls pause.
#include <locale.h> //acentuação / linguagem
#include <math.h>  //funções matématicas
#include <ctype.h> //Ascii e manipulação de caracteres to upper to lower
#include <string.h> //Funções string
#include <windows.h> //Cores



// Exercício 1 - Cinema (VETORES)
/*
int main()
{
float entrada, op, total, ingresso;
char matriz[10][10];
int contador=1, linha, coluna, fileira, poltrona, integral=0, estudante=0, idoso=0;
setlocale(LC_ALL, "portuguese");
//Definição da matriz
for (linha = 0; linha < 10; linha++)
{
    for (coluna = 0; coluna < 10; coluna++)
    {
        matriz[linha][coluna] = '-';
    }
}
//Valor da entrada
printf("------------------------------------------------------CINEMA------------------------------------------------------------\n");
printf("Digite o valore´´´´eéééééééé´piranha da entrada integral: ");
scanf("%f", &entrada);
fflush(stdin);
//Entrada de ingressos
do
{
do
{
system("cls");
printf("Escolha o tipo do ingresso:\n[1]Integral\n[2]Estudante\n[3]Idoso\n[4]Iniciar Sessão\nDigite a opção: ");
scanf("%f", &op);
}while(op <= 0 || op > 4);

if (op == 1)
        {
        printf("Entrada num. %i = Integral", contador);
        ingresso = entrada;
        integral+=1;
        }
else if(op == 2)
        {
        printf("Entrada num. %i = Estudante", contador);
        ingresso = entrada/2;
        estudante+=1;
        }
else if(op == 3)
        {
        printf("Entrada num. %i = Idoso", contador);
        ingresso = entrada/2;
        idoso+=1;
        }
else
    break;

total = total + ingresso;
contador+=1;

do
{
printf("\n\nEscolha o lugar:");
printf("\nDigite a fileira [0 a 9]: ");
scanf("%i", &fileira);
printf("\n\nDigite a poltrona [0 a 9]: ");
scanf("%i", &poltrona);
if (matriz[fileira][poltrona] == 'X' || fileira < 0 || fileira > 9 || poltrona < 0 || poltrona > 9)
    {
    printf("ERRO! Lugar já ocupado ou poltrona inexistente.");
    }
else
    {
    matriz[fileira][poltrona] = 'X';
    printf("\nLugar registrado com sucesso!");
    break;
    }
}while(TRUE);

getch();
}while(op!=4);
//Printar relatório
printf("\n----------Relatório de vendas----------");
printf("\nTotal arrecadado       = %.2f", total);
printf("\nTotal médio por pessoa = %.2f", total/contador);
printf("\nIntegral               = %i", integral);
printf("\nEstudante              = %i", estudante);
printf("\nIdoso                  = %i\n", idoso);
//Printar a sala de cienma
printf("\n======================================== LUGARES DO CINEMA ========================================\n");
printf("\tP0\tP1\t\tP2\tP3\tP4\tP5\tP6\t\tP7\tP8\tP9\n");
for (linha = 0; linha < 10; linha++)
{
    printf("\nF%i", linha);
    for (coluna = 0; coluna < 10; coluna++)
    {
        if (coluna==2 || coluna==7)
            printf("\t||");
        printf("\t");
        printf("%c", matriz[linha][coluna]);
    }
}
printf("\n========================  ==============================================  ==========================\n");
printf("\n                          ______________________________________________                            \n");
printf("\n_________________________|              I N T E R S T E L L A R         |___________________________\n");
getch();
}
*/

// Exercício 2 - Fahrenheit
/*
int main()
{
float celsius, fahrenheit;
setlocale(LC_ALL, "portuguese");
printf("Digite a temperatura em C°:");
scanf("%f", &celsius);
fflush(stdin);
fahrenheit = (celsius * 9/5) + 32;
printf("\nTemperatura convertida para fahrenheit: %.2f F°\n", fahrenheit);
getch();
}
*/

// Exercício 3 - Função Fahrenheit
/*
float conversao_fahrenheit(int temperaturaC);

main()
{
float celsius, fahrenheit;
setlocale(LC_ALL, "portuguese");
printf("Digite a temperatura em C°:");
scanf("%f", &celsius);
fahrenheit = conversao_fahrenheit(celsius);
printf("\nTemperatura convertida para fahrenheit: %.2f F°\n", fahrenheit);

getch();
}
float conversao_fahrenheit(int temperaturaC)
{
    return ((temperaturaC * 9/5) + 32);
}
*/

// Exercício 4 - Função Média chamando Função Soma
/*
float media(float n1, float n2);
float soma(float n1, float n2);

int main()
{
float num1, num2, med;
setlocale(LC_ALL, "portuguese");
printf("Digite N1: ");
scanf("%f", &num1);
printf("Digite N2: ");
scanf("%f", &num2);
med = media(num1, num2);
printf("Média = %.2f", med);

getch();
}
float soma(float n1, float n2)
{
    return (n1 + n2);
}

float media(float n1, float n2)
{
    return(soma(n1, n2)/ 2);
}
*/


// Exercício 5 - Função par ou impar
/*
int imparpar(n1);
main()
{
int numero, valor;
setlocale(LC_ALL, "portuguese");

printf("Digite um número: ");
scanf("%i", &numero);
fflush(stdin);
valor = imparpar(numero);

if (valor == 0)
    printf("O número é impar");
else
    printf("O número é par");

getch();
}

int imparpar(n1)
{
    if (n1%2==0)
        return 1;
    else
        return 0;
}
*/


// Exercício 6 - Matriz registro de notas
/*
int main()
{
float matriz[40][5], nota=0, maior_nota, menor_nota;
int linha, coluna;
char escolha;
setlocale(LC_ALL, "portuguese");
//Define a matriz toda como 0 inicialmente pra não dar erro na hora de printar.
for(linha=0;linha<40;linha++)
{
    for(coluna=0;coluna<5;coluna++)
    {
        matriz[linha][coluna] = 0;
    }
}
//Inicio do programa
for(linha=0;linha<40;linha++)
{
    printf("Aluno %i\n", linha);
    for(coluna=1;coluna<5;coluna++)
    {
        do
        {
        switch(coluna)
            {
                case 1: printf("Nota AC1: ");
                break;

                case 2: printf("Nota AC2: ");
                break;

                case 3: printf("Nota AG: ");
                break;

                case 4: printf("Nota AF: ");
                break;
            }
        scanf("%f", &nota);
        fflush(stdin); // char
        }while(!(nota >= 0.000001 && nota <= 10));
        matriz[linha][coluna] = nota;
    }
    matriz[linha][5] = (matriz[linha][1] * 0.15) + (matriz[linha][2] * 0.3) + (matriz[linha][3] * 0.10) + (matriz[linha][4] * 0.45);
    printf("Média Final Facens = %.2f", matriz[linha][5]);
    do
    {
        printf("\nDeseja digitar mais notas? (S/N).\n");
        fflush(stdin);
        scanf("%c", &escolha);
    }while(toupper(escolha)!=('S') && toupper(escolha)!=('N')); // as duas condições precisam ser verdadeiras pro loop continuar
    if(toupper(escolha)=='S')
        {
        printf("\n============================================================================\n");
        continue;
        }
    else
        break;
}
//printar boletim completo
printf("\n============================================================================\n");
printf("\t\t\t BOLETIM COMPLETO.");
for(linha=0;linha<40;linha++)
{
    if (matriz[linha][5] == 0 && matriz[linha+1][5]==0 && matriz[linha+2][5]==0) // checar se precisa printar mais da matriz ou não
        break;
    printf("\n\t  AC1  \t  AC2  \t  AG  \t  AF  \tMédia Facens\n");
    printf("\n Aluno %i:", linha);
    for(coluna=1;coluna<6;coluna++)
    {
        printf(" %.2f\t", matriz[linha][coluna]);
    }
    printf("\n");
}
//Verificar maior nota
printf("\n============================================================================\n");
printf("\t\t\t MAIOR MÉDIA.");
maior_nota = matriz[0][5];
for(linha=0;linha<40;linha++)
{
    for(coluna=1;coluna<6;coluna++)
    {
        if(coluna == 5 && matriz[linha][coluna] > maior_nota)
            maior_nota = matriz[linha][coluna];
    }
}
for(linha=0;linha<40;linha++)
{
if(maior_nota == matriz[linha][5])
    {
    printf("\nAluno %i / Média: %.2f", linha, matriz[linha][5]);
    }
}
//Verificar menor nota
printf("\n============================================================================\n");
printf("\t\t\t MENOR MÉDIA. \n");
menor_nota = matriz[0][5];
for(linha=0;linha<40;linha++)
{
if(matriz[linha][5] > 0.5 && matriz[linha][5] < menor_nota) // é 0.5 pois foi feito a conta da media final mesmo para os alunos que a nota não foi digitada, ai deu ruim aqui.
    menor_nota = matriz[linha][5];
}

for(linha=0;linha<40;linha++)
{
if(menor_nota == matriz[linha][5])
    printf("\nAluno %i / Média: %.2f", linha, matriz[linha][5]);
}
//SUBSTITUTIVA
printf("\n============================================================================\n");
printf("\t\t\t SUBSTITUTIVA. \n");
for(linha=0;linha<40;linha++)
{
if(matriz[linha][5] < 5 && matriz[linha][5] > 0.1)
    printf("\nAluno %i / Média: %.2f\n\n", linha, matriz[linha][5]);
}
system("pause");
return 0;
}
*/


// Exercício 7 - função media de gasolina
/*
float consumo_medio(float km, float volume);
main()
{
float dist, vol, consumo, resultado;
setlocale(LC_ALL, "portuguese");

printf("Digite a distância (km): ");
scanf("%f", &dist);


printf("Digite o volume (Litros): ");
scanf("%f", &vol);

consumo = consumo_medio(dist, vol);
printf("Consumo médio de gasolina: %.2f", consumo);

getch();
}

float consumo_medio(float km, float volume)
{
return km / volume;
}
*/


// Exercício 8 - função potência na mão
/*
float potencia(float base, float expoente);
int main()
{
float base, expoente, resultado;
printf("Digite o numero base e o expoente\n");
scanf("%f %f", &base, &expoente);
resultado = potencia(base, expoente);
printf("Resultado (%.1f^%.1f) = %.2f", base, expoente, resultado);
getch();
}
float potencia(float base, float expoente)
{
int c = 0;
float resultado = 1;
for(c=0; c < expoente; c++)
{
resultado = resultado * base;
}
return resultado;
}


*/


// Exercício 9 - função produto escalar
/*
int prod_escalar(vet1, vet2);
void recebeVetor(int vet[5]);
int main()
{
int vetor1[5], vetor2[5], vetor3[5], c, resultado;
printf("Digite os elementos do vetor");
recebeVetor(vetor1);
printf("\nVetor 2\n");
recebeVetor(vetor2);
printf("\nResultado produto escalar = %i", prod_escalar(vetor1, vetor2));
getch();
}

int prod_escalar(int vetor1[5], int vetor2[5])
{
int vetor3[5], conta=0, c=0;
for(c=1;c<6;c++)
    {
    vetor3[c] = vetor1[c] * vetor2[c];
    conta += vetor3[c];
    }
    return conta;
}

void recebeVetor(int vet[5])
{
int i;
for(i=0;i<5;i++)
    {
    printf("\nDigite um valor [%i]: ",i);
    scanf("%i",&vet[i]);
    }
}
*/


// Exercício 10 - string revisão
/*
int main()
{
setlocale(LC_ALL, "portuguese");
char frase[100], letra;
int tam, cont=0, sabugo=1, c;
do
{
printf("\nDigite uma frase: ");
gets(frase);
fflush(stdin);
tam=strlen(frase); //tamanho = tamanho da frase

for(letra='a';letra<='z';letra++)
    {
        cont=0;
        for(c=0;c<tam;c++)
            if(tolower(frase[c]==letra))
                cont++;
        if(cont!=0)
            printf("\n A letra %c = %i vezes na frase\n", letra, cont);
    }

getch();
}while(sabugo==1);
}

*/


// Exercício 11 - Função inverter string
/*
void inverter(char string[], char stringaux[]);

int main()
{
char string[100], stringaux[100];
int c;
while (TRUE)
{
gets(string);
inverter(string, stringaux);
printf("\n___________________________________\n");
} //while
} //main

void inverter(char string[], char stringaux[])
{
int c=0, len=strlen(string);
printf("Invertida = ");

for(c=0; c<=len; c++)
{
stringaux[c] = string[len - c];
printf("%c", stringaux[c]);
}
stringaux[c] = '\0';

}//funcao
*/



// Exercício 12 - inverter string + maiusculo no começo da palavra
/*
void inversaodaora(char string[], char stringaux[]);
void inverter(char string[], char stringaux[]);


int main()
{
char string[100], stringaux[100];
int c, len;
gets(string);
inverter(string, stringaux); // Função só pra inverter a string
inversaodaora(string, stringaux); // Passa pra minusculo dps maiusculo se necessario

for(c=1;c<=strlen(string);c++)
    printf("%c", stringaux[c]);
getch();
}
//funcao1
void inverter(char string[], char stringaux[])
{
int c=0, len=strlen(string);
for(c=0; c<=len; c++)
{
stringaux[c] = string[len - c];
}
stringaux[c] = '\0';
}
//funcao2
void inversaodaora(char string[], char stringaux[])
{
int c=0, len=strlen(string);
for(c=0; c<=len; c++) //minusculo
    {
    if(stringaux[c] >= 65 && stringaux[c] <= 90)
        stringaux[c]+=32;
    }
for(c=0; c<=len; c++) //maiusculo
    {
    if (c==0 && stringaux[c] >= 97 && stringaux[c] <= 122)
        stringaux[c] -= 32;
    else if(stringaux[c-1] < 65 && stringaux[c] >= 97 && stringaux[c] <= 122)
        stringaux[c] -= 32;
    }
}
*/


// Exercício 13 - Ler e imprimir 5 ponteiros
/*
int main()
{
int vetor[5], c, i, *p_vetor;


printf("Leitura de um vetor\n");
/* Maneira normal de fazer - com tradutor (sem ponteiros)
for(c=0;c<5;c++)
    {
    scanf("%i", &vetor[c]);
    }

for(c=0;c<5;c++)
    {
    printf("\nVetor[%i] = %i\n", c, vetor[c]);
    }
*/
// Maneira com ponteiros
/*
p_vetor=vetor;
for(i=0;i<5;i++,p_vetor++)
{
printf("Elemento %i = ", i);
scanf("%i", p_vetor);
}
p_vetor=vetor;
printf("\nImprime o Vetor\n");
for(i=0;i<5;i++,p_vetor++)
{
printf("num[%i] = %i\n", i, *p_vetor);
}

getch();
}
//*/


// Exercício 14 - Maneira de printar ponteiros
/*
int main()
{
int var = 10;
int *ptr;
ptr = &var;
printf("Mostra o conteudo de var");
printf("\nAcesso direto - var = %i", var);
printf("\nAcesso indireto - var = %i", *ptr);
printf("\n\nMostra o endereco de var\n");
printf("\nPonteiro constante = %u", &var);
printf("\nPonteiro variavel = %u", *ptr);
printf("\nIncrementando ponteiro\n");
ptr++;
printf("\nPonteiro variavel = %u", ptr);

getch();
}
*/


// Exercício 15 - Matriz e ponteiro
/*
int main()
{
int q=0, i=0, num[100], *p_num, escolha;
p_num = num; //Inicialização do ponteiro

printf("Leitura dos elementos do vetor\n");
do
{
    printf("\nEndereco atual = %u", p_num);
    printf("\n%i elemento = ", i+1);
    scanf("%i", p_num++);
    i++;
    q++;
    do
    {
    printf("\nDeseja continuar? (1 - Sim/2 - Nao)\n");
    scanf("%i", &escolha);
    fflush(stdin);
    }while(escolha < 1 || escolha > 2);
    if(escolha==2)
        break;
}while(TRUE);

printf("\nImprimindo elementos do vetor\n");
p_num = num; // voltar ao endereço inicial para printar
for(i=0;i<q;i++)
{
    printf("\nEndereco atual = %u", p_num); //endereço
    printf("\n%i elemento = %i", i+1, *p_num++); //conteudo
}

getch();
}
*/


// Exercício 16 - Soma de matriz e ponteiro
/*
int main()
{
float vetor1[100], vetor2[100], vetor3[100], *p_vetor1, *p_vetor2, *p_vetor3;
int i, q;
p_vetor1 = vetor1;
p_vetor2 = vetor2;
//scan quantidade
do
{
printf("\nDigite a quantidade de elementos do vetores\n");
scanf("%i", &q);
}while(q > 100 || q < 0);
//scan primeiro vetor
for(i=0;i<q;i++)
{
    printf("\nEndereco atual = %u", p_vetor1);
    printf("\n%i elemento = ", i+1);
    scanf("%f", p_vetor1++);
    fflush(stdin);
}
printf("\nSegundo vetor\n");
//scan segundo vetor
for(i=0;i<q;i++)
{
    printf("\nEndereco atual = %u", p_vetor2);
    printf("\n%i elemento = ", i+1);
    scanf("%f", p_vetor2++);
    fflush(stdin);
}
p_vetor1 = vetor1;
p_vetor2 = vetor2;
p_vetor3 = vetor3; //Inicializar
//Soma dos vetores
for(i=0;i<q;i++, p_vetor3++, p_vetor2++, p_vetor1++)
{
*p_vetor3 = *p_vetor1 + *p_vetor2;
}
//Printar vetor soma
printf("\nVetor 3\n");
p_vetor3 = vetor3; //Reinicializar
for(i=0;i<q;i++)
{
printf("\nEndereco atual = %u", p_vetor3);
printf("\nVetor3[%i] =  %.2f", i, *p_vetor3++);
}
getch();
}
*/


// Exercício 17 - Soma de vetores com função e chamada por referência (INDEX = ERRADO)
/*
void scan_vetor(float vetor[100], int q);
void soma_vetor(float vetor1[100], float vetor2[100], float vetor3[100], int q);
void print_vetor(float vetor[100], int q);

int main()
{
float vetor1[100], vetor2[100], vetor3[100], *p_vetor1, *p_vetor2, *p_vetor3;
int i, q;
p_vetor1 = vetor1;
p_vetor2 = vetor2;
//scan quantidade
do
{
printf("Digite a quantidade de elementos do vetores\n");
scanf("%i", &q);
fflush(stdin);
}while(q > 100 || q < 1);
printf("\nPrimeiro vetor\n");
scan_vetor(vetor1, q);
printf("\nSegundo vetor\n");
scan_vetor(vetor2, q);
soma_vetor(vetor1, vetor2, vetor3, q);
system("cls");
printf("Vetor 1\n");
print_vetor(vetor1, q);
printf("\n\nVetor 2\n");
print_vetor(vetor2, q);
printf("\n\nVetor 3\n");
print_vetor(vetor3, q);
getch();
}

void scan_vetor(float vetor[100], int q)
{
int i;
for(i=0;i<q;i++)
{
    printf("\nEndereco atual = %u", vetor);
    printf("\n%i elemento = ", i+1);
    scanf("%f", vetor++);
    fflush(stdin);
}
}

void soma_vetor(float vetor1[100], float vetor2[100], float vetor3[100], int q)
{
int i;
for(i=0;i<q;i++, vetor3++, vetor2++, vetor1++)
    *vetor3 = *vetor1 + *vetor2;
}

void print_vetor(float vetor[100], int q)
{
int i;
for(i=0;i<q;i++)
    {
    printf("\nEndereco atual = %u", vetor);
    printf("\nVetor[%i] =  %.2f", i, *vetor++);
    }
}
*/


// Exercício 19 - soma de notas com ponteiro e chamada por referência

void scan_vetor(float *p_vetor, int q);
void media_vetor(float *p_vetor1, float *p_vetor2, float *p_vetor3, int q);
void print_vetor(float *p_vetor, int q);

int main()
{
float nota1[100], nota2[100], nota3[100], *p_vetor1, *p_vetor2, *p_vetor3;
int i, q;
p_vetor1 = nota1;
p_vetor2 = nota2;
p_vetor3 = nota3;

//scan quantidade
do
{
printf("Digite a quantidade de elementos do vetores\n");
scanf("%i", &q);
fflush(stdin);
}while(q > 10 || q < 1);
printf("\nPrimeiro vetor\n");
scan_vetor(nota1, q);
printf("\nSegundo vetor\n");
scan_vetor(nota2, q);
media_vetor(nota1, nota2, nota3, q);
printf("\nNota 1\n");
print_vetor(nota1, q);
printf("\n\nNota 2\n");
print_vetor(nota2, q);
printf("\n\nNota 3\n");
print_vetor(nota3, q);



printf("\n\n\n");
for(i=0;i<q;i++)
{
if(*p_vetor3 < 5)
    {
    //SetConsoleTextAttribute(hConsole, 4);
    printf("\nNota final media[%i] = Reprovado!", i);
    //SetConsoleTextAttribute(hConsole, saved_attributes);
    }
else
    {
    //SetConsoleTextAttribute(hConsole, 2);
    printf("\nNota final media[%i] = Aprovado!", i);
    //SetConsoleTextAttribute(hConsole, saved_attributes);
    }
}
getch();
}

void scan_vetor(float *p_vetor, int q)
{
int i;
for(i=0;i<q;i++)
{
    do
    {
    printf("Nota %i = ", i);
    scanf("%f", p_vetor);
    fflush(stdin);
    printf("%f", p_vetor);
    }while(*p_vetor > 10 || *p_vetor < 0.000001); //duvidaduvidaduvidaduvidaduvida
    p_vetor++;
}
}

void media_vetor(float *p_vetor1, float *p_vetor2, float *p_vetor3, int q)
{
int i;
for(i=0;i<q;i++, p_vetor3++, p_vetor2++, p_vetor1++)
    {
    *p_vetor3 = *p_vetor1 + *p_vetor2;
    *p_vetor3 = *p_vetor3 / q;
    }
}

void print_vetor(float *p_vetor, int q)
{
int i;
for(i=0;i<q;i++)
    {
    printf("\nEndereco atual = %u", p_vetor);
    printf("\nNota[%i] =  %.2f", i, *p_vetor++);
    }
}



// Exercício 20 - MEDIA VETOR, ABAIXO DA MEDIA, MAIOR DO VETOR E ETC...
/*
void scan_vetor(float *p_vetor, int q);
float media_vetor(float *p_vetor, int q);
void print_vetor(float *p_vetor, int pos);
int maior(float *p_vetor, int q);
int abaixo(float *p_vetor, int q, float media);

int main()
{
int q=0, big=0, lower;
float temp[31], *ponteiro, media;

//scan quantidade
do
{
ponteiro = temp;
printf("Digite a quantidade de elementos do vetores\n");
scanf("%i", &q);
fflush(stdin);
}while(q > 31 || q < 1);
scan_vetor(temp, q);
big = maior(temp, q);
printf("\n\nMaior temperatura = %.2fC // Dia %i", *(ponteiro + big), big+1);
media = media_vetor(temp, q);
printf("\n\nTemperatura media = %.2fC", media);
lower = abaixo(temp, q, media);
printf("\n\nQuantidade de temperaturas abaixo da media =  %i", lower);


getch();
}//main


int abaixo(float *p_vetor, int q, float media)
{
int i=0, contagem=0;
for(i=0;i<q;i++,p_vetor++)
    {
    if(*p_vetor < media)
        {
        printf("\nTemperatura dia %i (%.2f C) - Abaixo da media", i+1, *p_vetor);
        contagem++;
        }
    }
return contagem;
}


int maior(float *p_vetor, int q) //ponteiro variavel
{
int i=0, posicao=0;
float maior=0;
maior = *p_vetor;
for(i=0; i<q; i++, p_vetor++)
    if(*p_vetor > maior)
    {
    maior = *p_vetor;
    posicao = i;
    }

return posicao;
}



void scan_vetor(float *p_vetor, int q) //leitura
{
int i;
for(i=0;i<q;i++)
{
    printf("Temperatura dia %i = ", i+1);
    scanf("%f", p_vetor);
    fflush(stdin);
    p_vetor++;
}
}

float media_vetor(float *p_vetor, int q)
{
int i;
float soma=0;
for(i=0;i<q;i++,p_vetor++)
    {
    soma = soma + *p_vetor;
    }
soma = soma / q;
return soma;
}

*/


// Exercício 21 - String print ao contrario com funções
/*
void mostra_invertido(char *p);

int main()
{
char frase[80];

do
{
printf("\nImprime a frase invertida");
printf("\nDigite a frase: ");
gets(frase);
fflush(stdin);
mostra_invertido(frase);
}while(TRUE);

getch();
}

void mostra_invertido(char *p)
{
int tam = strlen(p), i;
p=p+tam-1; // posiciona o ponteiro na ultima letra, -1 por causa do /0
for(i=0;i<tam;i++,p--)
    printf("%c", *p);

printf("\n\n");
system("pause");
}
*/


// Exercício 22 - Armazenar string ao contrário, 2 ponteiros/vetores
/*
void inverte(char *p, char *pinvertido);
char maiuscula(char letra);
char minuscula(char letra);

int main()
{
char frase[80], invertido[80];

do
{
printf("\nImprime a frase invertida");
printf("\nDigite a frase: ");
gets(frase);
fflush(stdin);
inverte(frase, invertido);
printf("\nFrase invertida: \n%s", invertido);
}while(TRUE);

getch();
}

void inverte(char *p, char *pinvertido)
{
int tam = strlen(p), i;
p=p+tam-1; // posiciona o ponteiro na ultima letra, -1 por causa do /0
for(i=0;i<tam;i++,p--,pinvertido++)
    {
        *pinvertido=minuscula(*p);
        if(i==0)
            *pinvertido=maiuscula(*p);
        if(*p==' ') // já trata tudo aqui, faz tudo que faz no for e já inverte, se só inverter da pau
            {
            i++;
            pinvertido++;
            p--;
            *pinvertido=maiuscula(*p);
            }
    }
*pinvertido = '\0';
}

char maiuscula(char letra)
{
if(letra >= 'a' && letra <= 'z')
    return(letra-32);

return letra; //mesma coisa que um else devido ao return no if

}


char minuscula(char letra)
{
if(letra>='A' && letra <= 'Z')
    return(letra+32);
return letra;
}
*/


// Exercício 23 Função inverte só com um vetor/ponteiro
/*
void inverte(char *p);
char maiuscula(char letra);
char minuscula(char letra);

int main()
{
char frase[80], invertido[80];

do
{
printf("\nImprime a frase invertida");
printf("\nDigite a frase: ");
gets(frase);
fflush(stdin);
inverte(frase);
printf("\nFrase invertida: \n%s", frase);
}while(TRUE);

getch();
}

void inverte(char *p)
{
char aux;
int tam = strlen(p), i;
for(i=0; i<(tam/2); i++) //tam/2 pois o for troca as letras do fim e do começo ao mesmo tempo
    { // esse for não soma o P pois é ponteiro constante *(p+1)
    aux=*(p+i);
    *(p+i) = *(p+tam-1-i);
    *(p+tam-1-i)=aux;
    }

for(i=0;i<tam;i++,p++) // esse for utiliza ponteiro variavel, que consiste em somar p++ e fazer as operações
   {
   	 *p=minuscula(*p);
   	 if(i==0)
   	   *p=maiuscula(*p);
   	 if(*p==' ')
   	   {
   	   	 i++;
   	   	 p++;
   	   	 *p=maiuscula(*p);
	   }//if
   }//for
}//inverte





char maiuscula(char letra)
{
if(letra >= 'a' && letra <= 'z')
    return(letra-32);

return letra; //mesma coisa que um else devido ao return no if

}


char minuscula(char letra)
{
if(letra>='A' && letra <= 'Z')
    return(letra+32);
return letra;
}
*/

//Exercício 24 - Busca letra com função e ponteiro
/*
void letras(char *frase, char letra);

int main ()
{
setlocale(LC_ALL, "portuguese");
char frase[100], letra;
do
{
//frase
system("cls");
printf("\nDigite uma frase: ");
gets(frase);
fflush(stdin);
//letra
printf("\nDigite uma letra: ");
scanf("%c", &letra);
fflush(stdin);
//funcao
letras(frase, letra);
getch();
}while(TRUE);

getch();
}

void letras(char *frase, char letra)
{
int i=0, tam=strlen(frase), cont=0;
int pos[100];


for(i=0;i<tam;i++,frase++)
    if((*frase)==(letra)) //verificaçãol letra por letra
        {
            *(pos+cont)=i+1;
            cont++; //achou a letra
        }


if (cont==0)
    printf("A letra não aparece nenhuma vez");
else
    {
    printf("\nA letra %c aparece %i vezes na frase nas posições\n", letra, cont);
    for(i=0;i<cont;i++)
        printf("%i ", *(pos+i));
    }

}
*/



// Exercício 25 - Busca string com função e ponteiro
/*

void buscastring (char *fraseoriginal, int lenfrase, char *frasebuscada, int lenbusca);

int main()
{
char frase[80], str[80];
int tamf, tams;
setlocale(LC_ALL, "portuguese");
printf("\nDigite uma frase: ");
gets(frase);
fflush(stdin);
tamf=strlen(frase);  //Tamanho da frase
printf("Digite o string a ser buscado: ");
gets(str);
fflush(stdin);
tams=strlen(str); //Tamanho da string buscada
buscastring(frase, tamf, str, tams);


system("pause");
getch();
}

void buscastring (char *fraseoriginal, int lenfrase, char *frasebuscada, int lenbusca)
{
int i=0, j=0, z=0, x=0, qtde=0, cont=0, pos[100];



for(i=0;i<lenfrase;i++)
 {
  cont=0; //Define contagem = 0 cada vez que repetir o primeiro for
  for(j=0;j<lenbusca;j++)                           //for string, repete até j < tamanho da string buscada
  {
   printf("\ni = %i\t j = %i\nTeste %c\t %c",i,j, *(fraseoriginal+i+j), *(frasebuscada+j));
   if(*(fraseoriginal+i+j)==*(frasebuscada+j)) //Comparação, primeira letra da Frase (0+0) é igual a primeira letra da string? (0)
   //Caso ele entre nesse if e não entre no proximo, o j acrescenta 1, pois ele não entra no else que reseta o for
   {
      cont++; //Para cada letra igual que ele acha acrescente o cont
      if(cont==lenbusca) //Só entra aqui quando tiver achado todos os elementos da string na frase
      {
       qtde++;
       for(z=0;z<lenbusca;z++) //For para guardar as posições que a string for achada, guarda os numeros e m um vetor
       {
         *(pos+z)=i+1+z;
       }
      }//if cont
   }//if frase
   else
    j=lenbusca; //Caso a letra da frase não seja igual a a letra da string, j = lenbusca, então o volta para o primeiro for

  }//for j=0
 }//for i=0
if(qtde==0)
    printf("\nNão há ocorrencia do string %s na frase", frasebuscada);
else
 {
  printf("\nO string %s ocorreu %i vezes nas posicoes:\n", frasebuscada, qtde);
  for(i=0;i<z;i++)
    printf("%i\t", *(pos+i));
 }
}
*/

// Exercício 27 - Alocação dinâmica chamada por referência (passando **ponteiro no parametro)
/*
void aloca(int **p, int tam);

main()
{
int *ptr=NULL;
setlocale(LC_ALL, "portuguese");
printf("\nAloca memoria na Funcao e na Main\n");
printf("\nChamada por referencia - Passa endereço do ponteiro\n");
printf("\nMain - antes de alocar");
printf("\nEndereço ptr = %u - Conteudo ptr = %u", &ptr, ptr);
aloca(&ptr, 1); //chamada por referencia aplicada
printf("\n\nMain - depois de alocar");
*ptr = 4; //agora que o ponteiro tem memoria alocada podemos colocar conteudo nele.
printf("\nEndereço ptr (ponteiro constante &ptr) = %u conteudo ptr (endereço ptr variavel) %u \nconteudo real do ponteiro acesso indireto = %u *ptr \n\n\n", &ptr, ptr, *ptr);
system("pause");
}

void aloca(int **p, int tam)
{
    printf("\n\nFuncao - antes de alocar");
    printf("\nEndereço p = %u - Conteudo p = %u (Endereço ptr) - Conteudo ptr = %u", &p, p, *p);
    if((*p=(int*)realloc(*p, tam*sizeof(int)))==NULL)
        exit(1);
    printf("\n\nFuncao - depois de alocar");
    printf("\nEndereço p = %u - Conteudo p = %u (Endereço ptr) - Conteudo ptr = %u", &p, p, *p);
}//aloca

*/


// Exercício 28 Alocação dinamica chamada por valor (retornar endereço alocado para a main)
/*
int* aloca(int *p, int tam); //retorna o endereço da memoria alocada


int main()
{
int *ptr=NULL;
setlocale(LC_ALL, "portuguese");
printf("\nAloca memoria na Funcao e Retorna para a Main\n");
printf("\nChamada por valor - Passa o conteudo do ponteiro\n");
printf("\nMain - antes de alocar");
printf("\nEndereço ptr = %u - Conteudo ptr = %u", &ptr, ptr);
ptr = aloca(ptr, 1); //chamada por referencia aplicada
printf("\n\nMain - depois de alocar");
*ptr = 4; //agora que o ponteiro tem memoria alocada podemos colocar conteudo nele.
printf("\nEndereço p = %u - Conteudo p = %u (Endereço ptr) - Conteudo ptr = %u\n\n\n", &ptr, ptr, *ptr);
system("pause");


getch();
}

int* aloca(int *p, int tam)
{
    printf("\n\nFuncao - antes de alocar");
    printf("\nEndereço p = %u - Conteudo p = %u (Endereço ptr)", &p, p);
    if((p=(int*)realloc(p, tam*sizeof(int)))==NULL)
        exit(1);
    printf("\n\nFuncao - depois de alocar");
    printf("\nEndereço p = %u - Conteudo p = %u (Endereço ptr) - Conteudo ptr = %u", &p, p, *p);
    return p;
}
*/


// Exercício 29 - Alocação dinamica chamada por referencia exemplo exercicio
/*
void aloca(int **p, int tam);
void leitura(int *p);
void mostra(int *p, int tam);

int main()
{
char op;
int *ptr = NULL, cont = 0;

do {
    aloca(&ptr, cont+1);
    leitura(ptr+cont);
    cont++;
    printf("\nDeseja continuar <S/N>: ");
    scanf("%c", &op);
    fflush(stdin);
}while(op!='n' && op!='N');
mostra(ptr, cont);
system("pause");
getch();
}

void aloca(int **p, int tam)
{
    if((*p=(int*)realloc(*p, tam*sizeof(int)))==NULL)
        exit(1);
}

void leitura(int *p)
{
    printf("\nEndereco: %u - Numero: ", p);
    scanf("%i", p);
    fflush(stdin);
}

void mostra(int *p, int tam)
{
    int i;
    for(i=0; i<tam; i++, p++)
        printf("\nEndereco: %u - Numero:%i\n", p, *p);
}
*/


// Exercício 30 - Usando e mudando os valores da alocação dinamica, soma 30 e printa invertido.
/*
void aloca(int **p, int tam);
void leitura(int *p);
void mostra(int *p, int tam);
void altera(int *p, int tam);


int main()
{
char op;
int *ptr = NULL, cont = 0;

do {
    aloca(&ptr, cont+1);
    leitura(ptr+cont);
    cont++;
}while(cont<10);
altera(ptr, cont);
mostra(ptr, cont);
getch();
}

void altera(int *p, int tam)
{
    int i=0;
    for(i=0;i<tam;i++)
    {
        *(p+i) += 30;
    }
}


void aloca(int **p, int tam)
{
    if((*p=(int*)realloc(*p, tam*sizeof(int)))==NULL)
        exit(1);
}

void leitura(int *p)
{
    printf("\nEndereco: %u - Numero: ", p);
    scanf("%i", p);
    fflush(stdin);
}

void mostra(int *p, int tam) // invertido
{
    int i;
    printf("____________________________________________________________________\n");
    for(i=9; i>=0; i--)
        printf("\nEndereco: %u - Numero:%i\n", p+i, *(p+i));
}

*/


// Exercício 31 - ordem inversa quantidade indeterminada
/*
void aloca(int **p, int tam);
void leitura(int *p);
void mostra(int *p, int tam);

int main()
{
char op;
int *ptr = NULL, cont = 0;

do {
    aloca(&ptr, cont+1);
    leitura(ptr+cont);
    cont++;
    printf("\nDeseja continuar <S/N>: ");
    scanf("%c", &op);
    fflush(stdin);
}while(op!='n' && op!='N');
mostra(ptr+cont-1, cont);
system("pause");
getch();
}

void aloca(int **p, int tam)
{
    if((*p=(int*)realloc(*p, tam*sizeof(int)))==NULL)
        exit(1);
}

void leitura(int *p)
{
    printf("\nEndereco: %u - Numero: ", p);
    scanf("%i", p);
    fflush(stdin);
}

void mostra(int *p, int tam)
{
    int i;
    for(i=0; i<tam; i++, p--)
        printf("\nEndereco: %u - Numero:%i\n", p, *(p));
}
*/


// Exercício 32 - Média não considerar 0
/*
void scan_vetor(float *p_vetor, int q);
float media_vetor(float *p_vetor, int q);
void print_vetor(float *p_vetor, int pos);
int maior(float *p_vetor, int q);
int abaixo(float *p_vetor, int q, float media);

int main()
{
int q=0, big=0, lower;
float temp[31], *ponteiro, media;

//scan quantidade
do
{
ponteiro = temp;
printf("Digite a quantidade de elementos do vetores\n");
scanf("%i", &q);
fflush(stdin);
}while(q > 31 || q < 1);
scan_vetor(temp, q);
big = maior(temp, q);
printf("\n\nMaior temperatura = %.2fC // Dia %i", *(ponteiro + big), big+1);
media = media_vetor(temp, q);
printf("\n\nTemperatura media = %.2fC", media);
lower = abaixo(temp, q, media);
printf("\n\nQuantidade de temperaturas abaixo da media =  %i", lower);


getch();
}//main


int abaixo(float *p_vetor, int q, float media)
{
int i=0, contagem=0;
for(i=0;i<q;i++,p_vetor++)
    {
    if(*p_vetor < media)
        {
        printf("\nTemperatura dia %i (%.2f C) - Abaixo da media", i+1, *p_vetor);
        contagem++;
        }
    }
return contagem;
}


int maior(float *p_vetor, int q) //ponteiro variavel
{
int i=0, posicao=0;
float maior=0;
maior = *p_vetor;
for(i=0; i<q; i++, p_vetor++)
    if(*p_vetor > maior)
    {
    maior = *p_vetor;
    posicao = i;
    }

return posicao;
}



void scan_vetor(float *p_vetor, int q) //leitura
{
int i;
for(i=0;i<q;i++)
{
    printf("Temperatura dia %i = ", i+1);
    scanf("%f", p_vetor);
    fflush(stdin);
    p_vetor++;
}
}

float media_vetor(float *p_vetor, int q)
{
int i;
float soma=0;
for(i=0;i<q;i++,p_vetor++)
    {
    soma = soma + *p_vetor;
    }
soma = soma / q;
return soma;
}

*/


// Exercício 33 - maior temperatura com dia, alocação dinamica
/*
void aloca(float **p, int tam);
void leitura(float *p, int tam);
void maior_temp(float *p, int tam, float *pm, int *dia);

int main()
{
char op;
int cont=0, dia;
float *ptr=NULL, maior;

printf("Recebe a temperatura e mostra a maior e o dia em que ocorreu!\n\n");
do{
    aloca(&ptr,cont+1);
    leitura(ptr, cont);
    maior_temp(ptr, cont, &maior, &dia);
    cont++;
    printf("\nDeseja continuar? (S - Sim/N - Nao)\n");
    scanf("%c", &op);
    fflush(stdin);
}while(op=='s'||op=='S');
printf("\nMaior temperatura = %.2f dia = %i", maior, dia);
getch();
}

void aloca(float **p, int tam)
{
    if((*p=(float*)realloc(*p, tam*sizeof(float)))==NULL)
        printf("Não há memória disponível");
}

void leitura(float *p, int tam)
{
    printf("\nTemperatura: ", p);
    scanf("%f", p+tam);
    fflush(stdin);
}

void maior_temp(float *p, int tam, float *pm, int *dia)
{
if(tam==0) // 1 vez
{
    *pm=*p; //maior = temperatura do 1 dia
    *dia=tam+1; // dia =1
}
else
    if(*(p+tam)>*pm)
    {
    *pm=*(p+tam);   //maior = nova temperatura
    *dia=tam+1;      //troca dia
    }

}
*/


// Exercício 34 - randint com alocação dinamica, funcao maior soma e media.
/*
void aloca(float **p, int tam);
void novonumero(float *p, int tam);
void maior_temp(float *p, int tam, float *maior, int *dia);
void funcmedia(float *p, int tam, float *media, float *soma);
void funcprint(float *p, int tam);

int main()
{
int cont=0, dia;
float *ptr=NULL, maior, media, sum;
srand(time(NULL));
setlocale(LC_ALL, "portuguese");
//cores
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;
GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
saved_attributes = consoleInfo.wAttributes;

printf("Temperaturas mensais Sorocaba\n\n");
do{
    aloca(&ptr,cont+1);
    novonumero(ptr, cont);
    maior_temp(ptr, cont, &maior, &dia);
    cont++;
}while(cont!=15);
funcprint(ptr, cont);
funcmedia(ptr, cont, &media, &sum);
printf("\n\Soma das temperaturas = %.2f", sum);
printf("\nTemperatura média = %.2f °C", media);
printf("\nMaior temperatura = %.2f °C| Dia = %i", maior, dia);
getch();
}

void aloca(float **p, int tam)
{
    if((*p=(float*)realloc(*p, tam*sizeof(float)))==NULL)
        printf("Não há memória disponível");
}

void novonumero(float *p, int tam)
{
    float x=0, y=0, z=0;
    x = (("%f", rand() % 100) * 0.01);
    y = ("%f", rand() % 39);
    *(p+tam) = x + y;
}

void maior_temp(float *p, int tam, float *maior, int *dia)
{
if(tam==0) // 1 vez
{
    *maior=*p; //maior = temperatura do 1 dia
    *dia=tam+1; // dia =1
}
else
    if(*(p+tam)>*maior)
    {
    *maior=*(p+tam);   //maior = nova temperatura
    *dia=tam+1;      //troca dia
    }

}

void funcmedia(float *p, int tam, float *media, float *soma)
{
int i=0;
for(i=0;i<tam;i++)
{
    *soma += *(p+i);
}

*media = *soma / tam;
}

void funcprint(float *p, int tam)
{
int contagemmaior, contagemmenor, i;
float maior, menor;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;
GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
saved_attributes = consoleInfo.wAttributes;

for(i=0;i<tam;i++)
{
    if(i==0)
    {
    maior = *p;
    contagemmaior = i;
    }
    if(*(p+i) > maior)
    {
    maior = *(p+i);
    contagemmaior = i;
    }
}

for(i=0;i<tam;i++)
{
    if(i==0)
    {
    menor = *p;
    contagemmenor = i;
    }
    if(*(p+i) < menor)
    {
    menor = *(p+i);
    contagemmenor = i;
    }
}


for(i=0;i<tam;i++)
{
if(contagemmaior == i && i<9)
    {
    SetConsoleTextAttribute(hConsole, 4);
    printf("Dia %i  | Temperatura: %.2f\n", i+1, *(p+i));
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
else if(contagemmaior == i && i>=9)
    {
    SetConsoleTextAttribute(hConsole, 4);
    printf("Dia %i | Temperatura: %.2f\n", i+1, *(p+i));
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
else if(contagemmenor == i && i<9)
    {
    SetConsoleTextAttribute(hConsole, 3);
    printf("Dia %i  | Temperatura: %.2f\n", i+1, *(p+i));
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
else if(contagemmenor == i  && i>=9)
    {
    SetConsoleTextAttribute(hConsole, 3);
    printf("Dia %i | Temperatura: %.2f\n", i+1, *(p+i));
    SetConsoleTextAttribute(hConsole, saved_attributes);
    }
else if(i < 9)
    printf("Dia %i  | Temperatura: %.2f\n", i+1, *(p+i));
else
    printf("Dia %i | Temperatura: %.2f\n", i+1, *(p+i));
}

}
*/


// Exercício 35 - Estruturas cadastro 10 pessoas
/*
struct aluno {
char nome[30];
int idade;
float nota;
}aluno;

struct aluno cadastro();

main()
{
struct aluno alu[10];
char op;
int cont=0, i;

do{
    system("cls");
    printf("\nCadastro de alunos");
    if(cont<10)
    {
        alu[cont]=cadastro(); //a função é baseada no struct aluno, a mesma da variável, então fica compatível sozinho
        cont++;
    }//if
    else
        printf("\nCadastro lotado");
    printf("\nDeseja continuar <S/N>: ");
    scanf("%c", &op);
    fflush(stdin);
  }while(op!='n' && op!='N');
for(i=0;i<cont;i++)
{
    printf("\n\nAluno %i\nNome: %s\nIdade: %i\nNota: %.2f", i+1, alu[i].nome, alu[i].idade, alu[i].nota);
}

printf("\n\n");
getch();
}

struct aluno cadastro()
{
struct aluno aux;
printf("\nNome: ");
gets(aux.nome);
fflush(stdin);
printf("\nIdade: ");
scanf("%i", &aux.idade);
fflush(stdin);
printf("\nNota: ");
scanf("%f", &aux.nota);
fflush(stdin);
return aux; //retorna uma estrutura
}
*/


// Exercício 36 - Alocar nomes e mostrar contagem normal e contagem de nomes com a letra que o usuario quiser
//bia = 4 espaços
//alice = 6 espaços
//alocação do ponteiro acumula = 10 espaços

/*
void maiuscula(char *p, int tam);
void aloca(char **p, int tam);
int busca_nome(char *p, char letra, char **pl);

main()
{
char *ptr=NULL, aux[20], op, letra, *ponteiroletra=NULL; //op continuar sim ou nao
int cont=0, tam=0, quantidadenome;


do{
    printf("\nNome: ");
    gets(aux);
    fflush(stdin);
    tam = tam + strlen(aux)+1; // +1 por conta do \0 que vamos usar, + tam pq acumula tudo em um ponteiro
    aloca(&ptr, tam);
    if(cont==0)
        strcpy(ptr, aux); //aux copiado para ptr
    else
    {
        strcat(ptr, "\n"); //no final de cada loop ele adiciona um \n
        strcat(ptr, aux); //depois ele adiciona o prox nome
    }
    cont++;
    printf("\nDeseja continuar <S/N> ");
    scanf("%c", &op);
    fflush(stdin);
}while(op!='n' && op!='N');
//
maiuscula(ptr, tam);
printf("\nTotal de nomes: %i\nNomes alocados: \n%s", cont, ptr);
printf("\nLetra a ser buscada: ");
scanf("%c", &letra);
fflush(stdin);
maiuscula(&letra,1);
quantidadenome=busca_nome(ptr, letra, &ponteiroletra);
if(quantidadenome!=0)
    printf("\nTivemos %i nomes alocados com a letra %c: \n%s", quantidadenome, letra, ponteiroletra);
else
    printf("\nNao tivemos nomes com a letra %c", letra);
printf("\n\n\n");
system("pause");
}

void aloca(char **p, int tam){
if((*p=(char*)realloc(*p,tam*sizeof(char)))==NULL)
    exit(1);
}

void maiuscula(char *p, int tam){
int i=0;
for(i=0;i<tam;i++)
    {
    if(*(p+i)>='a' && *(p+i)<='z')
    {
        *(p+i)-=32;
    }//if
}//for
}//func


int busca_nome(char *p, char letra, char **pl)
{
int i, cnome = 0, tam, cont = 0;

tam = strlen(p);

	for(i=0; i<tam; i++)
	{
		if(i == 0 && *(p+i) == letra || *(p+i) == '\n' && *(p+i+1) == letra)
		{
			cnome++;

			do{
				aloca(pl, cont+1);
				*(*pl+cont) = *(p+i);
				cont++;
				i++;

			  } while(*(p+i) != '\n' && *(p+i) != '\0');

			  i--; //para retornar ao /n
		}
	}
	return cnome;
}
*/


// Exercício 37 - Sistema de conta bancária com estruturas
//
/*
struct cliente{
    char nome[30];
    int conta;
    float saldo;
};

struct cliente cadastro(); //precisa ser depois da definição da struct
struct cliente deposito(struct cliente x);
struct cliente saque(struct cliente x, float saldo);

int main()
{
struct cliente cli[10]; //Vetor de 10 clientes criados
int op=0, cont=0, numreg=0, i=0, achou;
setlocale(LC_ALL, "portuguese");

do
{
    system("cls");
    printf("Sistema bancario\n\n[1]Cadastro\n[2]Deposito\n[3]Retirada\n[4]Encerrar programa\n");
    scanf("%i", &op);
    fflush(stdin);
    switch(op)
    {
        case 1:
            if(cont<10)
            {
                cli[cont]=cadastro();
                cont++;
            }
            else
            {
                printf("\nCadastro Lotado\n");
            }
            getch();
            break;
        case 2:
            printf("Digite o número da conta: ");
            scanf("%i", &numreg);
            fflush(stdin);
            achou = 0;

            for(i=0;i<cont;i++)
            {
                if(cli[i].conta == numreg)
                    {
                        cli[i]=deposito(cli[i]);
                        achou = 1;
                        break;
                    }
            }

            if(achou == 0)
            {
                printf("não foi achado o numero de registro");
            }
            getch();
            break;
        case 3:
            printf("Digite o número da conta: ");
            scanf("%i", &numreg);
            fflush(stdin);
            achou = 0;

            for(i=0;i<cont;i++)
            {
                if(cli[i].conta == numreg)
                    {
                        cli[i]=saque(cli[i], cli[i].saldo);
                        achou = 1;
                        break;
                    }
            }

            if(achou == 0)
            {
                printf("não foi achado o numero de registro");
            }
            getch();

        default:
            printf("erro");
            break;

    }
}while(op!=4);



getch();
}


struct cliente cadastro()
{
    struct cliente aux;
    static int n_conta=1000;

    printf("\nNome: ");
    gets(aux.nome);
    fflush(stdin);
    aux.conta=n_conta;
    aux.saldo=0;
    printf("Conta: %i\n", aux.conta);
    n_conta++;

    return aux;
};

struct cliente deposito(struct cliente x)
{
    float dinheiro;
    printf("Qual a quantidade do deposito?: R$");
    scanf("%f", &dinheiro);
    fflush(stdin);
    x.saldo=dinheiro;

    return x;
};


struct cliente saque(struct cliente x, float saldo)
{
float valorsaque;

printf("\nSaldo: %.2f\n", saldo);
printf("Digite o valor do saque: R$");
scanf("%f", &valorsaque);
if(valorsaque <= saldo)
{
    x.saldo -= valorsaque;
    printf("Saque efetuado com sucesso!");
}
else
{
    printf("Erro!, saldo insuficiente!");
}

return x;
};

*/


// Exercício 38 -  sistema de contas bancarias estrutura e operador novo (sem indice agora)
/*
struct cliente{
    char nome[30];
    int conta;
    float saldo;
};

void cadastro(struct cliente *p); //precisa ser depois da definição da struct
int busca(struct cliente *p, int tam);
void deposito(struct cliente *p);
void saque(struct cliente *p, float saldo);

int main()
{
struct cliente cli[10], *pcli; //Vetor de 10 clientes criados
int op=0, cont=0, numreg=0, i=0, tam, pos;
setlocale(LC_ALL, "portuguese");
pcli=cli;

do
{
    system("cls");
    printf("Sistema bancario\n\n[1]Cadastro\n[2]Deposito\n[3]Retirada\n[4]Encerrar programa\n");
    scanf("%i", &op);
    fflush(stdin);
    switch(op)
    {
        case 1:
            if(cont<10)
            {
                cadastro(pcli+cont);
                cont++;
            }
            else
            {
                printf("\nCadastro Lotado\n");
            }
            getch();
            break;
        case 2:
            pos=busca(pcli,cont);
            if(pos!=-1)
                deposito(pcli+cont);
            getch();
            break;
        case 3:
            pos=busca(pcli,cont);
            if(pos!=-1)
                saque(pcli+cont, (pcli+cont)->saldo);
            getch();
            break;
        default:
            printf("erro");
            break;

    }
}while(op!=4);



getch();
}


void cadastro(struct cliente *p)
{
    static int n_conta=1000; //essa variavel não some

    printf("\nNome: ");
    gets(p->nome);
    fflush(stdin);
    p->conta=n_conta;
    p->saldo=0;
    printf("Conta: %i\n", p->conta);
    n_conta++;
};

int busca(struct cliente *p, int tam)
{
            int i=0;
            printf("Digite o número da conta: ");
            scanf("%i", &tam);
            fflush(stdin);

            for(i=0;i<tam;i++)  //for(i=0;i<tam;i++,p++)
            {
                if((p+i)->conta == tam) //if(p->conta==numreg)
                    return i;
                else
                    return -1;
            }
            getch();
}

void deposito(struct cliente *p)
{
    float dinheiro;
    printf("Qual a quantidade do deposito?: R$");
    scanf("%f", &dinheiro);
    fflush(stdin);
    p->saldo+=dinheiro;
};


void saque(struct cliente *p, float saldo)
{
float valorsaque;

printf("\nSaldo: %.2f\n", saldo);
printf("Digite o valor do saque: R$");
scanf("%f", &valorsaque);
if(valorsaque <= saldo)
{
    p->saldo -= valorsaque;
    printf("Saque efetuado com sucesso!");
}
else
{
    printf("Erro!, saldo insuficiente!");
}
getch();
};
*/


// Exercício 39 - cadastro com estruturas ponteiros e alocação dinamica
/*
struct agenda{
    int reg;
    char nome[80];
    float nota;
};struct agenda;

void aloca(struct agenda **p, int tam);
void cadastro(struct agenda *p);
void mostra(struct agenda *p, int tam);

int main()
{
struct agenda *pag=NULL;
char op;
int cont=0;
do{
    system("cls");
    aloca(&pag, cont+1);
    cadastro(pag+cont);
    cont++;
    printf("\nDeseja continuar <S/N>: ");
    scanf("%c", &op);
    fflush(stdin);
}while(op!='n' && op!='N');
mostra(pag, cont);
getch();
}

void aloca(struct agenda **p, int tam)
{
    if((*p=(struct agenda*)realloc(*p, tam*sizeof(struct agenda)))==NULL)
        printf("erro!");
}

void cadastro(struct agenda *p)
{
    static int n=1;
    p->reg=++n;
    printf("\nRegistro: %i", p->reg);
    printf("\nNome: ");
    gets(p->nome);
    fflush(stdin);
    printf("Nota: ");
    scanf("%f", &(p->nota));
    fflush(stdin);
}

void mostra(struct agenda *p, int tam)
{
    int i;
    for(i=0;i<tam;i++,p++)
        printf("\nRegistro: %i\nNome: %s\nNota: %.2f\n", p->reg, p->nome, p->nota);
    printf("\n\n");
    system("pause");
}

*/


// Exercício 40 - FILE, manipulação de arquivo 1
// Estoque Parcial / Total "Cadastro"
/*
typedef struct dados{
    int reg;
    char produto[20];
    int qtde;
    float preco;
    }dados;

void aloca(dados **p, int tam);
int verifica();
void cadastro(dados *p, int qtde);
void grava(dados *p);
void mostra(dados *p, int qtde);

int main()
{
dados *pd=NULL;
char op;
int qtde;


aloca(&pd, 1);
qtde = verifica();
do{
    cadastro(pd,qtde+1);
    qtde++;
    printf("\nDeseja continuar <S/N>: ");
    scanf("%c", &op);
    fflush(stdin);
}while(op!='n' && op!='N');
mostra(pd, qtde);
getch();
}

void aloca(dados **p, int tam)
{
if((*p=(dados*)realloc(*p,tam*sizeof(dados)))==NULL)
    printf("erro!");
}

int verifica()
{
    FILE *fptr=NULL;
    long int cont=0;
    if((fptr=fopen("estoque.bin", "rb"))==NULL)
        return cont;
    else
    {
        fseek(fptr, 0, 2); //posiciona fptr no final do arquivo
        cont = ftell(fptr)/sizeof(dados);
        fclose(fptr); //dentro do else por conta do rb
    }
}

void cadastro(dados *p, int qtde)
{
p->reg=qtde;
printf("\nRegistro: %i", p->reg);
printf("\nProduto: ");
gets(p->produto);
fflush(stdin);
printf("\nQtde: ");
scanf("%i", &(p->qtde));
fflush(stdin);
printf("\nPreco: ");
scanf("%f", &(p->preco));
fflush(stdin);
grava(p);
}

void grava(dados *p)
{
FILE *fptr=NULL;
if((fptr=fopen("estoque.bin", "ab"))==NULL)
    printf("\nErro ao abrir o arquivo");
else
    fwrite(p, sizeof(dados),1, fptr);
fclose(fptr); //fora do else por conta do ab
}


void mostra(dados *p, int qtde)
{
    int i;
    FILE *fptr=NULL;
    if((fptr=fopen("estoque.bin", "rb"))==NULL)
        printf("\nerro ao abrir o arquivo");
    else
    {
        for(i=0;i<qtde;i++)
        {
        fseek(fptr, i*sizeof(dados), 0);
        fread(p, sizeof(dados),1,fptr);
        printf("\nRegistro: %i\nProduto: %s\nQtde: %i\nPreco: %.2f\n", p->reg, p->produto, p->qtde, p->preco);
        }
        fclose(fptr); //dentro do else por conta do rb
    }
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/


// Exercício
/*
int main()
{

getch();
}
*/






