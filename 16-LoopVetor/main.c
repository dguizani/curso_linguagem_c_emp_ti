#include <stdio.h>

int main(int argc, char const *argv[])
{
    float notas[5];

    float media = 0;

    int pos_nota = 0;
    int num_nota = 1;

    /*
        numero da nota   -> 1 2 3 4 5 ....
        posição do vetor -> 0 1 2 3 4 ....
    */

    while (pos_nota != 5)
    {
        printf("Digite a nota %d: ", num_nota);
        scanf("%f", &notas[pos_nota]);

        pos_nota += 1;
        num_nota += 1;
    }

    // 5 7 4 2 1

    for (pos_nota = 0; pos_nota != 5; pos_nota += 1)
        media += notas[pos_nota];

    media /= 5;

    for (pos_nota = 0; pos_nota != 5; pos_nota += 1)
        printf("%f ", notas[pos_nota]);
    
    printf("\na media das notas eh %.2f", media);

    return 0;
}
