#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Nível Novato - Posicionamento dos Navios

    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int linha[10] = {1,2,3,4,5,6,7,8,9,10};
    int tabuleiro[10][10] = {0};

    printf("  ");
    
    //Posiciona navios
    //Navio 1 - Horizontal

    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    //Navio 2 - Vertical
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;


    //Printa colunas
    for(int i=0; i<10; i++){
        printf(" %c", coluna[i]);
        }
    printf("\n");

    //printa linhas e tabuleiro
    for( int j =0; j<10; j++){
        printf(" %d", linha[j]);
        for(int k=0; k<10; k++){
            printf(" %d",tabuleiro[j][k]);
        }
        printf("\n");


    }
}

