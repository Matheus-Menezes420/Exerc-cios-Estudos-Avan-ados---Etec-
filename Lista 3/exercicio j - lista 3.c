#include <stdio.h>
void main()

{
int C,F,T;
for (C=10;C<=100;C=C+10)
{
F=((C*(1.8))+32);
printf("%d Celsius é igual a %d Fahrenheit\n",C,F);
}
}
