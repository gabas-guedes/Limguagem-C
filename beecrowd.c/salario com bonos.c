#include<stdio.h>
int main(){
char nome[10];
double b, c, salario;
scanf("%s%lf %lf", nome, &b, &c);
salario = (b + c*0.15);
printf("TOTAL = R$ %.2lf\n", salario);
return 0;
}