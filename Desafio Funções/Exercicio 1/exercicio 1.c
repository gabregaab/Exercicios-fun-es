#include <stdio.h>
#include <stdlib.h>


int imprimir (int x){


    for(int i=1 ; i<=x ; i++){
        int contador =1;
        do{

            printf("%d ", i);
            contador+=1;

        }while (contador <= i);
        printf("\n");
    }

return 0;
}
