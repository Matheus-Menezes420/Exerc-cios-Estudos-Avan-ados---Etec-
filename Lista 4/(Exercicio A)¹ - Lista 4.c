#include <stdio.h>
void main ()

{
int vetor[10],i;
printf("Digite 10 valores:");
for (i=0;i<10;i++)scanf("%d",&vetor[i]);
for (i=0;i<10;i++)printf("Elemento %d eh: %d\n",i,vetor[i]);
}
