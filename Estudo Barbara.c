#include <stdio.h>

void main()
{
    float a = 0, b = 0;
    float soma = 0;
    float div = 0;
    float mult = 0;
    float sub = 0;
    printf("Digite o primeiro numero: ");
    scanf("%f%f", &a, &b);

    soma = a + b;
    div = a / b;
    mult = a * b;
    sub = a - b;
    printf("\nA soma eh: %f", soma);
    printf("\nA div eh: %f", div);
    printf("\nA mult eh: %f", mult);
    printf("\nA sub eh: %f", sub);
}