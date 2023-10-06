#include<stdio.h>
int main(){
double a;
scanf("%lf", &a);
printf("VOLUME = %.3lf\n", ((4.0/3) *3.14159*(a*a*a)));
return 0;
}