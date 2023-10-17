#include<stdio.h>


struct aluno {
char nome[50];
int matricula;
float nota1, nota2, nota3;
char endereco[50];
};

int main(){
    struct aluno aluno1; // declarando a variavel
    printf("Insira dados do aluno:\n");
    printf("nome: ");
    fgets(aluno1.nome, 50, stdin);

printf("matricula: ");
scanf("%d", &aluno1.nota1, &aluno1.nota2, &aluno1.nota3);

    }