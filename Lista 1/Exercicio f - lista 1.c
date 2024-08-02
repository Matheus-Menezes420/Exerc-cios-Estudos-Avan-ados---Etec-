#include<stdio.h>
void main()
{
float A,B,Vx;
printf("Digite o valor da variável A: ");
scanf("%f",&A);
printf("Digite o valor da variável B: ");
scanf("%f",&B);
if (A==B)
{
printf("Ai quebrou a brincadeira,utilize valores que nao sejam iguais");
}
else
{
Vx=A;
A=B;
B=Vx;
printf("(trocado)Valor da variável A: %.f \n",A);
printf("(trocado)Valor da variável B: %.f",B);
}
}
