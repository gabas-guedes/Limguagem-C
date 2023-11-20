#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USERS 1000
#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

typedef struct
{
    int id;
    char fullName[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char sex[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    double height;
    int vaccine;
}

User;
User users[MAX_USERS];
int userCount = 0;

// pra gerar um ID aleatório
int generateRandomId()
{
    return rand() % 10000 + 1; // Gerando IDs entre 1 e 10000
}

// verificar se o e-mail é válido
bool isValidEmail(const char *email)
{
    int atCount = 0;
    int dotCount = 0;
    int len = strlen(email);
    for (int i = 0; i < len; i++)
    {
        if (email[i] == '@')
        {
            atCount++;
        }
        else if (email[i] == '.')
        {
            dotCount++;
        }
    }
    return (atCount == 1 && dotCount >= 1);
}

// ve se o sexo é válido
bool isValidSex(const char *sex)
{
    return (strcmp(sex, "Feminino") == 0 || strcmp(sex, "Masculino") == 0 ||
            strcmp(sex, "Indiferente") == 0);
}

// adicionar um novo usuário
void addUser()
{
    if (userCount < MAX_USERS)
    {
        User newUser;
        newUser.id = generateRandomId();

        printf("Nome completo: ");
        fgets(newUser.fullName, MAX_NAME_LENGTH, stdin);
        newUser.fullName[strcspn(newUser.fullName, "\n")] = 0;

        do
        {
            printf("Email: ");
            fgets(newUser.email, MAX_EMAIL_LENGTH, stdin);
            newUser.email[strcspn(newUser.email, "\n")] = 0;
        } while (!isValidEmail(newUser.email));

        do
        {
            printf("Sexo (Feminino/Masculino/Indiferente): ");
            fgets(newUser.sex, MAX_NAME_LENGTH, stdin);
            newUser.sex[strcspn(newUser.sex, "\n")] = 0;
        } while (!isValidSex(newUser.sex));

        printf("Endereco: ");
        fgets(newUser.address, MAX_ADDRESS_LENGTH, stdin);
        newUser.address[strcspn(newUser.address, "\n")] = 0;

        do
        {
            printf("Altura (entre 1 e 2 metros): ");
            scanf("%lf", &newUser.height);
            getchar(); // Limpa o buffer de entrada
        } while (newUser.height < 1 || newUser.height > 2);

        do
        {
            printf("Recebeu vacina? (1 - Sim / 0 - Nao): ");
            scanf("%d", &newUser.vaccine);
            getchar(); // Limpa o buffer de entrada
        } while (newUser.vaccine != 0 && newUser.vaccine != 1);

        users[userCount++] = newUser;
        printf("Usuario cadastrado com sucesso!\n");
    }
    else
    {
        printf("Limite de usuarios atingido.\n");
    }
}

// Função para editar um usuário por ID
void editUser()
{
    int searchId;
    printf("Digite o ID do usuario que deseja editar: ");
    scanf("%d", &searchId);
    getchar();

    for (int i = 0; i < userCount; i++)
    {
        if (users[i].id == searchId)
        {
            printf("Nome completo: ");
            fgets(users[i].fullName, MAX_NAME_LENGTH, stdin);
            users[i].fullName[strcspn(users[i].fullName, "\n")] = 0;

            do
            {
                printf("\nEmail: ");
                fgets(users[i].email, MAX_EMAIL_LENGTH, stdin);
                users[i].email[strcspn(users[i].email, "\n")] = 0;
            } while (!isValidEmail(users[i].email));

            do
            {
                printf("Sexo (Feminino/Masculino/Indiferente): ");
                fgets(users[i].sex, MAX_NAME_LENGTH, stdin);
                users[i].sex[strcspn(users[i].sex, "\n")] = 0;
            } while (!isValidSex(users[i].sex));

            printf("Endereco: ");
            fgets(users[i].address, MAX_ADDRESS_LENGTH, stdin);
            users[i].address[strcspn(users[i].address, "\n")] = 0;

            do
            {
                printf("Altura (entre 1 e 2 metros): ");
                scanf("%lf", &users[i].height);
                getchar();
            } while (users[i].height < 1 || users[i].height > 2);

            do
            {
                printf("Recebeu vacina? (1 - Sim / 0 - Nao): ");
                scanf("%d", &users[i].vaccine);
                getchar();
            } while (users[i].vaccine != 0 && users[i].vaccine != 1);

            printf("Usuario editado com sucesso!\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

// pra excluir um usuário por ID
void deleteUser()
{
    int searchId;
    printf("Digite o ID do usuario que deseja excluir: ");
    scanf("%d", &searchId);
    getchar();

    for (int i = 0; i < userCount; i++)
    {
        if (users[i].id == searchId)
        {
            for (int j = i; j < userCount - 1; j++)
            {
                users[j] = users[j + 1];
            }
            userCount--;
            printf("Usuario excluido com sucesso!\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

// achar usuario por e-mal
void searchByEmail()
{
    char searchEmail[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuario que deseja buscar: ");
    fgets(searchEmail, MAX_EMAIL_LENGTH, stdin);
    searchEmail[strcspn(searchEmail, "\n")] = 0;

    for (int i = 0; i < userCount; i++)
    {
        if (strcmp(users[i].email, searchEmail) == 0)
        {
            printf("Usuario encontrado:\n");
            printf("ID: %d\n", users[i].id);
            printf("Nome: %s\n", users[i].fullName);
            printf("Email: %s\n", users[i].email);
            printf("Sexo: %s\n", users[i].sex);
            printf("Endereco: %s\n", users[i].address);
            printf("Altura: %.2lf\n", users[i].height);
            printf("Recebeu vacina? %s\n", users[i].vaccine ? "Sim" : "Nao");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

// printar todos os usuarios
void printAllUsers()
{
    printf("Lista de usuarios cadastrados:\n");
    for (int i = 0; i < userCount; i++)
    {
        printf("Usuario %d:\n", i + 1);
        printf("ID: %d\n", users[i].id);
        printf("Nome: %s\n", users[i].fullName);
        printf("Email: %s\n", users[i].email);
        printf("Sexo: %s\n", users[i].sex);
        printf("Endereco: %s\n", users[i].address);
        printf("Altura: %.2lf\n", users[i].height);
        printf("Recebeu vacina? %s\n", users[i].vaccine ? "Sim" : "Nao");
        printf("---------------------\n");
    }
}

int main()
{
    srand(time(NULL));

    char choice;
    do
    {
        printf("\nEscolha uma opcao:\n");
        printf("1. Adicionar usuario\n");
        printf("2. Editar usuario\n");
        printf("3. Excluir usuario\n");
        printf("4. Buscar usuario pelo email\n");
        printf("5. Imprimir todos os usuarios\n");
        printf("6. Sair\n");
        printf("Escolha: ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '1':
            addUser();
            printf("\n");
            break;
        case '2':
            editUser();
            break;
        case '3':
            deleteUser();
            break;
        case '4':
            searchByEmail();
            break;
        case '5':
            printAllUsers();
            break;
        case '6':
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida. Escolha novamente.\n");
        }
    } while (choice != '6');

    return 0;
}
