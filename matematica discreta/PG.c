#include <stdio.h>
#include <math.h>
int main()
{
    int vetor[22];
    int an, sn;
    int i;
    int primeironumero;
    int q;
    int n = 22;
    printf("insira os numeros do vetor :");

    for (i = 0; i < 22; i++)
    {

        scanf("%d", &vetor[i]);
    }

    primeironumero = vetor[0];
    q = vetor[1] / vetor[0];

    an = primeironumero * pow(q, (n - 1));

    printf("valor de an: %d\n", an);

    sn = (primeironumero * (pow(q, n) - 1)) / (q - 1);

    printf("valor de sn: %d", sn);
    return 0;
}
