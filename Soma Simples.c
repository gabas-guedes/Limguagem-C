#include <stdio.h>

int main()
{
    char nome_time1[31];
    int forca_time1 = 0;

    // Leitura das informações do time 1

    scanf("%30s", nome_time1);

    for (int i = 0; i < 11; i++)
    {
        char nome[31], posicao;
        int forca;

        scanf("%30s;%c;%d", nome, &posicao, &forca);

        printf("%30s;%c;%d", nome, posicao, forca);
    }
}