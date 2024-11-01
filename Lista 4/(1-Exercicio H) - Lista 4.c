#include <stdio.h>
void main ()

{
int VetA[5],VetB[5],VetC[5],VetD[15];
int i,j,x,z;
for (i = 0; i < 5; i++)VetD[i]=(VetA[i]=i);
for (j=5; j<10; j++)VetD[j]=(VetB[j]=j);
for (x=10;x<15;x++)VetD[x]=(VetC[x]=x);
for (z=0;z<15;z++)printf("%d\n",VetD[z]);
}
    
