#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){

    /*MOVIMENTANDO PEÇAS DE XADREZ*/

    int comando = 0;


    printf("Escolha uma peça para jogar:\n");
    printf("Digite 1. para TORRE:\n");
    printf("Digite 2. para BISPO:\n");
    printf("Digite 3. para RAINHA:\n");
    scanf("%d",&comando);

    // TORRE //
    for (int i = 0; i <= 5; i++)
    {
        printf("TORRE: %d linha reta\n",i);
    }
    
    // BISPO //
    int j = 1;
    while ( j <= 5);
    {
        printf("BISPO: %d diagonal/cima/direita\n",j);
        j++;
    }
    
    // RAINHA //
    int k = 1;
    do {
        printf("RAINH: %d oito casas a esqueda",k);
        k++;
        }   while (k <= 8);
     
    return 0;
}