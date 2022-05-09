#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogarDado();
int main()
{
    int opc, novamente;
    opc = jogarDado();
    if(opc == 1){
    while(novamente != 1);
        jogada1();

        printf("voce gostaria jogar novamente? 1 para sim e 2 para nao.\n");
        scanf("%d", &novamente);
        printf("\nObrigado por jogar!");


    }else printf("\nAte a proxima!");
    return 0;
}
int jogarDado(){
    int valor;
        printf("Digite 1 para jogar os dados: \n");
        scanf("%d", &valor);
        return valor;
}
