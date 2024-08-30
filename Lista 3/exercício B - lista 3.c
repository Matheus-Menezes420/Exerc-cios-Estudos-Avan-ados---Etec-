#include <stdio.h>
void main()
{
int x,y=0,R;
printf("Digite um número: ");
scanf("%d",&x);
while (y<=10)
{
R=x*y;
printf("%d*%d eh:%d \n",x,y,R);
y++;
}
}