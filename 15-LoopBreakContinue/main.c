#include <stdio.h>

int main(int argc, char const *argv[])
{
    char opcao;

    for (;!(opcao == '6');)
    {
        printf("\n+--------------------------+");
        printf("\n|%*s%s%*s|", 11, "", "MENU", 11, "");
        printf("\n+--------------------------+");
        printf("\n| %d | %-*s |", 1, 20, "Opcao 1");
        printf("\n| %d | %-*s |", 2, 20, "Opcao 2");
        printf("\n| %d | %-*s |", 3, 20, "Opcao 3");
        printf("\n| %d | %-*s |", 4, 20, "Opcao 4");
        printf("\n| %d | %-*s |", 5, 20, "Opcao 5");
        printf("\n| %d | %-*s |", 6, 20, "Sair");
        printf("\n+--------------------------+");

        scanf(" %c", &opcao);

        if (opcao == '1')
            printf("\nOpcao 1");
        
        else if (opcao == '2')
            printf("\nOpcao 2");
        
        else if (opcao == '3')
            printf("\nOpcao 3");
        
        else if (opcao == '4')
            printf("\nOpcao 4");
        
        else if (opcao == '5')
            printf("\nOpcao 5");
        
        else if (opcao == '6')
            printf("\nSaindo...");
        
        else
            printf("\nOpcao Invalida");
    }

    
    return 0;
}
