#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota_1;
    float nota_2;
    float nota_3;

    float notas_aluno[3];

    nota_1 = 6.5;

    /*
        0 -> primeira posição
        1 -> segunda posição
        2 -> terceira posição
    */

    notas_aluno[1] = 8;
    notas_aluno[0] = 6.6;
    notas_aluno[2] = 7;

    printf("\nMedia das notas: %.2f", (notas_aluno[0] + notas_aluno[1] + notas_aluno[2]) / 3);

    return 0;
}
