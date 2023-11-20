#include <stdio.h>

int main()
{
    int vetor[35];
    int an, sn;
    int i;
    int primeironumero;
    int r;
    int n = 35;
    printf("insira os numeros do vetor :");

    for (i = 0; i < 35; i++)
    {

        scanf("%d", &vetor[i]);
    }

    primeironumero = vetor[0];
    r = vetor[1] - vetor[0];

    an = primeironumero + (n - 1) * r;

    printf("valor de an: %d\n", an);

    sn = (n * (1 + an)) / 2;

    printf("valor de sn: %d", sn);
    return 0;
}
