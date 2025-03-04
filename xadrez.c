#include <stdio.h> 

//função recursiva para imprimir movimentação da Torre de acordo com a quantidade de casas informadas 
void movimentacaoTorre(int t){
    if (t > 0){
        printf("Direita\n");
        movimentacaoTorre(t - 1);
    }    
}

//função recursiva para imprimir movimentação da Rainha de acordo com a quantidade de casas informadas
void movimentacaoRainha(int r){
    if (r > 0){
        printf("Esquerda\n");
        movimentacaoRainha(r - 1);
    }    
}

//função recursiva para imprimir movimentação do Bispo de acordo com a quantidade de casas informadas usando loops aninhados
void movimentacaoBispo(int b){
    int i, j;
    if (b > 0){
        for (i = 0; i < 1; i++){
            for (j = 0; j < 1; j++){
                printf("Direita, ");
            }
            printf("Cima\n");
        }        
        movimentacaoBispo(b - 1);
    }    
}

int main(){
    
    //Mover a torre 5 casas para a direita
    printf("Movimentação da Torre: \n");    
    movimentacaoTorre(5);

    //Mover a rainha 8 casas para a esquerda
    printf("\nMovimentação da Rainha: \n");    
    movimentacaoRainha(8); 

    //Mover o bispo 5 casas para a diagonal direita
    printf("\nMovimentação do Bispo: \n");    
    movimentacaoBispo(5);

   //Mover o cavalo dois para Cima e um para a direita usando loops complexos
    printf("\nMovimentação do Cavalo: \n");
    for (int i = 0, j = 0; i < 2; i++, j++){
        printf("Cima, ");
        if(j == 0){ // Pula a iteração quando j é o
            continue;
        }
        printf("Direita");
        printf("\n");
    }

    return 0;
}   