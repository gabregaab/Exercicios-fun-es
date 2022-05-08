#include <stdio.h>
#include <stdlib.h>

int contaDigito (int x){
    int contaDigitos = 0;
    if (x == 0) contaDigitos = 1;
    else
         while (x != 0)
        {
            contaDigitos = contaDigitos + 1;
            x = x / 10;
         }
    printf("o numero de digitos eh %d\n", contaDigitos);
    return 0;
 }
