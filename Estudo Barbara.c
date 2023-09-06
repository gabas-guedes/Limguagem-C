#include <stdio.h>

void main() {
    int a = 0, b = 0;
    int soma = 0;
    int div = 0;
    int mult = 0;
    int sub = 0;
    printf("Digite o primeiro numero: "); 
    scanf("%d%d", &a,&b);                      
    
    

    soma = a + b;
    div = a / b;
    mult = a * b; 
    sub = a - b;
    printf("\nA soma eh: %d", soma);
     printf("\nA div eh: %d", div);
      printf("\nA mult eh: %d", mult);
       printf("\nA sub eh: %d", sub);  
}