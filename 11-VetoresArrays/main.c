#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota_1 = 6.6;
    float nota_2 = 8;
    float nota_3 = 7;

    /*
        0 -> primeira posição
        1 -> segunda posição
        2 -> terceira posição
        3 -> quarta posição
    */

    float notas_aluno[4] = {
        6.6, // pos 0
        8,   // pos 1
        7    // pos 2
    };

    notas_aluno[3] = (notas_aluno[0] + notas_aluno[1] + notas_aluno[2]) / 3;

    printf("\nMedia das notas: %.2f", notas_aluno[3]);

    return 0;
}
