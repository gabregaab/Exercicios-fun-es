#include <stdio.h>
#include <stdlib.h>
#include "exercicio3.h"

int lerDado();
int somar();
int main()
{
    int a,b,c;
    a = lerDado();
    b = lerDado();
    c = lerDado();
    printf("\n");
    printf("o valor da soma eh : %d\n", somar(a,b,c));
}
int lerDado(){
    int valor;
        printf("Digite um valor a ser somado: \n");
        scanf("%d", &valor);
        return valor;
}
