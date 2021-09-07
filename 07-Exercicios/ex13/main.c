/*
    Faça um programa que leia o saldo de uma conta poupança e imprima o novo saldo,
    considerando um reajuste de 2%.

    1º ler o saldo (float)
    2º adicionar 2% ao saldo
    3º imprimir
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float saldo;

    scanf("%f", &saldo);

    saldo += ((2.0 / 100.0) * saldo);

    printf("\n%.2f", saldo);

    return 0;
}

