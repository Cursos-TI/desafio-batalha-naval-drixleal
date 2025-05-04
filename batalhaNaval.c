#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.



// Tamanho fixo do tabuleiro e dos navios

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3


int main() {

    char linha  [TAMANHO_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Letras para as linhas do tabuleiro
    int coluna  [TAMANHO_TABULEIRO] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10}; // Números para as colunas do tabuleiro

    
    printf("\n\n ==== Bem-vindo a Super Batalha Naval!! ====\n"); 
    printf("Powered by Drix\n\n");
    printf("**Desafio Batalha Naval - Novato**\n");

    /*-------------------------------------------------------------------*/

    // 1. Declarar e inicializar o tabuleiro 10x10 com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Preenche todas as posições com 0 (água)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    /*-------------------------------------------------------------------*/

    // 2. Criar os dois navios (valores 3 em arrays unidimensionais)
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3}; // Representa navio horizontal
    int navio_vertical[TAMANHO_NAVIO]   = {3, 3, 3}; // Representa navio vertical

    /*-------------------------------------------------------------------*/

    // 3. Definir as posições iniciais dos navios (linha, coluna)
    // OBS: Estas posições devem ser válidas e não podem se sobrepor
    int linha_horizontal = 2;
    int coluna_horizontal = 4;

    int linha_vertical = 5;
    int coluna_vertical = 7;

    /*-------------------------------------------------------------------*/

    // 4. Verificar se os navios cabem no tabuleiro e não se sobrepõem

    // Verificar navio horizontal
    if (coluna_horizontal + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        int sobreposicao = 0;

        // Verificar sobreposição
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha_horizontal][coluna_horizontal + i] != 0) {
                sobreposicao = 1;
                break;
            }
        }

        if (!sobreposicao) {
            // Posicionar o navio horizontal
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_horizontal][coluna_horizontal + i] = navio_horizontal[i];
            }
        }
    }


    /*-------------------------------------------------------------------*/


    // Verificar navio vertical
    if (linha_vertical + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        int sobreposicao = 0;

        // Verificar sobreposição
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha_vertical + i][coluna_vertical] != 0) {
                sobreposicao = 1;
                break;
            }
        }

        if (!sobreposicao) {
            // Posicionar o navio vertical
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_vertical + i][coluna_vertical] = navio_vertical[i];
            }
        }
    }


    /*-------------------------------------------------------------------*/


    // 5. Exibir o tabuleiro na tela
    printf("\n=== TABULEIRO BATALHA NAVAL ===\n\n");

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    /*-------------------------------------------------------------------*/



    printf("\n\nSaindo da Super Batalha Naval!");

    printf("\n\n=================================\n");
    printf("\n Obrigado por usar o programa!\n");
    printf("    Powered by Drix\n\n");
    printf("=================================\n\n");

    return 0;
}