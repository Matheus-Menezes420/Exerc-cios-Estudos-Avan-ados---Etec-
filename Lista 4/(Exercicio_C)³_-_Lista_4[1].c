#include <stdio.h>
void main()

{
int VetA[15],VetB[15],VetC[15],i,j;
for (i=0;i<31;i=i+2)VetA[i]=i;
for (i=0;i<31;i=i+2)VetB[i]=(VetA[i]/2);
for (i=0;i<31;i=i+2)VetC[i]=VetA[30-i];
for (j=0;j<31;j=j+2)printf("VetA:%d VetB:%d\n",VetC[j],VetB[j]);
}