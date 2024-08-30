#include <stdio.h>
void main()
{
int x,y=0,z,contador=-1;
while (x>0)
{
printf("Digite um valor: ");
scanf("%d",&x);
if (x>=0)y+=x;
contador++;
z=y/contador;
}
printf("O somatorio dos valores digitados eh: %d\n",y);
printf("A media dos valores digitados eh: %d\n",z);
printf("A quantidade de vezes em que o x foi somado eh: %d",contador);
}
