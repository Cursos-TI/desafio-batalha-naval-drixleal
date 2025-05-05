#include <stdio.h>


// Tamanho fixo do tabuleiro e dos navios
#define LINHAS 10
#define COLUNAS 10

int main(){

    
    
    printf("\n\n ==== Bem-vindo a Super Batalha Naval!! ====\n"); 
    printf("Powered by Drix\n\n");
    printf("**Desafio Batalha Naval - Mestre**\n\n");

    /*-------------------------------------------------------------------*/


    int cone = 10;


    int tabuleiro[LINHAS][COLUNAS]; //Declaração do array, ou seja, o tamanho do campo

    for (int i = 0; i < LINHAS; i++) //Declaração da "água"
    {
        for (int j = 0; j < COLUNAS; j++)
        {
                tabuleiro[i][j] = 0;

        }
        
    }
/*-------------------------------------------------------------------*/

    //Loop para o cone
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if ((i == 0 && j == 2) || (i == 1 && j > 0 && j < 4) || (i == 2 && j >= 0 && j < 5))
            {
                tabuleiro[i][j] = 3;
            }
            
        }
        
    }

/*-------------------------------------------------------------------*/

    //Loop para cruz
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if ((i == 4 && j == 2) || (i == 5 && j < 5) || (i == 6 && j == 2))
            {
                tabuleiro[i][j] = 3;
            }
            
        }
        
    }

/*-------------------------------------------------------------------*/

    //Loop para o octaedro
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if ((i == 7 && j == 7) || (i == 8 && j > 5 && j < 9) || (i == 9 && j == 7))
            {
                tabuleiro[i][j] = 3;
            }
            
        }
        
    }
    
/*-------------------------------------------------------------------*/    
    

    //Exposição do tabuleiro
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            
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