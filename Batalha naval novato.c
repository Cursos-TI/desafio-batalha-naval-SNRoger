#include <stdio.h>

int main() {
    // Cria o tabuleiro 10x10
    int tabuleiro[10][10];
    int i, j;
    
    // Inicializa tudo com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // Posiciona navio 1 (horizontal) - linha 2, colunas 3, 4, 5
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    
    // Posiciona navio 2 (vertical) - coluna 7, linhas 5, 6, 7
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;
    
    // Exibe o tabuleiro
    printf("\n=== BATALHA NAVAL ===\n\n");
    
    // Cabeçalho com números das colunas
    printf("   ");
    for (j = 0; j < 10; j++) {
        printf(" %d ", j);
    }
    printf("\n");
    
    // Linha separadora
    printf("   ");
    for (j = 0; j < 10; j++) {
        printf("---");
    }
    printf("\n");
    
    // Exibe cada linha do tabuleiro
    for (i = 0; i < 10; i++) {
        printf("%d |", i);
        for (j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    printf("\n0 = Água | 3 = Navio\n\n");
    
    return 0;
}