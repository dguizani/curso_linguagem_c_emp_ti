#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 1 -> verdade
    // 0 -> falso

    if (0 < 1)
    {
        printf("\ncomando if 1");
        printf("\ncomando if 2");
    }

    else
    {
        printf("\ncomando else 1");
        printf("\ncomando else 2");
    }

    printf("\nfora do if else");

    return 0;
}
