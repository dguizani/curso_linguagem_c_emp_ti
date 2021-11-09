#include <stdio.h>

#define JOGADOR_X 'X'
#define JOGADOR_O 'O'
#define    EMPATE 'E'

#define CARACTERE_BRANCO '_'

#define  QTD_LINHAS 3
#define QTD_COLUNAS 3


int main(int argc, char const *argv[])
{
    int linha;
    int coluna;

    int posicao;
    int aux_posicao;

    int jogada_valida;

    int cont_jogadas = 0;

    int tam_tabuleiro = QTD_LINHAS * QTD_COLUNAS;

    char jogador_atual = JOGADOR_X;

    char ganhador = EMPATE;

    char tabuleiro[QTD_LINHAS][QTD_COLUNAS];

    for (linha = 0; linha < QTD_LINHAS; linha += 1)
        for (coluna = 0; coluna < QTD_COLUNAS; coluna += 1)
            tabuleiro[linha][coluna] = CARACTERE_BRANCO;
    
    while (1)
    {
        printf("\n");

        for (linha = 0; linha < QTD_LINHAS; linha += 1)
        {
            for (coluna = 0; coluna < QTD_COLUNAS; coluna += 1)
                printf("%c ", tabuleiro[linha][coluna]);
            
            printf("\n");
        }

        printf("\nJogador %c sua vez\n", jogador_atual);
        scanf("%d", &posicao);

        if (!(posicao >= 1 && posicao <= 9))
        {
            printf("\nPosicao invalida, digite novamente.\n");

            continue;
        }

        aux_posicao = 1;
        jogada_valida = 1;

        for (linha = 0; linha < QTD_LINHAS; linha += 1)
        {
            if (posicao >= aux_posicao && posicao <= aux_posicao + QTD_COLUNAS - 1)
            {
                if (tabuleiro[linha][posicao - aux_posicao] == CARACTERE_BRANCO)
                    tabuleiro[linha][posicao - aux_posicao] = jogador_atual;

                else
                {
                    printf("\nEssa posicao ja foi preenchida, digite novamente.\n");

                    jogada_valida = 0;
                }
                
                break;
            }

            aux_posicao += QTD_COLUNAS;
        }

        if (!jogada_valida)
            continue;

        for (linha = 0; linha < QTD_LINHAS; linha += 1)
        {
            ganhador = jogador_atual;

            for (coluna = 1; coluna < QTD_COLUNAS; coluna += 1)
            {
                if (
                    tabuleiro[linha][coluna] == CARACTERE_BRANCO
                    || tabuleiro[linha][coluna] != tabuleiro[linha][coluna - 1]
                ) {
                    ganhador = EMPATE;

                    break;
                }
            }

            if (ganhador != EMPATE)
                break;
        }

        if (ganhador == EMPATE)
        {
            for (coluna = 0; coluna < QTD_COLUNAS; coluna += 1)
            {
                ganhador = jogador_atual;

                for (linha = 1; linha < QTD_LINHAS; linha += 1)
                {
                    if (
                        tabuleiro[linha][coluna] == CARACTERE_BRANCO
                        || tabuleiro[linha][coluna] != tabuleiro[linha - 1][coluna]
                    ) {
                        ganhador = EMPATE;

                        break;
                    }
                }

                if (ganhador != EMPATE)
                    break;
            }
        }

        if (ganhador == EMPATE)
        {
            ganhador = jogador_atual;

            for (linha = 1; linha < QTD_LINHAS; linha += 1)
            {
                if (
                    tabuleiro[linha][linha] == CARACTERE_BRANCO
                    || tabuleiro[linha][linha] != tabuleiro[linha - 1][linha - 1]
                ) {
                    ganhador = EMPATE;

                    break;
                }
            }
        }

        if (ganhador == EMPATE)
        {
            ganhador = jogador_atual;

            coluna = QTD_COLUNAS - 2;

            for (linha = 1; linha < QTD_LINHAS && coluna >= 0; linha += 1)
            {
                if (
                    tabuleiro[linha][coluna] == CARACTERE_BRANCO
                    || tabuleiro[linha][coluna] != tabuleiro[linha - 1][coluna + 1]
                ) {
                    ganhador = EMPATE;

                    break;
                }

                coluna -= 1;
            }
        }

        cont_jogadas += 1;

        if (ganhador != EMPATE || cont_jogadas == tam_tabuleiro)
            break;

        if (cont_jogadas % 2 == 0)
            jogador_atual = JOGADOR_X;
        
        else
            jogador_atual = JOGADOR_O;
    }

    if (ganhador != EMPATE)
        printf("\nO jogador %c ganhou!\n", ganhador);
    
    else
        printf("\nEmpatou!\n");

    for (linha = 0; linha < QTD_LINHAS; linha += 1)
    {
        for (coluna = 0; coluna < QTD_COLUNAS; coluna += 1)
            printf("%c ", tabuleiro[linha][coluna]);
        
        printf("\n");
    }

    return 0;
}
