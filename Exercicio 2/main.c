#include <stdio.h>
#include <stdlib.h>
#include "exercicio2.h"

int imprimir();
int lerDado();
int main()
{    int x;
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
