#include <stdio.h>
void main ()

{
    int VetA[15],VetB[15];
    int i,j=1,k;
    for (k=0; k<15; k++)
    {
        VetA[k]=k;
        printf("Vet A: %d\n",VetA[k]);
    }
    printf("\n");
    for (i=0; i<15; i++)
    {
        VetB[i]=i;
        if (i==0)printf("Vet B:0!=1\n");
        else
        {
            j*=i;
            printf("Vet B:%d!=%d\n",i,j);
        }
    }
}
