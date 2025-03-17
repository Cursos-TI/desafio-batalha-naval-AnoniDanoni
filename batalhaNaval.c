#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    #include <stdio.h>
    int tabuleiro [10][10] = {
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0, 0, 0, 0 ,0 ,0 ,0 ,0 ,0 ,0}

    };

    int navio1 = 3;
    int navio2 = 3;
    navio1 = tabuleiro[2][3] = 3;
    navio1 = tabuleiro[2][4] = 3;
    navio1 = tabuleiro[2][5] = 3;
    navio2 = tabuleiro[8][4] = 3;
    navio2 = tabuleiro[8][5] = 3;
    navio2 = tabuleiro[8][6] = 3;
       
    
    
    
    //printando na tela o tabuleiro
    printf("\n   0 1 2 3 4 5 6 7 8 9\n\n"); //numeração colunas
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i); // Numeração das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n\n");
    }
    
       
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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

    return 0;
}
