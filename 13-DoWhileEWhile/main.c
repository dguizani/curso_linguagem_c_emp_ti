#include <stdio.h>

int main(int argc, char const *argv[])
{
    int contador = 5;

    while (contador < 5)
    {
        printf("\nWhile");
        contador += 1;
    }

    do
    {
        printf("\nDo While");
        contador += 1;
    } while (contador < 5);

    return 0;
}
