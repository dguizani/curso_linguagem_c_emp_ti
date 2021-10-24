#include <stdio.h>

#define  NUM_LINHAS 3
#define NUM_COLUNAS 3

int main(int argc, char const *argv[])
{
    char matriz[NUM_LINHAS][NUM_COLUNAS];

    int linha = 0;
    int coluna = 0;

    /*
         linhas: 0 0 0 1 1 1 2 2 2
        colunas: 0 1 2 0 1 2 0 1 2
    */

    /*
         linha: 3
        coluna: 0
    */

    while (linha != NUM_LINHAS)
    {
        while (coluna != NUM_COLUNAS)
        {
            matriz[linha][coluna] = '_';

            coluna += 1;
        }

        coluna = 0;
        linha += 1;
    }

    linha = 0;

    while (linha != NUM_LINHAS)
    {
        while (coluna != NUM_COLUNAS)
        {
            printf("%c ", matriz[linha][coluna]);

            coluna += 1;
        }

        printf("\n");

        coluna = 0;
        linha += 1;
    }

    printf("\n\n");

    for (linha = 0; linha != NUM_LINHAS; linha += 1)
    {
        for (coluna = 0; coluna != NUM_COLUNAS; coluna += 1)
            printf("%c ", matriz[linha][coluna]);
        
        printf("\n");
    }

    return 0;
}
