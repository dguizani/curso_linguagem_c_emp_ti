#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 1 -> verdade
    // 0 -> falso

    char opcao;

    printf("\n+--------------------------+");
    printf("\n|%*s%s%*s|", 11, "", "MENU", 11, "");
    printf("\n+--------------------------+");
    printf("\n| %d | %-*s |", 1, 20, "Opcao 1");
    printf("\n| %d | %-*s |", 2, 20, "Opcao 2");
    printf("\n| %d | %-*s |", 3, 20, "Opcao 3");
    printf("\n| %d | %-*s |", 4, 20, "Opcao 4");
    printf("\n| %d | %-*s |", 5, 20, "Opcao 5");
    printf("\n| %d | %-*s |", 6, 20, "Opcao 6");
    printf("\n+--------------------------+");

    scanf("%c", &opcao);

    switch (opcao)
    {
        case '1':
            printf("\nOpcao 1");
        break;
        
        case '2':
            printf("\nOpcao 2");
        break;
        
        case '3':
            printf("\nOpcao 3");
        break;
        
        case '4':
            printf("\nOpcao 4");
        break;
        
        case '5':
            printf("\nOpcao 5");
        break;
        
        case '6':
            printf("\nOpcao 6");
        break;
        
        default:
            printf("\nOpcao Invalida");
        break;
    }

    return 0;
}
