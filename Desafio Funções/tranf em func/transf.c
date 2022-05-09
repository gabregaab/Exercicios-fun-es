
int jogada (int x, int y){
    int soma =0;
    int status = 0;
    int ponto = 0;
    soma = x+y;
    if (soma == 7 || soma == 11) {
        status = 1;
    } else if (soma == 2 || soma == 3 || soma == 12) {
        status = -1;
    } else {
        status = 0;
        ponto = soma;

        // Rodadas subsequentes
        while (status == 0) {
            soma = lancarDado() + lancarDado();

            if (soma == ponto) {
                status = 1;
            } else if (soma == 7) {
                status = -1;
            }
        }
    }

    if (status == -1) {
        printf(">> voce perdeu. \n");
    } else {
        printf(">> voce venceu. \n");
    }
}
int lancarDado() {
    return (int) rand() % 6 + 1;
}
