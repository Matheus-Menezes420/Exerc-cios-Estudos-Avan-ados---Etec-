#include <stdio.h>
void main()

{
int VetA[12],VetB[12],i,j;
for (i=0;i<12;i++)VetA[i]=i;
for (i=0;i<12;i++)VetB[i]=VetA[11-i];
for (j=0;j<12;j++)printf("%d\n",VetB[j]);
}