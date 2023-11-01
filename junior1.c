#include <stdio.h>

int main()
{
  int vetor[20];
  int menor;
  int i;

  for (i = 0; i < 20; i++)
  {
    scanf("%d", &vetor[i]);
  }
  vetor[i] = menor;
  for (i = 0; i < 20; i++)
  {

    if (vetor[i] < menor)
    {
      menor = vetor[i];
    }
  }

  printf("O menor valor na matriz e : %d\n", menor);

  return 0;
}