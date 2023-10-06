#include<stdio.h>

void main(){

int a, b;

scanf("%d %d", &a, &b);

if (a > b){
printf("%d\n", a);
}
else if (a < b){
printf("%d\n", b);    
}
else {
printf("os numeros sao iguais");
}
}