#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define TAMANHO 5

//Defindo cada criação de barco em funções ou recursividade
void posicionar_barco_vertical(int tabuleiro[LINHAS][COLUNAS], int linhan, int colunan, int tamanho){
if (linhan + tamanho - 1 < LINHAS){ //caso for passar da linha nem se cria o barco
    for (int i = 0; i < tamanho; i++){
        if (tabuleiro[linhan + i][colunan +i] != 0) {
            printf("Erro: O barco nao pode ser posicionado em (%d, %d) devido a sobreposicao.\n", linhan, colunan);
            return;
        }
        tabuleiro[linhan + i][colunan] = 3;
        }
    }
}
void posicionar_barco_horizontal(int tabuleiro[LINHAS][COLUNAS], int linhan, int colunan, int tamanho){
if (linhan + tamanho - 1 < LINHAS){
    for (int i = 0; i < tamanho; i++){
        if (tabuleiro[linhan + i][colunan+i ] != 0) {
            printf("Erro: O barco nao pode ser posicionado em (%d, %d) devido a sobreposicao.\n", linhan, colunan);
            return;
        }
        tabuleiro[linhan][colunan+i] = 3;
        }
    }
}
void posicionar_barco_diagonal(int tabuleiro[LINHAS][COLUNAS], int linhan, int colunan, int tamanho){
if (linhan + tamanho - 1 < LINHAS && colunan + tamanho - 1 < COLUNAS){
    for (int i = 0; i < tamanho; i++){
        if (tabuleiro[linhan + i][colunan+i] != 0) {
            printf("Erro: O barco nao pode ser posicionado em (%d, %d) devido a sobreposicao.\n", linhan, colunan);
            return;
        }
        tabuleiro[linhan+i][colunan+i] = 3;
        }
    }
}

// Função para habilidade Cone
void habilidade_cone(int tabuleiro[LINHAS][COLUNAS], int linhan, int colunan) {
    int matriz[TAMANHO][TAMANHO] = {
        {0, 0, 1, 0, 0}, 
        {0, 1, 1, 5, 0}, 
        {1, 1, 1, 1, 1}, 
        {0, 0, 0, 0, 0}, 
        {0, 0, 0, 0, 0}};
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[linhan + i][colunan + j] == 0) {
                tabuleiro[linhan + i][colunan + j] = matriz[i][j];
            }
        }
    }
}

// Função para habilidade Cruz
void habilidade_cruz(int tabuleiro[LINHAS][COLUNAS], int linhan, int colunan) {
    int matriz[TAMANHO][TAMANHO] = {
        {0, 0, 1, 0, 0}, 
        {1, 1, 1, 1, 1}, 
        {0, 0, 1, 0, 0}, 
        {0, 0, 0, 0, 0}, 
        {0, 0, 0, 0, 0}};
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[linhan + i][colunan + j] == 0) {
                tabuleiro[linhan + i][colunan + j] = matriz[i][j];
            }
        }
    }
}

// Função para habilidade Octaedro
void habilidade_octaedro(int tabuleiro[LINHAS][COLUNAS], int linhan, int colunan) {
    int matriz[TAMANHO][TAMANHO] = {
        {0, 0, 1, 0, 0}, 
        {0, 1, 1, 1, 0}, 
        {0, 0, 1, 0, 0}, 
        {0, 0, 0, 0, 0}, 
        {0, 0, 0, 0, 0}};
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[linhan + i][colunan + j] == 0) {
                tabuleiro[linhan + i][colunan + j] = matriz[i][j];
            }
        }
    }
}

int main(){

    //gerando tabuleiro
    int tabuleiro [LINHAS][COLUNAS] = {0};

    //gerando barcos
    posicionar_barco_vertical (tabuleiro, 1,2,3);
    posicionar_barco_horizontal(tabuleiro,1,2,3); //pra mostrar o erro de sobreposição
    posicionar_barco_horizontal(tabuleiro,3,5,3);
    posicionar_barco_diagonal(tabuleiro, 7,1,3);
    posicionar_barco_diagonal(tabuleiro, 7,1,3);
    
    //printando na tela o tabuleiro
    printf("\n    0   1   2   3   4   5   6   7   8   9\n    _   _   _   _   _   _   _   _   _   _ \n\n"); //numeração colunas
    for (int i = 0; i < 10; i++) { 
        printf("%d|  ", i); // Numeração das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d   ", tabuleiro[i][j]);
        }
        printf("\n\n");
    }
    
    habilidade_cone(tabuleiro, 1, 2);
    habilidade_cruz(tabuleiro, 3, 3);
    habilidade_octaedro(tabuleiro, 6, 6); 
        
    printf("\n    0   1   2   3   4   5   6   7   8   9\n    _   _   _   _   _   _   _   _   _   _ \n\n"); //numeração colunas
    for (int i = 0; i < 10; i++) { 
        printf("%d|  ", i); // Numeração das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d   ", tabuleiro[i][j]);
        }
        printf("\n\n");
    }


    return 0;
}    