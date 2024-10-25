#include <stdio.h>
void main ()

{
int VetA[6],VetB[6],VetC[12];
int i,j,z;
for (i = 0; i < 12; i++)
{
if (i % 2 == 0)VetC[i]=(VetA[i]=i);
}
for (j = 0; j < 12; j++)
{
if (j % 2 != 0)VetC[j]=(VetB[j]=j);
}
for (z=0;z<12;z++)printf("%d\n",VetC[z]);
}
    