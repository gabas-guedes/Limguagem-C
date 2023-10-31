#include <stdio.h>

int main()
{
    int vetora[10];
    int vetorb[10];
    int i, j;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetora[i]);
    }

    for (i = 0, j = 9; i < 10; i++, j--)
    {
        vetorb[i] = vetora[j];
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetora[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetorb[i]);
    }

        return 0;
}