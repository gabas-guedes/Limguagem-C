#include<stdio.h>
int main(){
int a, b;
double c, salario;
scanf("%d", &a);
scanf("%d %lf", &b, &c);
salario = (b * c);
printf("NUMBER = %d\n", a);
printf("SALARY = U$ %.2lf\n", salario);
return 0;
}