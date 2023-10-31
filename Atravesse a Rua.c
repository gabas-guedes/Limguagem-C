#include <stdio.h>

int main()
{
    int valores[20];

    int minimo;

    // Lê os 20 valores e os armazena no vetor

    printf("Digite 20 valores:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &valores[i]);
    }

    // Inicializa a variável 'minimo' com o primeiro valor do vetor
    minimo = valores[

        0];

    // Encontra o valor mínimo no vetor
    for (int i = 1; i < 20; i++)
    {
        if (valores[i] < minimo)
        {
            minimo = valores[i];
        }
    }

    minimo = valores;
    // Imprime o valor mínimo
    printf("O valor mínimo no vetor é: %d\n", minimo);

    return 0;
}