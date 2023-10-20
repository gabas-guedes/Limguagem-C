#include<stdio.h>

int main(){
int vetor[10];
int i, soma1, soma2, soma3;
  for (i = 0; i < 10; i++){  
    scanf("%d", &vetor[i]);
    printf("%d ", vetor[i]);
}
printf("\n");
for (i = 1; i < 10; i++){
 soma1 = vetor[i] +vetor[i - 1];
 printf("%d ", soma1);
}
printf("\n");
for (i = 1; i < 9; i++){
 soma2 = soma1 + soma1;
 printf("%d ", soma2);
}
printf("\n");
for (i = 1; i < 8; i++){
 soma3 = soma2 + soma2;
 printf("%d ", soma3);
}
return 0;
}

