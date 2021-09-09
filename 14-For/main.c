#include <stdio.h>

int main(int argc, char const *argv[])
{
    int contador = 0;

    while (contador < 5)
    {
        printf("\nDentro do 'WHILE'");
        contador += 1;
    }

    for (contador = 0 ; contador < 5 ; contador += 1)
        printf("\nDentro do 'FOR'");

    return 0;
}
