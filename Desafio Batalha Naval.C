#include <stdio.h>

#define TAMANHO 10    // Tamanho do tabuleiro (10x10)

int tabuleiro[TAMANHO][TAMANHO];

int main() {

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando o navil na horizontal
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    // Posicionando o navil na vertical
    tabuleiro[6][8] = 3;
    tabuleiro[5][8] = 3;
    tabuleiro[4][8] = 3;

    // Exibir o tabuleiro 
    printf("*Tabuleiro: Batalha Naval \n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
