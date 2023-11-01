#include <stdio.h>

int main()
{
    int vetora[10];
    int vetorb[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetora[i]);
        printf("%d ", vetora[i]);
    }
    printf("\n");
    vetora[i] = vetorb[i];
    for (i = 0; i < 10; i++)
    {
        if (vetora[i] % 2 == 0)
        {
            vetorb[i] = vetora[i] / 2;
        }
        else
        {
            vetorb[i] = vetora[i] * 3;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetorb[i]);
    }

    return 0;
}