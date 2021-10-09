#include <stdio.h>

#define TAM_VETOR 8

int main(int argc, char const *argv[])
{
    float notas[TAM_VETOR];

    float media = 0;

    int pos_nota = 0;

    /*
        numero da nota   -> 1 2 3 4 5 ....
        posição do vetor -> 0 1 2 3 4 ....
    */

    while (pos_nota != TAM_VETOR)
    {
        printf("Digite a nota %d: ", pos_nota);
        scanf("%f", &notas[pos_nota - 1]);

        pos_nota += 1;
    }

    // 5 7 4 2 1

    for (pos_nota = 0; pos_nota != TAM_VETOR; pos_nota += 1)
        media += notas[pos_nota];

    media /= TAM_VETOR;

    for (pos_nota = 0; pos_nota != TAM_VETOR; pos_nota += 1)
        printf("%f ", notas[pos_nota]);
    
    printf("\na media das notas eh %.2f", media);

    return 0;
}
