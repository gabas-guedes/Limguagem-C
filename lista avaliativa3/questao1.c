#include <stdio.h>

int main()
{

    char romano[12];
    int i;
    int calculo = 0;
    fgtes(romano[i]);
    switch (romano[i])
    {

    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
    for (i = 0; romano[i] != '/ 0'; i++)
    {
        if (romano[i] < romano[i + 1])
        {
            calculo -= romano[i];
        }
        else
        {
            calculo += romano[i];
        }
        return calculo;
    }

    printf("%d", calculo);
    return 0;
}