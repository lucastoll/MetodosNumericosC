#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Dicas:
    Potência: pow(base, expoente)
*/


//Protótipo das funções
float f(float valor);

int grau;
float multi[7]; //Indice 0 a 6

main()
{
    int i;
	//Receber o grau da função entre 2 a 10
    printf("Informe o grau da funcao (2 a 10): ");
    scanf("%i", &grau);

	//Receber os multiplicadores. Dica: Armazenar os valores em um vetor.
	//aX^0 + bX^1 + cX^2 --->Indice do vetor igual ao expoente
    for(i=0; i<=grau; i++)
    {
        printf("Informe o fator multiplicador de x^%i: ", i);
        scanf("%f", &multi[i]);
    }

    //Exibindo a função recebida
    printf("A funcao recebida foi: ");
    for(i=0; i<=grau; i++)
    {
        printf("%.2fx^%i", multi[i], i);
        if(i<grau)
            printf(" + ");
        else
            printf(" = 0");
    }

    //AQUI
    //-----------------------INICIO-----------------------

    //Implementar o Algoritmo da Regra dos Trapézios Repetida
    //Criar as variáveis necessárias
    //Utilizar ponteiros

    //------------------------FIM-------------------------

    system("pause");
}


//Funcao que realiza o calculo em em determinado ponto
float f(float valor)
{
    int i;
    float resultado;
    resultado = 0;

    for(i=0; i<=grau; i++)
    {
        resultado = resultado + multi[i]*pow(valor, i);
    }

    return resultado;
}

