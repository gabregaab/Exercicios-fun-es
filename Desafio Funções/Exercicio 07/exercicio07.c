#include <stdio.h>
#include <stdlib.h>



int valorPagamento (float x, float y){
    int valor;
    valor = x;
    if (y>0){
        x *= 0.03;
        for( int i= 0; i <= y; i++){
           x *= 1.001;
        }
            x = valor + x;
    }else {return printf("valor a pagar R$%.2lf \n", x);
    }
    return printf("valor a pagar R$%.2lf \n", x);
}
