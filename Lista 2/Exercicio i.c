#include <stdio.h>
#include <math.h>
void main()

{
int A,B,C,D,E;
printf("Digite o valor da variavel A: ");
scanf("%d",&A);
printf("Digite o valor da variavel B: ");
scanf("%d",&B);
printf("Digite o valor da variavel C: ");
scanf("%d",&C);
printf("Digite o valor da variavel D: ");
scanf("%d",&D);
printf("Digite o valor da variavel E: ");
scanf("%d",&E);
int maior, menor;
maior=menor=A;
if (B>A)maior=B;
if (B<A)menor=B;
if (C>A)maior=C;
if (C<A)menor=C;
if (D>A)maior=D;
if (D<A)menor=D;
if (E>A)maior=E;
if (E<A)menor=E;
printf("Maior valor: %d\n",maior);
printf("Menor valor: %d\n",menor);
}
