#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para verificar se a placa é válida
int validarPlaca(char *placa) {
    // Verifica se a placa tem o formato correto
    if ((strlen(placa) == 8 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && isdigit(placa[3]) &&
         isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])) ||
        (strlen(placa) == 7 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && isdigit(placa[3]) &&
         isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])))
        return 1; // Placa válida
    else
        return 0; // Placa inválida
}

// Função para verificar se o dia da semana é válido
int validarDiaSemana(char *diaSemana) {
    // Lista de dias da semana válidos
    char *diasValidos[] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};

    // Verifica se o dia da semana está na lista
    for (int i = 0; i < 7; i++) {
        if (strcmp(diaSemana, diasValidos[i]) == 0)
            return 1; // Dia da semana válido
    }

    return 0; // Dia da semana inválido
}

// Função para verificar se a placa pode circular no dia informado
int verificarRodizio(char *placa, char *diaSemana) {
    // Obtem o último dígito da placa
    int ultimoDigito = placa[strlen(placa) - 1] - '0';

    // Verifica o dia da semana e o último dígito da placa
    switch (diaSemana[0]) {
        case 'S':
            return 1; // Sábado ou domingo, pode circular
        case 'Q':
            if (ultimoDigito == 4 || ultimoDigito == 5)
                return 0; // Não pode circular
            break;
        case 'T':
            if (ultimoDigito == 2 || ultimoDigito == 3)
                return 0; // Não pode circular
            break;
        case 'S':
            if (ultimoDigito == 6 || ultimoDigito == 7)
                return 0; // Não pode circular
            break;
        case 'S':
            if (ultimoDigito == 8 || ultimoDigito == 9)
                return 0; // Não pode circular
            break;
        default:
            return 1; // Dia da semana inválido
    }

    return 1; // Pode circular
}

int main() {
    char placa[9];
    char diaSemana[20];

    // Obter a placa e o dia da semana
    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);
    printf("Digite o dia da semana: ");
    scanf("%s", diaSemana);

    // Converte o dia da semana para maiúsculas
    for (int i = 0; i < strlen(diaSemana); i++) {
        diaSemana[i] = toupper(diaSemana[i]);
    }

    // Verifica se a placa e o dia da semana são válidos
    if (!validarPlaca(placa)) {
        printf("Placa invalida\n");
        return 1;
    }

    if (!validarDiaSemana(diaSemana)) {
        printf("Dia da semana invalido\n");
        return 1;
    }

    // Verifica se a placa pode circular no dia informado
    if (verificarRodizio(placa, diaSemana))
        printf("Pode circular\n");
    else
        printf("Nao pode circular\n");

    return 0;
}
