#include <stdio.h>
void main ()

{
int VetA[20],VetB[30],VetC[50],i,j,x;
for (int i = 0; i < 20; i++)VetC[i]=(VetA[i]=i); 
for (int j=20; j < 50; j++)VetC[j]=(VetB[j]=j);         
for (int x = 0; x < 50; x++)printf("%d\n",VetC[x]);
}
    