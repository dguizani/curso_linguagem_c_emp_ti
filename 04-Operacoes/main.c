#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;
    int matricula;

    float preco;

    int res1;
    float res2;

    idade = 6003;
    matricula = 0;
    preco = 2.5;

    idade = idade % 5;

    printf("idade = %d\n", idade);

    idade %= 5;

    printf("idade = %d\n", idade);

    return 0;
}
