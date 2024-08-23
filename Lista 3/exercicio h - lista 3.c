#include <stdio.h>
void main()
{
int base,expoente,potencia=1,x;
printf("Digite apenas valores positivos e inteiros\n\n");
printf("Dígito do valor da base: ");
scanf("%d",&base);
printf("Digite o valor do expoente: ");
scanf("%d",&expoente);
for (x=0;x<=expoente;x++)
{
printf("%d^%d=%d\n",base,x,potencia);
potencia*= base;
}
}
