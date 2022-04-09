#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p = NULL;
    int tamanho = 3;
    int i;
    printf("Quantidade: ");
    scanf("%i", &tamanho);

    p = (float *)malloc(tamanho * sizeof(float));
    printf("Endereco P: %x\n", p);
    for(i=0; i<tamanho; i++)
    {
        scanf("%f", p+i);
    }

    for(i=0; i<tamanho; i++)
    {
        printf("%f\n", *(p+i));
    }

    free(p);
    return 0;
}
