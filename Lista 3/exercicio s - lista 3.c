#include <stdio.h>
void main()
{
int x,y,R,contador=0;
printf("Digite o divisor: ");
scanf("%d",&x);
printf("Digite o dividendo: ");
scanf("%d",&y);
R=y;
while (R>=x)
{
R=(R-x);
contador++;
}
printf("O quociente eh: %d",contador);
}
