#include <stdio.h>

int main()
{
    int i, fat;
    scanf("%d", &fat);
    for (i = fat; i > 1; i--)
    {
        fat = fat * (i - 1);
    }
    printf("%d", fat);
    return 0;
}