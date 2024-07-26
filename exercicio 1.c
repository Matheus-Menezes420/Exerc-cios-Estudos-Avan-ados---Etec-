#include <stdio.h>
void main()
{
 int A,B,R;
 printf("digite o valor da variavel A:");
 scanf("%d",&A);
 printf("digite o valor da variavel B:");
 scanf("%d",&B);
 if (A>B)
 {
    R=A-B;
    printf("A diferenca entre A e B eh: %d",R);
 }
else
{
    R=B-A;
     printf("A diferenca entre A e B eh: %d",R);
}
}
