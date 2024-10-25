#include <stdio.h>
void main ()

{
    int VetA[12],VetB[12],VetC[24];
    int i,j,z;
    for (i = 0; i < 12; i++)
    {
        if (i % 2==0 || i % 3==0)VetC[i]=(VetA[i]=i);
}
for (j = 12; j < 24; j++)
    {
        if (j % 5 !=0)VetC[j]=(VetB[j]=j);
}
for (z = 0; z < 24; z++)printf("%d\n",VetC[z]);
    }
    