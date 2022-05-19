/*
Lucas Fernandes Tolotto              RA 211046
Kauan da Silva Vieira                RA 211018
Matheus Parizotto Martins            RA 211067

Programa que resolve integrais através da regra dos trapezios, recebe um polinômio, um limite superior e inferior, aplica a regra dos trapézios repetidas e descobre um valor APROXIMADO a resposta da integral.

Exemplo:

Integral de x^2 limites de 1 a 4 = 21. (Calculo na mão)

grau: 2
fator x^0 = 0
fator x^1 = 0
fator x^2 = 1;
limite inferior = 1
limite superior = 4;
subintervalos = 10000;

Valor da integral obtido = 20,995226 (No programa)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Protótipo das funções
void aloca(float **p, int tam); //alocação dinamica
float calculaFuncao(float valor, int grau); //calculo da função em um determinado ponto

float *multi = NULL;

int main()
{
    setlocale(LC_ALL, "portuguese");
    float limiteSuperior, limiteInferior, h, integral=0;
    int i, grau, n;
    //Receber grau da função
    do
    {
    printf("Metódo da regra dos trapezios repetida em C");
    printf("\nInforme o grau da função da integral (2 a 10): ");
    scanf("%i", &grau);
    fflush(stdin);
    if(grau < 1.99 || grau > 10.01)
        system("cls");
    }while(grau < 1.99 || grau > 10.01);
    aloca(&multi, grau);
    //Receber fatores multiplicadores da função
    for(i=0; i<=grau; i++)
    {
        printf("Informe o fator multiplicador de x^%i: ", i);
        scanf("%f", multi+i);
    }

    printf("\nA função recebida foi: ");
    for(i=0; i<=grau; i++)
    {
        printf("%.2fx^%i", *(multi+i), i);
        if(i<grau)
            printf(" + ");
        else
            printf(" = 0");
    }
    //Receber limite inferior, superior e numero de subintervalos, calcular H//
    printf("\nDigite o limite inferior da integral: ");
    scanf("%f", &limiteInferior);
    printf("Digite o limite superior da integral: ");
    scanf("%f", &limiteSuperior);
    printf("Digite o valor de subintervalos (Recomenda-se usar valor um alto): ");
    scanf("%i", &n);
    h = (limiteSuperior-limiteInferior)/n;
    //Calculo da integral através do metodo da regra dos trapezios repetida.
    printf("\n\nCalculando integral de %.2f a %.2f da função informada com %i subintervalos.", limiteInferior, limiteSuperior, n);
    integral += calculaFuncao(limiteInferior, grau);
    for(i=1;i<n-1;i++){
        integral += 2*calculaFuncao(limiteInferior+(i*h), grau);
    }
    integral += calculaFuncao(limiteSuperior, grau);
    integral = integral * h/2;
    printf("\nValor aproximado da integral: %f\n", integral);
    system("pause");
}


void aloca(float **p, int tam)
{
    if((*p=(float*)realloc(*p, tam*sizeof(int)))==NULL)
        exit(1);
}

float calculaFuncao(float valor, int grau)
{
    int i;
    float resultado;
    resultado = 0;

    for(i=0; i<=grau; i++)
    {
        resultado = resultado + *(multi+i)*pow(valor, i);
    }

    return resultado;
}



