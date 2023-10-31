#include <stdio.h>

int main()
{
    int c=5;
    int *p;
    p = &c;
    printf("valor de c: %d\n", c);
    printf("endereço de memoria de c: %p\n", &c);
    printf("valor de p: %d\n",p);

    return 0;
}