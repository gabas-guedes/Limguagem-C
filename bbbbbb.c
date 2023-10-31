#include <stdio.h>

int main()
{
    int vetor1[10], vetor2[10];
    int i;

    printf("Digite os elementos do vetor 1: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            vetor2[i] = vetor1[i] * 3;
        }
        else if (i % 2 == 0)
        {
            vetor2[i] = vetor1[i] / 2;
        }
    }

    printf("Vetor 1: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor 2: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor2[i]);
    }

    printf("\n");

    return 0;
}