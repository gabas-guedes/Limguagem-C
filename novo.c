void main()
{
    int ano = 0, idade = 0;
    char resposta = 'n';

    // leitura das variaveis
    printf("Digite o ano em que voce nasceu: ");
    scanf("%d", &ano);
    printf("Voce ja fez aniversario este ano? (s/n): ");
    scanf(" %c", &resposta);

    switch (resposta)
    {
    case 's':
        idade = 2023 - ano;
        break;
    case 'n':
        idade = 2022 - ano;
        break;
    }

    if (idade >= 18)
    {
        printf("Ja pode dirigir - %d anos\n", idade);
    }
    else
    {
        printf("Nao pode dirigir - %d anos\n", idade);
    }
}