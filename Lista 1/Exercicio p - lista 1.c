#include<stdio.h>
void main()
{
float SM,PR,NS,D;
printf("Para reajustes para a diminui��o de sal�rio utilize valores negativos\n");
printf("Digite o seu sal�rio mensal: ");
scanf("%f",&SM);
printf("Digite o reajuste salarial: ");
scanf("%f%",&PR);
D=(SM*(PR/100));
NS=D+SM;
printf("%.3f",NS);
}
