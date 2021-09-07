#include <stdio.h>

int main(int argc, char const *argv[])
{
    //      falso ou false -> 0
    // verdadeiro ou true  -> 1

    // E ou AND -> &&

    // 1 && 0 -> 0
    // 0 && 1 -> 0
    // 0 && 0 -> 0
    // 1 && 1 -> 1

    // OU ou OR -> ||

    // 1 || 0 -> 1
    // 0 || 1 -> 1
    // 0 || 0 -> 0
    // 1 || 1 -> 1

    // maior que -> ">"

    // 15 > 10 -> 1
    // 15 > 87 -> 0

    printf("\n%d", 15 > 10);
    printf("\n%d", 15 > 87);
    
    return 0;
}
