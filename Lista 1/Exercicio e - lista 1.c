#include<stdio.h>
void main()
{
float P,Tx,V,Tp;
printf("Digite o valor: ");
scanf("%f",&V);
printf("Digite o valor do tempo: ");
scanf("%f",&Tp);
printf("Digite o valor da taxa: ");
scanf("%f",&Tx);
P=V+(V*(Tx/100)*Tp);
printf("O valor da prestação eh: %.4f",P);
}
