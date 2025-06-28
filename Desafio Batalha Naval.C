#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(){

    int tabuleiro[LINHAS][COLUNAS];
    int navio = 3;

    // iniciando o tabuleiro com água(0)
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;

            if(i == j && j < navio)
            {
                tabuleiro[i][j] = navio;   // posiciona o navil na diagonal
            }

            if (i + j == 10 - 1 && i < navio) {    // posicionando o navio na diagonal secundaria
               tabuleiro[i][j] = navio; 
            }

        }
    }

    // posionando o navio na horizontal
    tabuleiro[6][1] = navio;
    tabuleiro[6][2] = navio;
    tabuleiro[6][3] = navio;

    // posicionando o navio na vertical
    tabuleiro[7][8] = navio;
    tabuleiro[6][8] = navio;
    tabuleiro[5][8] = navio;

    // exibir tabuleiro
    printf("*Tabuleiro: Batalha Naval\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){

            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}
