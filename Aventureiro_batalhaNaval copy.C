#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio

int main() {

    // Nível Novato -- Posicionamento dos Navios

    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int linha[10] = {0,1,2,3,4,5,6,7,8,9};
    int tabuleiro[10][10] = {0};

    printf("  ");
    
    //Posiciona navio
    //Navio 1 - Horizontal

    tabuleiro[9][3] = 3;
    tabuleiro[9][4] = 3;
    tabuleiro[9][5] = 3;

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

            // Aqui para posicionar na diagonal principal fazemos um loop que percorre as linhas e colunas simultaneamente e atribui o valor 3 (representando um navio) às posições correspondentes no tabuleiro.
            // exemplo tabuleiro[0][0], tabuleiro[1][1], tabuleiro[2][2], etc.

            if(linha[j] == k ){
                for(int n=0; n<3; n++){
                    tabuleiro[n][n+k] = 3;
            }}

            
            // Aqui é o inverso da diagonal principal, ou seja, da direita para a esquerda.
            // exemplo tabuleiro[2][7], tabuleiro[3][6], tabuleiro[4][5], etc.
            // Como são 9 colunas, começamos a partir da coluna 9 e subtraímos o índice da linha para obter a coluna correta e atribuir o valor 3 (representando um navio) às posições correspondentes no tabuleiro.
            
            if(linha[j] == k ){
                for(int n=2; n<5; n++){
                    tabuleiro[n][9-n] = 3;
            }}

            
            
            printf(" %d",tabuleiro[j][k]);
        }
        printf("\n");
    }
}

