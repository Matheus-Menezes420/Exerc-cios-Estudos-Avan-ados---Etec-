#include <stdio.h>
void main()

{
int N;
printf("digite um numero: ");
scanf("%d",&N);
if (N<0)
{
N=N*(-1);
printf("%d",N);
}
else printf("%d",N);
}
