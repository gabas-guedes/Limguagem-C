#include <stdio.h>

int main()
{
    int vetor[20];
    int an, sn;
    int i;
    int primeironumero;
    int r;
    int n = 20;
    printf("insira os numeros do vetor :");

    for (i = 0; i < 20; i++)
    {

        scanf("%d", &vetor[i]);
    }

    primeironumero = vetor[0];
    r = vetor[1] - vetor[0];
    // letra a
    an = primeironumero + (n - 1) * r;

    printf("valor da letra a: %d\n", an);
    // letra b
    sn = (n * (1 + an)) / 2;

    printf("valor da letra b: %d", sn);
    return 0;
}
