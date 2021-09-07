/*
    Faça um programa que calcule o reajuste do salário de um funcionário. Para isso, o programa
    deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor
    do novo salário.

    1º ler o salário atual (float)
    2º ler o percentual de reajuste (int)
    3º calcular o novo salário
    4º imprimir o novo salário
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salario;

    int percentual_reajuste;

    float novo_salario;

    printf("\nDigite o salario: ");
    scanf("%f", &salario);

    printf("\nDigite o reajuste: ");
    scanf("%d", &percentual_reajuste);

    novo_salario = salario + ((percentual_reajuste / 100.0) * salario);

    printf("\nO novo salario eh R$%.2f", novo_salario);

    return 0;
}

