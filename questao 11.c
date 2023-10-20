#include<stdio.h>

int main(){
int vetor[10];
int i, soma;
for (i = 0; i < 10; i++){
    scanf("%d", &vetor[i]);
    printf("%d ", vetor[i]);
}
printf("\n");
for (i = 1; i < 10; i++){
 soma = vetor[i] +vetor[i - 1];
 printf("%d ", soma);
}
while (1){
soma = vetor[i] +vetor[i - 1];
 printf("%d \n", soma);
if (vetor[i = 1]){
break;}
}

return 0;    
}