/*
Lucas Fernandes Tolotto              RA 211046
Kauan da Silva Vieira                RA 211018
Matheus Parizotto Martins            RA 211067
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float funcaoX(float x);

float *multi = NULL; //Indice 0 a 6

int main (){
setlocale(LC_ALL, "portuguese");
int i, grau;
float A, B, M, ERRO;

//Receber o grau da função entre 2 a 6
printf("Informe o grau da função (2 a 6): ");
scanf("%i", &grau);

multi = (float*)malloc(grau * sizeof(float));

for(i=grau; i>=0; i--)
{
    printf("Informe o fator multiplicador de x^%i: ", i);
    scanf("%f", multi+i);
}

//Exibindo a função recebida
printf("A funcao recebida foi: ");
for(i=grau; i>=0; i--)
{
    if(i==0)
        printf("%.2f = 0", *(multi+i));
    else
        printf("%.2fx^%i + ", *(multi+i), i);
}

// RECEBE O INTERVALO
printf("\n\nInforme o intervalo: \nA - ");
scanf("%f", &A);
fflush(stdin);
printf("B - ");
scanf("%f", &B);
fflush(stdin);

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

system("pause");
}


float funcaoX(float x){
printf("porra %.2f", x);
}
