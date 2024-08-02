#include <stdio.h>
#include <math.h>
void main()

{
float A,B,C,x1,x2,delta;
printf("Digite o valor da variavel A: ");
scanf("%f",&A);
printf("Digite o valor da variavel B: ");
scanf("%f",&B);
printf("Digite o valor da variavel C: ");
scanf("%f",&C);
delta=((BB)-4AC);
if (delta<0)
{
printf("não há raízes reais para delta");
}
if (delta==0)
{
x1=((-B+(sqrt(delta)))/2A);
printf("Apenas existe uma raiz real para delta,\n x1=%f",x1);
}
if (delta>0)
{
x1=((-B+(sqrt(delta)))/2A);
x2=((-B-(sqrt(delta)))/2A);
printf("Existe duas raízes para delta,\n x1=%f \n x2=%f",x1,x2);
}
}
