#include <stdio.h>

void main()
{

   float Nota;
   while (1)
   {
      scanf("%f", &Nota);
      if (Nota >= 8 && Nota <= 10)
      {

         printf("Otimo\n");
      }
      else if (Nota >= 7 && Nota < 8)
      {
         printf("Bom\n");
      }
      else if (Nota >= 5 && Nota < 7)
      {
         printf("Regular\n");
      }
      else
      {
         printf("Insatisfatorio\n");
      }
   }
}
