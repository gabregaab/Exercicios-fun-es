#include <stdio.h>
#include <stdlib.h>
#include "exercicio8.h"

int lerDado();
int main()
{
    int x;
    x = lerDado();
    printf("\n");
    contaDigito(x);

    return 0;
}
int lerDado(){
    int valor;
        printf("Digite um valor: \n");
        scanf("%d", &valor);
        return valor;
}
