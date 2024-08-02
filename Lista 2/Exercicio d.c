#include <stdio.h>
void main()

{
  float N1,N2,N3,N4,NE,MD1,MD2;

  printf("Digite a primeira nota: ");
  scanf("%f",&N1);
  printf("Digite a segunda nota: ");
  scanf("%f",&N2);
  printf("Digite a terceira nota: ");
  scanf("%f",&N3);
  printf("Digite a quarta nota: ");
  scanf("%f",&N4);
  MD1=((N1+N2+N3+N4)/4);
  if(MD1>=7)
  {
      printf("Aprovado \n",MD1);
  }
  else
    {
    printf("Digite uma quinta nota: ");
    scanf("%f",&NE);
    MD2=((MD1+NE)/2);
    if (MD2<5){
    printf("Reprovado\n");
    }else printf("Aprovado\n");

    }
    printf("O valor da media eh:%.3f ",MD1);
    printf("O valor da media eh:%.3f ",MD2);
}
