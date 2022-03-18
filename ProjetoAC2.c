/*
Lucas Fernandes Tolotto              RA 211046
Kauan da Silva Vieira                RA 211018
Matheus Parizotto Martins            RA 211067
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float funcaoX(int grau, float x, char funcaode);
float CalculaValorK(float a, float b, float erro);
void ImprimirCabecalhoTabela();
void ImprimirTabela(int iteracao, float a, float b, float m, float fA, float fB, float fM, char fAfM, char fMfB);

float *multi = NULL; //Indice 0 a 6

int main (){
setlocale(LC_ALL, "portuguese");
int i=1, grau;
float A, B, M, ERRO, fA, fB, fM, guardaResultado, K;
char fAfM, fBfM;

//Receber o grau da função entre 2 a 6
printf("BEM VINDO a dicotomia radiotiva em C");
printf("\n\nInforme o grau da função (2 a 6): ");
scanf("%i", &grau);

multi = (float*)malloc(grau * sizeof(float));

for(i=grau; i>=0; i--)
{
    if(i==grau)
        printf("\nInforme o fator multiplicador de x^%i: ", i);
    else
    printf("Informe o fator multiplicador de x^%i: ", i);
    scanf("%f", multi+i);
}

//Exibindo a função recebida
printf("\nA funcao recebida foi: ");
for(i=grau; i>=0; i--)
{
    if(i==0)
        printf("%.2f = 0", *(multi+i));
    else
        printf("%.2fx^%i + ", *(multi+i), i);
}

// RECEBE O INTERVALO
printf("\n\nInforme o intervalo: \nA = ");
scanf("%f", &A);
fflush(stdin);
printf("B = ");
scanf("%f", &B);
fflush(stdin);

// F(A) * F(B) < 0 ?? INFORMAR OUTRO INTERVALO OU SAIR
printf("\nVerificando se existe um 0 na função dentro do intervalo informado [f(a) * f(b) < 0] \n\n");

fA = funcaoX(grau, A, 'a');
fB = funcaoX(grau, B, 'b');
guardaResultado = fA * fB;

printf("\nf(%.2f) * f(%.2f) < 0 ??", A, B);
printf("\n%.2f * %.2f = %.2f\n", fA, fB, guardaResultado);

if(guardaResultado > 0)
{
    printf("\nNão existe um zero na função informada dentro do intervalo [%.2f, %.2f]\n", A, B);
    printf("Encerrando programa\n\n");
    system("pause");
    return 0;
}
else
{
    printf("\nExiste um zero na função informada dentro do intervalo [%.2f, %.2f]\n", A, B );
    printf("Continuando operações...\n");
}
// ERRO
printf("\nInforme o erro do problema: ");
scanf("%f", &ERRO);
fflush(stdin);

// CALCULAR K
K = CalculaValorK(A, B, ERRO);
printf("\nK = %.2f (Quantas iterações serão necessárias para achar o zero da função)\n", K);

// CABEÇALHO TABELA
ImprimirCabecalhoTabela();

// ITERAÇÃO PRINCIPAL
i = 1;
while(i <= K)
{
    fA = funcaoX(grau, A, 'a');
    fB = funcaoX(grau, B, 'b');
    M = (A + B) / 2;
    fM = funcaoX(grau, M, 'm');

    if(fA * fM < 0)
        {
            fAfM = '-';
            B = M;
        }
    else
        fAfM = '+';

    if(fB * fM < 0)
        {
            fBfM = '-';
            A = M;
        }

    ImprimirTabela(i, A, B, M, fA, fB, fM, fAfM, fBfM);
    i++;
}




system("pause");
}


float funcaoX(int grau, float x, char funcaode){
int i;
float resultado;
resultado = 0;
for(i=grau; i>=0; i--)                                                   // 2x^2 - 3
    {                                                                    // multi[2]  = 2 | x = 2 | i = 2         |   multi[1]  = 0 | x = 2 | i = 1  | multi[0] = -3 | x = 2 | i = 0
        resultado = resultado + multi[i]*pow(x, i);                      // resultado = resultado + 2*2^2 = 8     |   resultado = 8 + 0*2^1 = 8      | multi[0] = 8 + -3*2^0 = 5
    }
    //printf("f(%c) = %.2f\n", funcaode, resultado);
    return resultado;
}

float CalculaValorK(float a, float b, float erro)
{
    float fValorK;
    fValorK = (log10(b-a) - log10(erro))/(log10(2));
    //printf("\n\nfValorK = %.2f", fValorK);


    return ceil(fValorK);
}

void ImprimirCabecalhoTabela()
{
    printf("\n\n\t\t\tTABELA ITERAÇÕES\n\n");
    printf("I |  a\t|  b\t|  m\t|  f(a)\t|  f(b)\t|  f(m)\t| fa*fm\t| fm*fb\t|\n");
    printf("--+-----+-------+-------+-------+-------+-------+-------+-------+\n");
}

void ImprimirTabela(int iteracao, float a, float b, float m, float fA, float fB, float fM, char fAfM, char fMfB)
{
    printf("%i |%.2f|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%c\t|%c\t|\n", iteracao, a, b, m, fA, fB, fM, fAfM, fMfB);

}

/*
// CALCULA PONTO MEDIO
M = (A + B) / 2;
printf("\nIntervalo [%.2f, %.2f]\nMédia = %.2f", A, B, M);

// ERRO
printf("Informe o erro do problema: ");
scanf("%f", &ERRO);
fflush(stdin);

funcaoX(10000);

printf("\n\n");
system("pause");
*/
