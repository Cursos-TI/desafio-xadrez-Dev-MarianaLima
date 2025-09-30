#include <stdio.h>
#include <stdlib.h>


int main(){

    /*MOVIMENTANDO PEÇAS DE XADREZ*/

    int comando = 0;

    printf("Escolha uma peça para jogar:\n");
    printf("Digite 1. para mover o CAVALO\n");
    printf("Digite 2. para mover a TORRE\n");
    printf("Digite 3. para mover o BISPO\n");
    printf("Digite 4. para mover a RAINHA\n");
    scanf("%d", &comando);
    
    int movimento = 1;
    
    switch (comando)
    {
        case 1: //CAVALO
        while (movimento--){
            for(int i = 0; i < 2; i++){
                printf("Cima\n");
        }
            printf("Direita\n");
        }
            break;
        
        case 2://TORRE

        for (int i = 1; i <= 5; i++)
        {
            printf("TORRE: %d casas em linha reta\n", i);
        }
            break;
    
        case 3: //BISPPO
        for (int j=1; j <= 5; j++){
            printf("BISPO: %d casas na diagonal\n", j);
        }
            break;

         case 4: //RAINHA

        for (int k = 1; k <= 8; k++ )
        {
            printf("RAINHA: %d casas em qualquer direção\n",k );
        }
            break;
    }
    return 0;
}
    
  
