#include<stdio.h>
void main()
{
float A,B,Vx;
printf("Digite o valor da vari�vel A: ");
scanf("%f",&A);
printf("Digite o valor da vari�vel B: ");
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
printf("(trocado)Valor da vari�vel A: %.f \n",A);
printf("(trocado)Valor da vari�vel B: %.f",B);
}
}
