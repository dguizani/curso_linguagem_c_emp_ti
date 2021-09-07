#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[3];

    char linha_1[3];
    char linha_2[3];
    char linha_3[3];

    /*
                 [0] [1] [2]
        linha_1:  _   _   _
        linha_2:  _   _   _
        linha_3:  _   _   _
    */

    char tabuleiro[3][3];

    /*
        tabuleiro:
                [0] [1] [2]
            [0]  X   _   _
            [1]  _   X   _
            [2]  _   _   X
    */

    tabuleiro[0][0] = 'X';
    tabuleiro[0][1] = '_';
    tabuleiro[0][2] = '_';
    tabuleiro[1][0] = '_';
    tabuleiro[1][1] = 'X';
    tabuleiro[1][2] = '_';
    tabuleiro[2][0] = '_';
    tabuleiro[2][1] = '_';
    tabuleiro[2][2] = 'X';

    printf("\n Jogo da Velha");
    printf("\n %c | %c | %c", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("\n---+---+---");
    printf("\n %c | %c | %c", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("\n---+---+---");
    printf("\n %c | %c | %c", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);

    return 0;
}
