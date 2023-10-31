#include <stdio.h>

int main()
{
  int vetor[20];
  int i, menor;

  for (i = 0; i < 20; i++)
  {
    scanf("%d", &vetor[i]);
  }
  menor = vetor[i];
  
    if (vetor[i] < menor)
    {
      menor = vetor[i];
      printf("%d", menor);
    }
  
  
  return 0;
}