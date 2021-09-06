#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;
    int matricula;

    float preco;

    int res1;
    float res2;

    idade = 6;
    matricula = 0;
    preco = 2.5;

    idade = idade * 5;

    idade *= 5;

    res1 = idade * preco;

    res2 = idade * preco;

    printf("res1 = %d\n", res1);
    printf("res2 = %.2f\n", res2);

    return 0;
}
