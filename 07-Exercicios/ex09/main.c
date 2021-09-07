/*
    Faça um programa que leia um número real e imprima ¹⁄4 desse número.

    1º ler um número real
    2º calcular ¹⁄4 desse valor
    3º imprimir o resultado
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num;

    float res;

    scanf("%f", &num);

    res = (1.0 / 4) * num;

    printf("\n%f", res);

    return 0;
}
