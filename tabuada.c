#include <stdio.h>

int main()
{
    int num, i, mult;

    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        mult = num * i;
        printf("%d ", mult);
    }

    return 0;
}