#include <stdio.h>
void main()
{
int votosA, votosB, votosC, votosNulos, votosBrancos;
int totalEleitores;
double percVotosValidos, percVotosA, percVotosB, percVotosC, percVotosNulos, percVotosBrancos;

printf("Digite a quantidade de votos válidos para o candidato A: ");
scanf("%d", &votosA);
printf("Digite a quantidade de votos válidos para o candidato B: ");
scanf("%d", &votosB);
printf("Digite a quantidade de votos válidos para o candidato C: ");
scanf("%d", &votosC);
printf("Digite a quantidade de votos nulos: ");
scanf("%d", &votosNulos);
printf("Digite a quantidade de votos em branco: ");
scanf("%d", &votosBrancos);
totalEleitores = votosA + votosB + votosC + votosNulos + votosBrancos;

percVotosValidos = ((double)(votosA + votosB + votosC) / totalEleitores) * 100;
percVotosA = ((double)votosA / totalEleitores) * 100;
percVotosB = ((double)votosB / totalEleitores) * 100;
percVotosC = ((double)votosC / totalEleitores) * 100;
percVotosNulos = ((double)votosNulos / totalEleitores) * 100;
percVotosBrancos = ((double)votosBrancos / totalEleitores) * 100;

printf("Número total de eleitores: %d\n", totalEleitores);
printf("Percentual de votos válidos: %.2f%%\n", percVotosValidos);
printf("Percentual de votos válidos do candidato A: %.2f%%\n", percVotosA);
printf("Percentual de votos válidos do candidato B: %.2f%%\n", percVotosB);
printf("Percentual de votos válidos do candidato C: %.2f%%\n", percVotosC);
printf("Percentual de votos nulos: %.2f%%\n", percVotosNulos);
printf("Percentual de votos em branco: %.2f%%\n", percVotosBrancos);
}
