#include <stdio.h>
#include <stdlib.h>
#include "exercicio07.h"

int lerDado();
int lerDado1();
int main()
{
    float valor, atraso;
    valor = lerDado();
    atraso = lerDado1();
    valorPagamento(valor, atraso);


    return 0;
}
int lerDado(){
    int valor;
        printf("Digite o valor da prestacao: \n");
        scanf("%d", &valor);
        return valor;
}
int lerDado1(){
    int valor;
        printf("Digite quantos dias estao de atraso na prestacao: \n");
        scanf("%d", &valor);
        return valor;
}
