#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade = 14;
    float peso = 70.8;
    char sexo = 'F';
    double taxa = 15.359742;

    printf("\n A pessoa tal com idade %d que pesa %.2f kg eh do sexo %c e tera que pagar uma taxa de %lf %%\n",
           idade, peso, sexo, taxa);

    return 0;
}
