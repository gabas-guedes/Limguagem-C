#include <stdio.h>

int main()
{
    char nome_time1[31], nome_time2[31];
    int forca_time1 = 0, forca_time2 = 0;

    // Leitura das informações do time 1
    printf("Informe o nome do time 1: ");
    scanf("%30s", nome_time1);

    for (int i = 0; i < 11; i++)
    {
        char nome[31], posicao;
        int forca;

        scanf("%30s;%c;%d", nome, &posicao, &forca);

        if (posicao == 'G')
        {
            forca_time1 += 8 * forca;
        }
        else if (posicao == 'L' || posicao == 'Z' || posicao == 'V')
        {
            forca_time1 += 10 * forca;
        }
        else if (posicao == 'M')
        {
            forca_time1 += 11 * forca;
        }
        else if (posicao == 'A')
        {
            forca_time1 += 12 * forca;
        }
    }

    // Leitura das informações do time 2
    printf("Informe o nome do time 2: ");
    scanf("%30s", nome_time2);

    for (int i = 0; i < 11; i++)
    {
        char nome[31], posicao;
        int forca;

        scanf("%30s;%c;%d", nome, &posicao, &forca);

        if (posicao == 'G')
        {
            forca_time2 += 8 * forca;
        }
        else if (posicao == 'L' || posicao == 'Z' || posicao == 'V')
        {
            forca_time2 += 10 * forca;
        }
        else if (posicao == 'M')
        {
            forca_time2 += 11 * forca;
        }
        else if (posicao == 'A')
        {
            forca_time2 += 12 * forca;
        }
    }

    // Cálculo da força ponderada
    double forca_ponderada_time1 = (double)(forca_time1) / 100;
    double forca_ponderada_time2 = (double)(forca_time2) / 100;

    printf("Força ponderada do time %s: %.2f\n", nome_time1, forca_ponderada_time1);
    printf("Força ponderada do time %s: %.2f\n", nome_time2, forca_ponderada_time2);

    // Determinação do time mais forte
    if (forca_ponderada_time1 > forca_ponderada_time2)
    {
        printf("O time %s é o mais forte.\n", nome_time1);
    }
    else if (forca_ponderada_time2 > forca_ponderada_time1)
    {
        printf("O time %s é o mais forte.\n", nome_time2);
    }
    else
    {
        printf("Os times têm a mesma força.\n");
    }

    return 0;
}