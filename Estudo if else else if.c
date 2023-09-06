#include <stdio.h>

// void main() {
//     int a = 88, b = 22;

    
//      printf("Digite o numero inteiro: ");
//      scanf("%d%d", &a, &b);

//     if (a > b) {
//         printf("O maior numero eh %d\n", a);
//     } else if (b > a) {
//         printf("O maior numero eh %d\n", b);
//     } else {
//         printf("Os numeros sao iguais");
//     }
// }
void main() {

    int a =0, b = 0;
    
    printf ("Digite o numero inteiro: ");
    scanf ("%d%d", &a, &b);

    int soma = a + b;
    if (soma >= 10){
        soma = soma + 5;     
    }
    else{ 
           soma = soma + 7;
    }
    printf (" a soma %d", soma);




}
