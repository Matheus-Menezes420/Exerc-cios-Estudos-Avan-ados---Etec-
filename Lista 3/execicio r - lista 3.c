#include <stdio.h>
void main()
{
  int Maior=0,menor=0,x=0;
  while (x>=0)
  {
      printf("Digite um valor inteiro positivo: ");
      scanf("%d",&x);
      if (x>Maior)
      {
          Maior=x;
      }
      if (x<menor && x>-1)
      {
          menor=x;
      }
      }
   printf("O maior numero digitado eh: %d\n",Maior);
    printf("O menor numero digitado eh: %d",menor);
}
