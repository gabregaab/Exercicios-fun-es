#include <stdio.h>
#include <stdlib.h>

int inverterCaracter(int x){
    int manter, lembrar, inverso =0;
    manter = x;
    for ( ; x >0 ; ){

        lembrar = x %10;
        inverso = inverso *10 + lembrar;
        x /=10;
    }
    printf("Numero digitado foi: %d \n", manter);
    printf("Numero inverso eh: %d \n", inverso);
    }



