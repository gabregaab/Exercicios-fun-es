#include <stdio.h>
#include <stdlib.h>


float somaImposto (float x, float y){

    float custo,taxa;
    taxa = (y/100.0) + 1.0;
    custo = x * taxa ;

    printf("o valor do custo com o imposto eh de R$ %.2lf \n", custo);
    return 0;

}
