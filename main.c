//GUILHERME BUZATTO DONAT - 399042
#include<stdlib.h>
#include<stdio.h>

void soma()
{
    int a,b,c;
    printf("Digite o numero que deseja somar\n");
    scanf("%d", &a);
    printf("Digite o segundo numero que deseja somar\n");
    scanf("%d", &b);
    while (a != 0) 
    {
        c = b & a;
        b = b ^ a;
        c = c << 1;
        a = c;
    }
    printf("Soma: %d\n",b);
}

void sub()
{
    int a,b,c;
    printf("Digite o numero que deseja subtrair\n");
    scanf("%d", &a);
    printf("Digite o segundo numero que deseja subtrair\n");
    scanf("%d", &b);
    while (b != 0) 
    {
        a = a ^ b;
        c = a & b;
        b = c << 1;
        c = a;
    }
    printf("sub: %d\n",c);
}

int main(){
  soma();
  sub();
  return 0;
}
