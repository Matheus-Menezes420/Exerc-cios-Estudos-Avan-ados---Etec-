#include <stdio.h>
void main()
{
float A,B;
printf("Digite o valor da variavel A: ");
scanf("%f",&A);
printf("Digite o valor da variavel B: ");
scanf("%f",&B);
float Add_AB=A+B;
float Sub_AB=A-B;
float Sub_BA=B-A;
float Mul_AB=A*B;
float Div_AB=A/B;
float Div_BA=B/A;
printf("Soma de A e B:%f \n",Add_AB);
printf("Subtracao de A e B:%f \n",Sub_AB);
printf("Subtracao de B e A:%f \n",Sub_BA);
printf("Multiplicacao de A e B: %f\n",Mul_AB);
printf("Divisao de A e B: %f\n",Div_AB);
printf("Divisao de B e A: %f",Div_BA);
}
