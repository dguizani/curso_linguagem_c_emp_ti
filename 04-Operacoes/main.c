#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;
    int matricula;

    float preco;

    int soma1;
    float soma2;

    idade = 6;
    matricula = 0;
    preco = 2;

    soma1 = idade + preco;

    soma2 = idade + preco;

    printf("soma1 = %d\n", soma1);
    printf("soma2 = %.2f\n", soma2);

    return 0;
}
