#include<stdio.h>
void main()
{
float SM,PR,NS,D;
printf("Para reajustes para a diminuição de salário utilize valores negativos\n");
printf("Digite o seu salário mensal: ");
scanf("%f",&SM);
printf("Digite o reajuste salarial: ");
scanf("%f%",&PR);
D=(SM*(PR/100));
NS=D+SM;
printf("%.3f",NS);
}
