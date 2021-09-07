#include <stdio.h>

int main(int argc, char const *argv[])
{
    //     falso ou false -> 0
    // verdadeiro ou true -> 1

    // E ou AND -> &&

    // 1 && 0 -> 0
    // 0 && 1 -> 0
    // 0 && 0 -> 0
    // 1 && 1 -> 1

    printf("\n%d", 1 && 0);
    printf("\n%d", 0 && 1);
    printf("\n%d", 0 && 0);
    printf("\n%d", 1 && 1);
    
    return 0;
}

