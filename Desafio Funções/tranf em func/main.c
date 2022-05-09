#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "transf.h"

int lancarDado();

int main() {
    int status = 0;
    int jogadas = 0;
    int ponto = 0;

    srand(time(NULL));

    // Primeira rodada
    jogada(lancarDado(),lancarDado());




    return EXIT_SUCCESS;
}


