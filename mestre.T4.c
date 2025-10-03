#include <stdio.h>

void movimentoTorre(int moverT){

    if(moverT > 0 && moverT <= 5){
        printf("Linha reta\n");
        movimentoTorre(moverT - 1);
    }
}

void movimentoBispo(int moverB){

    if(moverB > 0 && moverB <= 5){
        printf("Diagonal\n");
        movimentoBispo(moverB - 1);
    }
}

void movimentoRainha(int moverR){

    if(moverR > 0 && moverR <= 8){
        printf("Qualquer direção\n");
        movimentoRainha(moverR - 1);
    }
}


void movimentoCavalo (int moverC){
    for( int i = -2, j = -1; i <= 2 && j <=2; i++,j++){
        if(moverC > 0 && moverC <= 3){
             printf("cavalo:%d\n",i,j);
        }
       
    }
}

int main(){

     int comando = 0;

    printf("Escolha uma peça para jogar:\n");
    printf("Digite 1. para mover o CAVALO\n");
    printf("Digite 2. para mover a TORRE\n");
    printf("Digite 3. para mover o BISPO\n");
    printf("Digite 4. para mover a RAINHA\n");
    scanf("%d", &comando);




    switch (comando)
    {
    case 1: 
        movimentoTorre(5);
        break;
    

        case 2:
        movimentoBispo(5);
        break;

        case 3:
        movimentoRainha(8);
        break;

        case 4:
        movimentoCavalo(comando);
        break;
    }
}

