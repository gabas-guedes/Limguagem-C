#include <stdio.h>
#include <string.h>

int diasvalidos(char dias[15]) {
    int valid = 0;
    char *days[] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};
    
    for (int i = 0; i < 7; i++) {
        if (strcmp(dias, days[i]) == 0) {
            valid = 1;
            break;
        }
    }
    
    return valid;
}

int main(){
    char dias[15];
    
    fgets(dias, sizeof(dias), stdin);
    dias[strcspn(dias, "\n")] = '\0';
    
    if (diasvalidos(dias) == 1) {
        printf("Dia valido");
    } else {
        printf("Dia da semana invalido");
    }
    
    return 0;
}