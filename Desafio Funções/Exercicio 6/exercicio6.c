#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int converterHora (int x, int y){

    int hora = 0;
    if(x >12){
        hora = x -12;
        return printf("A hora eh %d : %d P.M.", hora,y);

    }else{
     return printf("A hora eh %d : %d A.M.", x, y);

  }

}

