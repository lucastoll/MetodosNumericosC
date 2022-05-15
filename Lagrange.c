/*
Lucas Fernandes Tolotto              RA 211046
Kauan da Silva Vieira                RA 211018
Matheus Parizotto Martins            RA 211067

Programa que aplica o metodo de Lagrange, ele não mostra a equação a partir dos dados da tabela, só descobre o valor de outro ponto na tabela a partir da tabela.

Exemplo feito em aula validado no programa:
-1 0 2
 4 1 -1

f(1,75) = -1.04166
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void ImprimirTabela(int colunas, float *valoresX, float *valoresFX);


int main()
{
    setlocale(LC_ALL, "portuguese");
    int pontos, n, grau, cont, i, j;
    float Px, valorCalcular, Li;
    char resp;

    //Usando Vetores
    float *valoresX = NULL;
    float *valoresFX = NULL;
    do
    {
        printf("Digite o grau da funcao que deseja obter: ");
        scanf("%i", &grau);
        fflush(stdin);
        if(grau<1)
            printf("\nA função deve ser no minimo de grau 1.\n");
    }while(grau<1);
	//Obtendo o número de pontos a partir do grau indicado
    pontos = grau + 1;

    //Alocação do tamanho solicitado
    valoresX = (float*)malloc(grau * sizeof(float));  // TALVEZ MUDAR
    valoresFX = (float*)malloc(grau * sizeof(float)); // TALVEZ MUDAR


    printf("\nPara obter uma função de %i° grau você deve informar %i para x e %i valores para f(x)\n", grau, pontos, pontos);
    system("pause");
    system("cls");
    for(cont=0; cont<pontos; cont++)
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
    do
    {
        printf("\n\nDigite o valor que deseja calcular: ");
        scanf("%f", &valorCalcular);
        fflush(stdin);
        Px = 0;
        //Implementar o calculo do Teorema de Lagrange
        for(i=0;i<=grau;i++)
        {
            Li = 1;
            for(j=0;j<=grau;j++)
            {
                if(i!=j)
                {
                    Li = Li * ((valorCalcular - *(valoresX+j)) / (*(valoresX+i)-*(valoresX+j)));
                    printf("\nli = %f\n", Li);
                }
            }
            Px += (Li * *(valoresFX+i));
            fflush(stdin);
        }
        printf("\nValor final Px(%.2f) = %f", valorCalcular, Px);
        printf("\n\nDeseja calcular outro valor (s/n)? ");
        scanf("%c", &resp);
        fflush(stdin);
    }while (resp == 's' || resp == 'S');


    free(valoresX);
    free(valoresFX);
    system("pause");
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
