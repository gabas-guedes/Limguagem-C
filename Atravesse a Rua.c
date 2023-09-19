#include <stdio.h>

int main(){

    int atravessar;
    
    scanf("%d", &atravessar);

        switch(atravessar){
        case 1:
        printf("atravesse a rua caso a avenida estiver vazia\n");
        break;
        case 2:
        printf("nao atravesse a rua caso a avenida estiver movimentada\n");
        break;
       default:
       printf ("invalido"); 
    }


    return 0;
   

}