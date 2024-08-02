#include<stdio.h>
void main()

{
float D,R,V;
printf("Digite o valor da cotação do Dolar: ");
scanf("%f",&V);
printf("Digite o valor em real: ");
scanf("%f",&D);
R=D/V;
printf("Valor em dolar: %.4f",R);
}
