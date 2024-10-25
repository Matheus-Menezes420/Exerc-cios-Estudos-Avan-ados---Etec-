#include <stdio.h>
void main ()

{
    int AMatriz[20];
    int BMatriz[20];
    int CMatriz[20];
    int i;
    for (i=0; i<20; i++)
    {
        printf("Digite 20 valores para a matriz A:");
        scanf("%d",&AMatriz[i]);
    }
    for (i=0; i<20; i++)
    {
       printf("Digite 20 valores para a matriz B:");
        scanf("%d",&BMatriz[i]);
    }
    for (i=0; i<20; i++)CMatriz[i]=(AMatriz[i])-(BMatriz[i]);
    for (i=0; i<20; i++)printf("Elemento %d da matriz C eh: %d\n",i,CMatriz[i]);
}
