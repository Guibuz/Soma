//GUILHERME BUZATTO DONAT - 399042
#include<stdlib.h>
#include<stdio.h>

void soma() //função de soma
{
    int a,b,c;
    printf("Digite o numero que deseja somar\n");
    scanf("%d", &a);
    printf("Digite o segundo numero que deseja somar\n");
    scanf("%d", &b);
    while (a != 0) //Laço de repetição para rodar até chegar no resultado
    {
        c = b & a; //c recebe o valor de and de b & a
        b = b ^ a; //b recebe o valor de xor de b & a
        c = c << 1; //c recebe a mudança de bit de c
        a = c;
    }
    printf("Soma: %d\n",b);
}

void sub() //funcao de subtração
{
    int a,b,c;
    printf("Digite o numero que deseja subtrair\n");
    scanf("%d", &a);
    printf("Digite o segundo numero que deseja subtrair\n");
    scanf("%d", &b);
    while (b != 0) //Laço de repetição para rodar até chegar no resultado
    {
        a = a ^ b; //a recebe o valor de xor de a & b
        c = a & b; //c recebe o valor de and de a & b
        b = c << 1; //b recebe a mudança de bit do c
        c = a;
    }
    printf("sub: %d\n",c);
}

int main(){ //função principal
  soma();
  sub();
  return 0;
}
