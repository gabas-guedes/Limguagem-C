#include <stdio.h>

int main()
{
  int vetor[10];
  int i, posicao;

  for (i = 0; i < 10; i++)
  {
    scanf("%d", &vetor[i]);
    printf("%d ", vetor[i]);
  }
  printf("\n");
  for (i = 9; i > 0; i--)
  {
    for (posicao = 0; posicao < 10; posicao++)
    {
      if (posicao < i)
      {
        vetor[posicao] = vetor[posicao] + vetor[posicao + 1];
        printf("%d ", vetor[posicao]);
      }
    else if (posicao == i){
      printf("\n");
    }
    }
  }
  return 0;
}
