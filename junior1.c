#include <stdio.h>

int main()
{
  int vetor[20];
  int i, menor;

  for (i = 0; i < 20; i++)
  {
    scanf("%d", &vetor[i]);
  }
  menor = vetor[0];
  for (i = 1; i < 20; i++)
  {
    if (vetor[i] < menor)
    {
      menor = vetor[i];
    }
  }
  menor = vetor;
  printf("%d", menor);
  return 0;
}