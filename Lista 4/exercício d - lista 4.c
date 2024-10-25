#include <stdio.h>
void main ()

{
int VetA[15],VetB[15],i;
for (int i = 0; i < 15; i++) {
        VetA[i]=i;
        VetB[i] = VetA[i] * VetA[i];
    }
    printf("\nMatriz A:\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", VetA[i]);
    }
    printf("\n\nMatriz B (quadrado dos elementos de A):\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", VetB[i]);
    }
}
