#include <stdio.h>
void main()
{
float vi,t,d,vf;
printf("Digite o valor do Km em Km/m: ");
scanf ("%f",&d);
printf("Digite o valor do tempo em Km/m: ");
scanf ("%f",&t);
vf=(d*1000/(t*60));
printf("A velocidade em m/s eh:%f",vf);
}
