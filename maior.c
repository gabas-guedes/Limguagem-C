#include <stdio.h>

int main(){
    int a, b, c, d,maior;

    scanf("%d %d %d", &a, &b, &c);

    if ( a > b && a > c) {
        printf("%d eh o maior\n", a);
    }
    else if ( b > a && b > c) {
        printf("%d eh o maior\n", b);   
    }
    else if (c > a && c > b) {
       printf("%d eh o maior\n", c); 
    }else if(a == b && b == c){
        printf("%d eh o maior\n", a);   
    }


return 0;
}