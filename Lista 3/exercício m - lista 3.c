#include <stdio.h>
void main()
{
float x,i=0,y=0,z;
while (i<10)
{
i++;
printf("Digite um valor: ");
scanf("%f",&x);
y+=x;
z=y/10;
}
printf("O somatorio dos valores digitados eh: %.3f\n",y);
printf("A media dos valores digitados eh: %.3f",z);
}