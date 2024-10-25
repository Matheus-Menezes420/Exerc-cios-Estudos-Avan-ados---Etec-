#include <stdio.h>

int buscasequencial(int VetB[], int tamanho, int chave) {
    for (int j = 0; j < tamanho; j++) {
        if (VetB[j] == chave) {
            return j; 
        }
    }
    return -1; 
}
void main() {
    int VetA[8], VetB[8];
    int i, chave;
    for (i = 0; i < 8; i++) {
        VetA[i] = i;
        VetB[i] = 5 * VetA[i];
    }
    printf("Vetor B: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", VetB[i]);
    }
    printf("\n");
    printf("Digite o numero do elemento para o programa realizar a busca: ");
    scanf("%d", &chave);
    int tamanho = sizeof(VetB) / sizeof(VetB[0]);
    int resultado = buscasequencial(VetB, tamanho, chave);
    if (resultado != -1) {
        printf("Elemento encontrado na posição: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }
}