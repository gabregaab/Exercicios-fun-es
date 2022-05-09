#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lancarDados(){
 return (int)rand()%6 +1;
}
int craps(){


    int dado1,dado2,ponto,soma;
    //long semente;
    //time(&semente);
    //srand((unsigned)semente);
    srand(time(NULL));
    dado1 = lancarDados();
    dado2 = lancarDados();
    printf("\n Dado 1 :%d\n", dado1);
    printf("\n Dado 2 :%d\n", dado2);
    soma = dado1 + dado2;
    return soma;



}
int jogada1(){
    int soma, status, novosDados, ponto;
    soma = craps();
    if(soma == 7 || soma == 11){
        printf("seus dados foram: %d, Voce ganhou !", soma);
        status =1;
        system("pause");
    }else if(soma == 2 || soma == 3 || soma == 12){
        printf("seus dados foram: %d, Voce Perdeu !", soma);
        status = -1;
        system("pause");
    }else {
        printf("seus dados foram : %d, Ponto!\n", soma);
        status = 0;
        ponto = soma;
        system("pause");
        while(status == 0){
            novosDados = craps();
            if(novosDados == ponto){
                status = 1;
                jogada1();
                system("pause");
            } else if(novosDados == 7)
            {
                printf("seus dados foram: %d, Voce Perdeu !", soma);
                status = -1;
            }
        }
    }
/*switch(soma){
    case 7 :
        printf("Voce Ganhou seu dado foi %d!\n", soma);
        system("pause");
        break;
    case 11:
        printf("Voce Ganhou seu dado foi %d!\n", soma);
        system("pause");
        break;
    case 2  :
        printf("Voce Perdeu seu dado foi %d!\n", soma);
        system("pause");
        break;
    case 3  :
        printf("Voce Perdeu seu dado foi %d!\n", soma);
        system("pause");
        break;
    case 12 :
        printf("Voce Perdeu seu dado foi %d!\n", soma);
        system("pause");
        break;
    case 4 :
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", soma);
        system("pause");
        jogada2(soma);
        break;
    case 5 :
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", soma);
        system("pause");
        jogada2(soma);
        break;
    case 6 :
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", soma);
        system("pause");
        jogada2(soma);
        break;
    case 8 :
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", soma);
        system("pause");
        jogada2(soma);
        break;
    case 9 :
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", soma);
        system("pause");
        jogada2(soma);
        break;
    case 10:
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", soma);
        system("pause");
        jogada2(soma);
        break;
    }
*/}
/*int jogada2(int ponto){
    int novosDados = 0;
    novosDados = craps();
    if (novosDados == ponto){
        jogada1();

    }
switch(novosDados){
    case 2  :
        printf("Voce Perdeu seu dado foi %d!\n", novosDados);
        system("pause");
        break;
    case 3  :
        printf("Voce Perdeu seu dado foi %d!\n", novosDados);
        system("pause");
        break;
    case 7  :
        printf("Voce Perdeu seu dado foi %d!\n", novosDados);
        system("pause");
        break;
    case 11 :
        printf("Voce Perdeu seu dado foi %d!\n", novosDados);
        system("pause");
        break;
    case 12 :
        printf("Voce Perdeu seu dado foi %d!\n", novosDados);
        system("pause");
        break;
    case 4 :
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", novosDados);
        jogada2(novosDados);
        system("pause");
        break;
    case 5 :
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", novosDados);
        jogada2(novosDados);
        system("pause");
        break;
    case 6 :
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", novosDados);
        jogada2(novosDados);
        system("pause");
        break;
    case 8 :
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", novosDados);
        jogada2(novosDados);
        system("pause");
        break;
    case 9 :
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", novosDados);
        jogada2(novosDados);
        system("pause");
        break;
    case 10:
        printf("Ponto seu dado foi %d! Jogue novamente os dados\n", novosDados);
        jogada2(novosDados);
        system("pause");
        break;
    }
}*/
