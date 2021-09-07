#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        0 -> primeira posição
        1 -> segunda posição
        2 -> terceira posição
        3 -> quarta posição
    */

   int notas_aluno[4] = {
        6, // pos 0
        8, // pos 1
        7  // pos 2
    };

    int frase[] = {
        'M',
        'e',
        'd',
        'i',
        'a',
        ' ',
        'd',
        'a',
        's',
        ' ',
        'n',
        'o',
        't',
        'a',
        's',
        ':',
        ' ',
        '%',
        'd',
        '\0'
    };
    
    notas_aluno[3] = (notas_aluno[0] + notas_aluno[1] + notas_aluno[2]) / 3;

    printf("\nMedia das notas: %d", notas_aluno[3]);

    return 0;
}
