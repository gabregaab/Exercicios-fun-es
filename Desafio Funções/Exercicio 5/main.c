#include <stdio.h>
#include <stdlib.h>
#include "exercicio5.h"

float lerDado();
float lerDado1();

int main()
{
    float x, y;
    x = lerDado();
    y = lerDado1();
    somaImposto(x,y);

    return 0;
}
float lerDado(){
    float valor;
        printf("Digite o valor do custo da mercadoria: \n");
        scanf("%f", &valor);
        return valor;
}
float lerDado1(){
    float valor1;
        printf("Digite o valor do imposto em %%: \n");
        scanf("%f", &valor1);
        return valor1;
}
