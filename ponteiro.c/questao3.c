#include<stdio.h>
int main(){
    float vetor[10];
    int i;
    float *p[10];
    
    for(i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
    p[i]=&vetor[i];
    }
   
     for(i = 0; i < 10; i++){
 printf("endereco de memoria de vetor: %p\n", p[i]);
     }
    return 0;
}