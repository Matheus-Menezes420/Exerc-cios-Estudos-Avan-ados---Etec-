#include<stdio.h>
void main()
{
int A,B,C,D;
printf("Digite o valor da vari�vel A: ");
scanf("%d",&A);
printf("Digite o valor da vari�vel B: ");
scanf("%d",&B);
printf("Digite o valor da vari�vel C: ");
scanf("%d",&C);
printf("Digite o valor da vari�vel D: ");
scanf("%d",&D);
//Adi��o
int Add_AB=A+B;
int Add_AC=A+C;
int Add_AD=A+D;
int Add_BC=B+A;
int Add_BD=B+D;
int Add_CD=C+D;
//Multiplica��es
int Mul_AB=AB;
int Mul_AC=AC;
int Mul_AD=AD;
int Mul_BC=BA;
int Mul_BD=BD;
int Mul_CD=CD;
printf("Valores da adi��o das vari�veis:\n");
printf("Soma de A e B:%d \n",Add_AB);
printf("Soma de A e C:%d\n",Add_AC);
printf("Soma de A e D:%d\n",Add_AD);
printf("Soma de B e C:%d\n",Add_AC);
printf("Soma de B e D:%d\n",Add_AD);
printf("Soma de C e D:%d\n",Add_CD);
printf("Valores da multiplica��o das vari�veis:\n");
printf("Produto de A e B:%d \n",Mul_AB);
printf("Produto de A e C:%d\n",Mul_AC);
printf("Produto de A e D:%d\n",Mul_AD);
printf("Produto de B e C:%d\n",Mul_AC);
printf("Produto de B e D:%d\n",Mul_AD);
printf("Produto de C e D:%d",Mul_CD);
}
