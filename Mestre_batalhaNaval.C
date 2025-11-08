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
    //Navio 1 - Cone

    // tabuleiro[0][2] = 3;
    // tabuleiro[1][1] = 3;
    // tabuleiro[1][2] = 3;
    // tabuleiro[1][3] = 3;
    // tabuleiro[2][0] = 3;
    // tabuleiro[2][1] = 3;
    // tabuleiro[2][2] = 3;
    // tabuleiro[2][3] = 3;
    // tabuleiro[2][4] = 3;

    //Navio 2 - Cruz
    // tabuleiro[5][7] = 3;
    // tabuleiro[6][7] = 3;
    // tabuleiro[7][7] = 3;


    //Printa colunas
    for(int i=0; i<10; i++){
        printf(" %c", coluna[i]);
        }
    printf("\n");

    //printa linhas e tabuleiro
    for( int j =0; j<10; j++){
        printf(" %d", linha[j]);

        for(int k=0; k<10; k++){

            // Cone
            if(j == 0 and k == 2 ){
                for(int n=0; n<3; n++){
                    tabuleiro[j][k] = 3;
                    tabuleiro[j+1][k-n+1] = 3;
                    for (int m=0; m<5; m++){
                        tabuleiro[j+2][m-j] = 3;
                    }
                }   
            }
            // Cruz
            if(j == 5 and k == 3 ){
                for(int n=0; n<5; n++){
                    tabuleiro[j][k] = 3;
                    tabuleiro[j+1][j+n-4] = 3;
                    tabuleiro[j+2][k] = 3;
                }   
            }

            // Octaedro
            if (j == 2 and k == 7){
                for (int n=0; n<3; n++){
                    tabuleiro[j+n][k] = 5;
                    tabuleiro[j+1][k+n-1] = 5;
                }
            }
        
            
            
            printf(" %d",tabuleiro[j][k]);
        }
        printf("\n");
    }
}

