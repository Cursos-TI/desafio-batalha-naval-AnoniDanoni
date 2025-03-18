#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

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
    printf("\n    0 1 2 3 4 5 6 7 8 9\n    _ _ _ _ _ _ _ _ _ _ \n\n"); //numeração colunas
    for (int i = 0; i < 10; i++) { 
        printf("%d|  ", i); // Numeração das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n\n");
    }
    

        


    return 0;
}    

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
