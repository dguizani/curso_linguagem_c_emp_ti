#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\n+--------------------------+");
    printf("\n|%*s%s%*s|", 11, "", "MENU", 11, "");
    printf("\n+--------------------------+");
    printf("\n| %d | %-*s |", 1, 20, "Opcao 1");
    printf("\n| %d | %-*s |", 2, 20, "Opcao 2");
    printf("\n+--------------------------+");

    return 0;
}
