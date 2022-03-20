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
int i=1, grau=3, situacao;
float A, B, M, ERRO, fA, fB, fM, guardaResultado, K, aux;
char fAfM, fBfM, controle;

//Receber o grau da função entre 2 a 6
do
{
printf("Metódo da dicotomia em C");
printf("\n\nInforme o grau da função (2 a 6): ");
scanf("%i", &grau);
fflush(stdin);
if(grau < 1.99 || grau > 6.01)
    system("cls");
}while(grau < 1.99 || grau > 6.01);

// ALOCAÇÃO PONTEIRO
multi = (float*)malloc(grau * sizeof(float));

for(i=grau; i>=0; i--)
{
    if(i==grau)
        printf("\nInforme o fator multiplicador de x^%i: ", i);
    else
        printf("Informe o fator multiplicador de x^%i: ", i);
    scanf("%f", multi+i);
    fflush(stdin);
}

//Exibindo a função recebida
system("cls");
printf("f(x): ");
for(i=grau; i>=0; i--)
{
    if(i==0)
        printf("%.2f = 0", *(multi+i));
    else
        printf("%.2fx^%i + ", *(multi+i), i);
}

// RECEBE O INTERVALO
do
{
    do
    {
    printf("\n\nInforme o intervalo: \nA (MENOR VALOR) = ");
    scanf("%f", &A);
    fflush(stdin);
    printf("B (MAIOR VALOR) = ");
    scanf("%f", &B);
    fflush(stdin);
    if(B==A)
        printf("\n\aOs valores de A e B não podem ser iguais!\n");
    }while(!(B!=A));

    // VERIFICAR VALIDADE DO INTERVALO
    if(B<A)
    {
        aux = B;
        B = A;
        A = aux;
        printf("\nMenor valor foi armazenado em B, as variáveis A e B serão invertidas automaticamente.\n");
    }

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
        do
        {
        printf("\nDeseja digitar outro intervalo? <S/N>\n");
        scanf("%c", &controle);
        fflush(stdin);
        }while(!(controle == 'S' || controle == 'N'));
        if(controle == 'N')
        {
            printf("Encerrando programa\n\n");
            system("pause");
            return 0;
        }
        else
        {
            system("cls");
            printf("FUNÇÃO: ");
            for(i=grau; i>=0; i--)
            {
                if(i==0)
                    printf("%.2f = 0", *(multi+i));
                else
                    printf("%.2fx^%i + ", *(multi+i), i);
            }

        }
    }
    else
    {
        printf("\nExiste um zero na função informada dentro do intervalo [%.2f, %.2f]\n", A, B );
        printf("Continuando operações...\n");
    }
}while(guardaResultado > 0);



// ERRO
printf("\nInforme o erro do problema: ");
scanf("%f", &ERRO);
fflush(stdin);

// CALCULAR K
K = CalculaValorK(A, B, ERRO);
printf("\nK = %.2f (Quantas iterações serão necessárias para achar o zero da função)\n", K);

// CABEÇALHO TABELA
system("cls");
printf("f(x): ");
for(i=grau; i>=0; i--)
{
    if(i==0)
        printf("%.2f = 0", *(multi+i));
    else
        printf("%.2fx^%i + ", *(multi+i), i);
}
printf("\n\nIntervalo [%.3f, %3.f]\nK = %.f\nErro = %.8f", A, B, K, ERRO);
ImprimirCabecalhoTabela();

// ITERAÇÃO PRINCIPAL
i = 1;
M = (A + B) / 2;
while(i <= K)
{
    M = (A + B) / 2;
    fA = funcaoX(grau, A, 'a');
    fB = funcaoX(grau, B, 'b');
    fM = funcaoX(grau, M, 'm');

    if(fA * fM < 0)
        {
            fAfM = '-';
            fBfM = '+';
            situacao = 1;
        }
    else
        {
            fBfM = '-';
            fAfM = '+';
            situacao = 2;
        }

    ImprimirTabela(i, A, B, M, fA, fB, fM, fAfM, fBfM);

    if(situacao==1)
    {
        B = M;
    }
    else if(situacao==2)
    {
        A = M;
    }

    i++;
}

printf("\nFim do metódo de dicotomia\n\nA raiz encontrada foi encontrada dentro do intervalo [%.3f | %.3f]\nSeu valor final foi: %.3f\n\n", A, B, M);
system("pause");
}


float funcaoX(int grau, float x, char funcaode){
int i;
float resultado;
resultado = 0;
for(i=grau; i>=0; i--)                                                   // 2x^2 - 3
    {                                                                    // multi[2]  = 2 | x = 2 | i = 2         |   multi[1]  = 0 | x = 2 | i = 1  | multi[0] = -3 | x = 2 | i = 0
        resultado = resultado + *(multi+i)*pow(x, i);                      // resultado = resultado + 2*2^2 = 8     |   resultado = 8 + 0*2^1 = 8      | multi[0] = 8 + -3*2^0 = 5
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
    printf("\n\n\t\t\t     TABELA ITERAÇÕES\n\n");
    printf("I \t|  a\t|  b\t|  m\t|  f(a)\t|  f(b)\t|  f(m)\t| fa*fm\t| fm*fb\t|\n");
    printf("--+-----+-------+-------+-------+-------+-------+-------+-------+\n");
}

void ImprimirTabela(int iteracao, float a, float b, float m, float fA, float fB, float fM, char fAfM, char fMfB)
{
    printf("%i \t|%.3f\t|%.3f\t|%.3f\t|%.3f\t|%.3f\t|%.3f\t|%c\t|%c\t|\n", iteracao, a, b, m, fA, fB, fM, fAfM, fMfB);
}


