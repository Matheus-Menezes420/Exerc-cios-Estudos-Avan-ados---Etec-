#include <stdio.h>
void main ()

{
int AMatriz[8];
int BMatriz[8];
int i;
printf("Digite 8 valores:");
for (i=0; i<8; i++)
{
scanf("%d",&AMatriz[i]);
BMatriz[i]=AMatriz[i]*3;
}
for (i=0; i<8; i++)printf("Elemento %d da matriz B eh: %d\n",i,BMatriz[i]);
}
