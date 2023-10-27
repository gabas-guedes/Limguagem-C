#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriza[4][4];
    int matrizb[4][4];
    int matrizr[4][4];
    char calculo[4];
    int linha, coluna;

    for (linha = 0; linha <= 3; linha++)
    {
        for (coluna = 0; coluna <= 3; coluna++)
        {
            scanf("%d", &matriza[linha][coluna]);
        }
    }
    for (linha = 0; linha <= 3; linha++)
    {
        for (coluna = 0; coluna <= 3; coluna++)
        {
            scanf("%d", &matrizb[linha][coluna]);
        }
    }
    scanf("%s", calculo);

    if (calculo[0] == 'soma')
    {
        for (linha = 0; linha <= 3; linha++)
        {
            for (coluna = 0; coluna <= 3; coluna++)
            {
                matrizr[linha][coluna] = matriza[linha][coluna] + matrizb[linha][coluna];
            }
        }
        for (linha = 0; linha <= 3; linha++)
        {
            for (coluna = 0; coluna <= 3; coluna++)

            {
                printf("%4d", matrizr[linha][coluna]);
            }

            printf("\n");
        }
    }
    else if (calculo[0] == 'sub')
    {
        for (linha = 0; linha <= 3; linha++)
        {
            for (coluna = 0; coluna <= 3; coluna++)
            {
                matrizr[linha][coluna] = matriza[linha][coluna] - matrizb[linha][coluna];
            }
        }
        for (linha = 0; linha <= 3; linha++)
        {
            for (coluna = 0; coluna <= 3; coluna++)

            {
                printf("%4d", matrizr[linha][coluna]);
            }

            printf("\n");
        }
    }
    return 0;
}
