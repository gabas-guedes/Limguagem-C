
void main()
{

    int a, b, soma;
    scanf("%d %d", &a, &b);
    soma = a + b;
    if (soma >= 10)
    {
        soma = soma + 5;
        printf("%d", soma);
    }
    else if (soma < 10)
    {
        soma = soma + 7;
        printf("%d", soma);
    }
}