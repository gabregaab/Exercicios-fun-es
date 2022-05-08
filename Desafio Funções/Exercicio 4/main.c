#include <stdio.h>
#include <stdlib.h>
#include "exercicio4.h"

int lerDado();
int positivoNegativo();
int main()
{
    int x;
    x = lerDado();
    positivoNegativo(x);

    return 0;
}
int lerDado(){
    int valor;
        printf("Digite um valor: \n");
        scanf("%d", &valor);
        return valor;
}
