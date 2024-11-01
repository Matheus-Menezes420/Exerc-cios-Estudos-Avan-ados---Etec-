#include <stdio.h>
void main ()

{
int VetA[20],VetB[20],i,j,x;
for (i = 0; i < 20; i++)VetA[i]=i;
for (j=0; j<20; j++)VetB[j]=VetA[20-1-j];
for (x=0;x<20;x++)
{
printf("A:%d - B:%d\n",VetA[x],VetB[x]); 
}
}
    
