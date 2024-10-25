#include <stdio.h>
void main ()

{
float VetA[15],VetB[15];
int i,j,x,z;
for (i = 0; i < 15; i++)
{
VetA[i]=i;
if (i % 2==0)VetB[i]=(i/2);
else VetB[i]=(VetA[i]*3/2);
}
for (z=0;z<15;z++)printf("%.2f\n",VetB[z]);
}
    