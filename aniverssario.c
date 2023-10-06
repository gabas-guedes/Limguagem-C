void main()
{
    int ano, sub;
    char resposta;
    printf("digite o ano em que voce nasceu: ");
    scanf("%d", &ano);
    printf("ja fez aniverssario: (s/n)");
    scanf(" %c", &resposta);
    sub = 2023 - ano;
    if (resposta == 'n')
    {
        sub = sub - 1;
    }
    if (sub >= 18)
    {
        printf("pode dirigir - %d", sub);
    }
    else if (sub < 18)
    {
        printf("nao pode dirigir - %d", sub);
    }
}