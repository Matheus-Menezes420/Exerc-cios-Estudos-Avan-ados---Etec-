#include <stdio.h>
#include <math.h>
void main()

{
int A,B,C,Vx;
printf("Digite o valor da variavel A: ");
scanf("%d",&A);
printf("Digite o valor da variavel B: ");
scanf("%d",&B);
printf("Digite o valor da variavel C: ");
scanf("%d",&C);
if (A>B)
{
Vx=A;
A=B;
B=Vx;
}
if (A>C)
{
Vx=A;
A=C;
C=Vx;
}
if (B>C)
{
Vx=B;
B=C;
C=Vx;
}
printf("%d %d %d \n",A,B,C);
}
