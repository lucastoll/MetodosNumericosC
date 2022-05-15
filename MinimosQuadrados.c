/*
Lucas Fernandes Tolotto              RA 211046
Kauan da Silva Vieira                RA 211018
Matheus Parizotto Martins            RA 211067

Programa que aplica o método dos mínimos quadrados e o método da eliminação de gauss

o programa recebe pontos em x e f(x), constroe um sistema escalonado através dos mínimos quadrados e resolve com a eliminação de gauss, dessa maneira, obtendo 3 raízes.

Exemplo feito em aula validado no programa:
X    -1 0 1 2
f(x)  0 1 0 7

A0 = -8/5
A1 = 1/5
A2 = 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void aloca(float **p, int tam);
void ImprimirTabela(int colunas, float *valoresX, float *valoresFX);
void ImprimirSistemaLinear(int grau, float *sistemaLinearX, float *sistemaLinearFX);


int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, grau, i, j, cont, fim=0, iteracao;
    float pivo=0, multiplicador21=0, multiplicador31=0, a2=0, a1=0, a0=0;


    //Usando Vetores
    float *valoresX = NULL;
    float *valoresFX = NULL;
    float *sistemaLinearX = NULL;
    float *sistemaLinearFX = NULL;


    printf("Metódo dos mínimos quadrados e metódo eliminação de gauss.\n\n");
    do
    {
        printf("\nDigite o grau da funcao que deseja obter (1 ou 2): ");
        scanf("%i", &grau);
        fflush(stdin);
        if(grau<1)
            printf("\nA função deve ser no minimo de grau 1.\n");
        else if(grau>2)
            printf("\nA função deve ser no máximo de grau 2.\n");
    }while(!((grau==1) || (grau == 2)));

    printf("\nDigite o número de valores: ");
    scanf("%i", &n);
    fflush(stdin);

    //Alocação do tamanho solicitado
    aloca(&valoresX, n);
    aloca(&valoresFX, n);


    system("pause");
    system("cls");
    for(cont=0; cont<n; cont++)
    {
        printf("Função de %i° grau | Coluna %i\n\n", grau, cont+1);
        printf("\nDigite o valor do número %i de x: ", cont+1);
        scanf("%f", valoresX+cont);
        fflush(stdin);
        printf("\nDigite o valor do número %i de f(x): ", cont+1);
        scanf("%f", valoresFX+cont);
        fflush(stdin);


        ImprimirTabela(cont, valoresX, valoresFX);
        getch();
        system("cls");
    }
    ImprimirTabela(cont-1, valoresX, valoresFX);

    if(grau==2){
        aloca(&sistemaLinearX, 9);
        aloca(&sistemaLinearFX, 3);

        //prevenção tirar lixo da memória
        for(i=0;i<9;i++){
            *(sistemaLinearX+i) = 0;
        }

        for(i=0;i<3;i++){
            *(sistemaLinearFX+i) = 0;
        }
        //formula minimos quadrados parabola.
        for(i=0;i<n;i++){
            *(sistemaLinearX+0) += 1;
            *(sistemaLinearX+1) += *(valoresX+i);
            *(sistemaLinearX+2) += pow(*(valoresX+i),2);
            *(sistemaLinearX+3) += *(valoresX+i);
            *(sistemaLinearX+4) += pow(*(valoresX+i),2);
            *(sistemaLinearX+5) += pow(*(valoresX+i),3);
            *(sistemaLinearX+6) += pow(*(valoresX+i),2);
            *(sistemaLinearX+7) += pow(*(valoresX+i),3);
            *(sistemaLinearX+8) += pow(*(valoresX+i),4);
            //fX ou y
            *(sistemaLinearFX+0) += *(valoresFX+i);
            *(sistemaLinearFX+1) += (*(valoresFX+i) * *(valoresX+i));
            *(sistemaLinearFX+2) += (*(valoresFX+i) * pow(*(valoresX+i),2));
        }

        iteracao=1;
        printf("\n\nSistema linear inicial\n");
        ImprimirSistemaLinear(2, sistemaLinearX, sistemaLinearFX);

        do{
        //definição pivo e multiplicador
        if(iteracao==1)
        {
            pivo = *(sistemaLinearX+0);
            multiplicador21 = *(sistemaLinearX+3) / pivo;
            multiplicador31 = *(sistemaLinearX+6) / pivo;
        }
        else if(iteracao==2)
        {
            pivo = *(sistemaLinearX+4);
            multiplicador21 = *(sistemaLinearX+4) / pivo;
            multiplicador31 = *(sistemaLinearX+7) / pivo;
        }
        else
        {
            pivo = *(sistemaLinearX+8);
            multiplicador21 = *(sistemaLinearX+5) / pivo;
            multiplicador31 = *(sistemaLinearX+8) / pivo;
        }

        //definição linha a ser alterada

        if(*(sistemaLinearX+3) != 0){
            printf("\nIteração = %i | Pivo = %f | Multiplicador = %f\n", iteracao, pivo, multiplicador21);

            for(i=0;i<n;i++){
                if(i!=n-1)
                {
                    if(iteracao==1)
                        *(sistemaLinearX+(i+3)) = (*(sistemaLinearX+(i+3)) - (*(sistemaLinearX+i) * multiplicador21));
                    else if(iteracao==2)
                        *(sistemaLinearX+(i+3)) = (*(sistemaLinearX+(i+3)) - (*(sistemaLinearX+(i+3)) * multiplicador21));
                    else
                        *(sistemaLinearX+(i+3)) = (*(sistemaLinearX+(i+3)) - (*(sistemaLinearX+(i+6)) * multiplicador21));
                }
                else
                {
                    if(iteracao==1)
                        *(sistemaLinearFX+1) = (*(sistemaLinearFX+1) - (*(sistemaLinearFX+0) * multiplicador21));
                    else if(iteracao==2)
                        *(sistemaLinearFX+1) = (*(sistemaLinearFX+1) - (*(sistemaLinearFX+1) * multiplicador21));
                    else
                       *(sistemaLinearFX+1) = (*(sistemaLinearFX+1) - (*(sistemaLinearFX+2) * multiplicador21));
                }
            }
            ImprimirSistemaLinear(2, sistemaLinearX, sistemaLinearFX);
        }
        //alterar linha 3
        if((*(sistemaLinearX+6) != 0) || (*(sistemaLinearX+7) != 0))
        {
            printf("\nIteração = %i | Pivo = %f | Multiplicador = %f\n", iteracao, pivo, multiplicador31);
            for(i=0;i<n;i++){
                if(i!=n-1)
                {
                    if(iteracao==1)
                        *(sistemaLinearX+(i+6)) = (*(sistemaLinearX+(i+6)) - (*(sistemaLinearX+i) * multiplicador31));
                    else if(iteracao==2)
                        *(sistemaLinearX+(i+6)) = (*(sistemaLinearX+(i+6)) - (*(sistemaLinearX+(i+3)) * multiplicador31));
                    else
                        *(sistemaLinearX+(i+6)) = (*(sistemaLinearX+(i+6)) - (*(sistemaLinearX+(i+6)) * multiplicador31));
                }
                else
                {
                    if(iteracao==1)
                        *(sistemaLinearFX+2) = (*(sistemaLinearFX+2) - (*(sistemaLinearFX+0) * multiplicador31));
                    else if(iteracao==2)
                        *(sistemaLinearFX+2) = (*(sistemaLinearFX+2) - (*(sistemaLinearFX+1) * multiplicador31));
                    else
                       *(sistemaLinearFX+2) = (*(sistemaLinearFX+2) - (*(sistemaLinearFX+2) * multiplicador31));
                }
            }
            ImprimirSistemaLinear(2, sistemaLinearX, sistemaLinearFX);
        }
        else if(*(sistemaLinearX+3) ==0 && *(sistemaLinearX+6) ==0 && *(sistemaLinearX+7) ==0 )
        {
            fim=1;
            a2 = *(sistemaLinearFX+2) / *(sistemaLinearX+8);
            a1 = ((*(sistemaLinearFX+1) - (*(sistemaLinearX+5) * a2)) / *(sistemaLinearX+4));
            a0 = (*(sistemaLinearFX+0) - (*(sistemaLinearX+1)*a1 + *(sistemaLinearX+2)*a2)) / *(sistemaLinearX+0);
            printf("\nAs raizes obtidas foram %fx^2 %fx %f\n", a2, a1, a0);
        }


        iteracao++;
        }while(fim==0);

    }
    else // grau 1
    {
        aloca(&sistemaLinearX, 4);
        aloca(&sistemaLinearFX, 2);
        //prevenção tirar lixo da memória
        for(i=0;i<4;i++){
            *(sistemaLinearX+i) = 0;
        }

        for(i=0;i<2;i++){
            *(sistemaLinearFX+i) = 0;
        }
        //formula minimos quadrados parabola.
        for(i=0;i<n;i++){
            *(sistemaLinearX+0) += 1;
            *(sistemaLinearX+1) += *(valoresX+i);
            *(sistemaLinearX+2) += *(valoresX+i);
            *(sistemaLinearX+3) += pow(*(valoresX+i),2);
            //fX ou y
            *(sistemaLinearFX+0) += *(valoresFX+i);
            *(sistemaLinearFX+1) += (*(valoresFX+i) * *(valoresX+i));
        }
        ImprimirSistemaLinear(1, sistemaLinearX, sistemaLinearFX);
        iteracao=0;

        pivo = *(sistemaLinearX+0);
        multiplicador21 = *(sistemaLinearX+2) / pivo;
        printf("\nPivo = %f | Multiplicador = %f\n", pivo, multiplicador21);
        if(*(sistemaLinearX+2) != 0)
        {
            *(sistemaLinearX+2) = (*(sistemaLinearX+2)) - (*(sistemaLinearX+0) * multiplicador21);
            *(sistemaLinearX+3) = (*(sistemaLinearX+3)) - (*(sistemaLinearX+1) * multiplicador21);
            *(sistemaLinearFX+1) = (*(sistemaLinearFX+1) - (*(sistemaLinearFX+0) * multiplicador21));
            ImprimirSistemaLinear(1, sistemaLinearX, sistemaLinearFX);
        }
        a2 = *(sistemaLinearFX+1) / *(sistemaLinearX+3);
        a1 = ((*(sistemaLinearFX+0) - (*(sistemaLinearX+1) * a2)) / *(sistemaLinearX+0));
        printf("\nAs raizes obtidas foram %f %f\n", a2, a1);
    }
    printf("\n");
    system("pause");
}//main

void aloca(float **p, int tam)
{
    if((*p=(float*)realloc(*p, tam*sizeof(int)))==NULL)
        exit(1);
}


void ImprimirTabela(int colunas, float *valoresX, float *valoresFX)
{
    int i = 0;

    printf("\n-------------------------Tabela atual-------------------------\n");
    printf("\nX   : ");
    for(i=0; i<=colunas; i++)
    {
        printf("\t%.2f", *(valoresX+i));
    }
    printf("\t\nf(X): ");
    for(i=0; i<=colunas; i++)
    {
        printf("\t%.2f", *(valoresFX+i));
    }
}

void ImprimirSistemaLinear(int grau, float *sistemaLinearX, float *sistemaLinearFX){
    if(grau==2){
        printf("\n(%.2f %.2f %.2f) x a0 = %.2f\n(%.2f %.2f %.2f) x a1 = %.2f\n(%.2f %.2f %.2f) x a2 = %.2f\n",
               *(sistemaLinearX+0), *(sistemaLinearX+1), *(sistemaLinearX+2), *(sistemaLinearFX+0),
               *(sistemaLinearX+3), *(sistemaLinearX+4), *(sistemaLinearX+5), *(sistemaLinearFX+1),
               *(sistemaLinearX+6), *(sistemaLinearX+7), *(sistemaLinearX+8), *(sistemaLinearFX+2));
    }
    else{
         printf("\n\nSistema linear\n\n(%.2f %.2f) x a0 = %.2f\n(%.2f %.2f) x a1 = %.2f\n",
               *(sistemaLinearX+0), *(sistemaLinearX+1), *(sistemaLinearFX+0),
               *(sistemaLinearX+2), *(sistemaLinearX+3), *(sistemaLinearFX+1));
    }
}
