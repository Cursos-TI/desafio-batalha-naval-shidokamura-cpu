#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[10][10] = {0}; // Inicializa o Tabuleiro de 10x10 com 0 (água).
    char coluna[10] = {1,2,3,4,5,6,7,8,9,10};
    int linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
 
    printf("Tabuleiro de Batalha Naval\n");
    printf(" * ");
    for (int l = 0; l < 10; l++) { // impressão da linha do tabuleiro 
        printf("%d ", coluna[l]);      
    }
    for (int l = 0; l < 10; l++) { //impressão da coluna do tabuleiro
        printf("\n %c ", linha[l]);
        for (int c = 0; c < 10; c++) {
            printf("%d ", tabuleiro[l][c]);
        }
    }
    //spawn dos navios 
    tabuleiro[2][3] = 3; // começo do navio
    tabuleiro[2][4] = 3; // meio do navio
    tabuleiro[2][5] = 3; // fim do navio
    
    tabuleiro[5][7] = 3; 
    tabuleiro[6][7] = 3;  
    tabuleiro[7][7] = 3; 
    // Imprime o tabuleiro atualizado com os navios
    printf("\n\nTabuleiro atualizado com navios:\n");
    printf(" * ");
    for (int l = 0; l < 10; l++) {
        printf("%d ", coluna[l]);      
    }
    for (int l = 0; l < 10; l++) {
        printf("\n %c ", linha[l]);
        for (int c = 0; c < 10; c++) {
            printf("%d ", tabuleiro[l][c]);
        }
    }
    printf("\n");
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
