#include <stdio.h>
#include <stdlib.h>
#include "exercicio1.h"

int lerDado();
int imprimir();
int main()
{
    int x;
    x = lerDado();
    printf("\n");
    imprimir(x);
}
int lerDado(){
    int valor;
        printf("Digite um valor: \n");
        scanf("%d", &valor);
        return valor;
}
