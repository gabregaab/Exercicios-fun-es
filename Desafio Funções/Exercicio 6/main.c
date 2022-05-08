#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "exercicio6.h"

int lerDado();
int lerDado1();
int main()
{
    int Hr, Min,opc;
    do{
    Hr = lerDado();
    Min = lerDado1();
    printf("\n");
    converterHora(Hr,Min);
    printf("\nPara sair digite 0 para continuar digite 1:\n");
    scanf("%d", &opc);
    }while( opc != 0 );

    return 0;
}
int lerDado(){
    int valor;
        printf("Digite a hora: \n");
        scanf("%d", &valor);
        return valor;
}
int lerDado1(){
    int valor;
        printf("Digite os minutos: \n");
        scanf("%d", &valor);
        return valor;
}

