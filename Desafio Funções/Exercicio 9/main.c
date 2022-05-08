#include <stdio.h>
#include <stdlib.h>
#include "exercicio9.h"

int main()
{
    int x;
    x = lerDado();
    printf("\n");
    inverterCaracter(x);

    return 0;
}
int lerDado(){
    int valor;
        printf("Digite um valor : \n");
        scanf("%d", &valor);
        return valor;
}
