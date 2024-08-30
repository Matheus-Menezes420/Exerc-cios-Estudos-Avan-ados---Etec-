#include <stdio.h>
void main ()
{
int x,y=0,z;
for (x=50;x<=70;x++)
{
if (x % 2==0)
{
y+=x;
z=y/10;
}
}
printf("O somatorio dos valores pares eh: %d \n",y);
printf("A media dos valores eh: %d",z);
}