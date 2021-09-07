#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        0 -> Nota 1
        1 -> Nota 2
        2 -> Nota 3
        3 -> Nota 4
    */
    float notas[4];
    
    /*
        0 -> Peso Nota 1
        1 -> Peso Nota 2
        2 -> Peso Nota 3
        3 -> Soma dos Pesos
    */
    int pesos[4];
    
    /*
        Nome do Aluno
    */
    char nome[25];

    printf("\n Digite o nome do aluno: ");
    scanf(" %[^\n]s", nome);

    printf("\n Digite as 3 notas do aluno.");
    printf("\n Nota 1: ");
    scanf("%f", &notas[0]);

    printf("\n Nota 2: ");
    scanf("%f", &notas[1]);

    printf("\n Nota 3: ");
    scanf("%f", &notas[2]);

    printf("\n Digite os pesos de cada nota do aluno.");
    printf("\n Peso 1: ");
    scanf("%d", &pesos[0]);

    printf("\n Peso 2: ");
    scanf("%d", &pesos[1]);

    printf("\n Peso 3: ");
    scanf("%d", &pesos[2]);

    pesos[3] = pesos[0] + pesos[1] + pesos[2];

    notas[3] = (notas[0] * pesos[0] + notas[1] * pesos[1] + notas[2] * pesos[2]) / pesos[3];

    printf("\n Dados do aluno %s.", nome);
    printf("\n Nota prova 1: %.2f", notas[0]);
    printf("\n Nota prova 2: %.2f", notas[1]);
    printf("\n Nota prova 3: %.2f", notas[2]);
    printf("\n Media: %.2f", notas[3]);

    return 0;
}
