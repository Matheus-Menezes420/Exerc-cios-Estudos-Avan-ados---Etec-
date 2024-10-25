#include <stdio.h>
void main ()

{
    int VetA[5],VetB[5];
    int i,j,z;
    for (i = 0; i < 5; i++)
    {
    (VetA[i]=i);
    VetB[i]=(((9*VetA[i])+160)/5);
    printf("VetA: %d°C VetB:%d°F\n",VetA[i],VetB[i]);
    }
}
