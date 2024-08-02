#include <stdio.h>

void main()
{
int a,b;
double R = 1;
printf("Digite o valor da base: ");
scanf("%d", &b);
printf("Digite o valor do expoente: ");
scanf("%d", &a);
if (a==0) {
printf("1\n");
}
int base_abs = b < 0 ? -b : b;
int expoente_abs = a < 0 ? -a : a;
for (int i = 0; i < expoente_abs; i++) {
R *= base_abs;
}
if (b < 0 && a % 2 != 0) {
R=-R;
}
if (a < 0) {
R=1/R;
}
printf("%f\n",R);
}
