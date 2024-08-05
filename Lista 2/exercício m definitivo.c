#include <stdio.h>
void main ()
{
char Nome[50];
char Sexo;
printf("digite o seu nome: ");
scanf("%s",&Nome);
printf("digite o seu sexo(M/F): ");
scanf("%s",&Sexo);
switch (Sexo)
{
case 'M':
printf("llmo.Sr.%s",Nome);break;
case 'F':
printf("llma.Sra.%s",Nome);break;
default:
printf("Sexo inválido");
}
}