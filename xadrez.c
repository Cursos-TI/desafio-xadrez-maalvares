#include <stdio.h> 

int main(){
    //Mover a torre 5 casas para a direita
    printf("Movimentação da Torre: \n");    
    for (int t = 0; t < 5; t++){
        printf("Direita.\n"); //imprime a direção do movimento de acordo com a quantidade de repetições necessárias
    }

    //Mover o bispo 5 casas para a diagonal direita
    printf("\nMovimentação do Bispo: \n");    
    for (int b = 0; b < 5; b++){
        printf("Cima, Direita.\n"); //imprime a direção do movimento de acordo com a quantidade de repetições necessárias
    }

    //Mover a rainha 8 casas para a esquerda
    printf("\nMovimentação da Rainha: \n");    
    for (int r = 0; r < 8; r++){
        printf("Esquerda.\n"); //imprime a direção do movimento de acordo com a quantidade de repetições necessárias
    }    

    return 0;
}   