#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 1 -> verdade
    // 0 -> falso

    // 15 10 -> 10 15
    // 5 10  -> 5 10
    // 10 10 -> 10 10

    int num1;
    int num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 < num2)
        printf("\n%d %d", num1, num2);
    
    else
        printf("\n%d %d", num2, num1);

    return 0;
}
