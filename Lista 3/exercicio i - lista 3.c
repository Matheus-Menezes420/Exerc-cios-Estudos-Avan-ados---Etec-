#include <stdio.h>
void main ()
{
int atual=1,anterior=0,proximo,i;
printf("%d\n",anterior);
printf("%d\n",atual);
for (i=3;i<=15;i++)
{
proximo=atual+anterior;
printf("%d\n",proximo);
anterior=atual;
atual=proximo;
}
}
