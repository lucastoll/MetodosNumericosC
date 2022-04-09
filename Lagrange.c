/*
Lucas Fernandes Tolotto              RA 211046
Kauan da Silva Vieira                RA 211018
Matheus Parizotto Martins            RA 211067

Programa que aplica o metodo de Lagrange
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    int pontos, n, grau, cont, i, j;
    float Px, valorCalcular, Li;
    char resp;

    //Usando Vetores
    float *valoresX = NULL;
    float *valoresFX = NULL;

    printf("Digite o grau da funcao que deseja obter: ");
    scanf("%i", &grau);

	//Obtendo o número de pontos a partir do grau indicado
    pontos = grau + 1;

    //Alocação do tamanho solicitado
    valoresX = (float*)malloc(grau * sizeof(float));  // TALVEZ MUDAR
    valoresFX = (float*)malloc(grau * sizeof(float)); // TALVEZ MUDAR


    printf("\nPara obter uma função de %i° grau você deve informar %i para x e %i valores para f(x)\n", grau, pontos, pontos);
    system("pause");
    for(cont=0; cont<pontos; cont++)
    {
        system("cls");
        printf("Função de %i° grau | Coluna %i\n\n", grau, cont+1);
        printf("\nDigite o valor do número %i de x: ", cont+1);
        scanf("%f", valoresX+cont);
        printf("\nDigite o valor do número %i de f(x): ", cont+1);
        scanf("%f", valoresFX+cont);


        printf("\n-------------------------Tabela atual-------------------------\n");
        printf("\nX   : ");
        for(i=0; i<=cont; i++)
        {
            printf("%.2f\t", *(valoresX+i));
        }
        printf("\nf(X): ");
        for(i=0; i<=cont; i++)
        {
            printf("%.2f\t", *(valoresX+i));
        }
        getch();
    }

    do
    {
        printf("\nDigite o valor que deseja calcular: "); // QUE, valor final que entra na sua função descoberta.
        scanf("%f", &valorCalcular);
/*
        Px = 0;
        //Implementar o calculo do Teorema de Lagrange
        for(i.....
        {
            //Acessando os valores do ponteiro
            //*(valoresX+i)

            for(j...)
            {
				//Acessando os valores do ponteiro
                //*(valoresX+j)

            }

            //Calculo final do Px
            Px = ....
        }
*/

        fflush(stdin);
        printf("Deseja calcular outro valor (s/n)? ");
        scanf("%c", &resp);
    }while (resp == 's' || resp == 'S');

    //Liberando a memória
    //free(valoresX);
    //free(valoresFX);

    system("pause");
}
