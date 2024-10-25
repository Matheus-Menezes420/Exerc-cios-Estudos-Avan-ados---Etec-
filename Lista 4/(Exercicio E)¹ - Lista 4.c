#include <stdio.h>
void main ()

{
int VetA[15],VetB[15],VetC[30],i,j,x;
for (int i = 0; i < 15; i++)VetC[i]=(VetA[i]=i); 
for (int j=15; j < 30; j++)VetC[j]=(VetB[j]=j);         
for (int x = 0; x < 30; x++)printf("%d\n",VetC[x]);
}
    
