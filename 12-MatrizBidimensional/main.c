#include <stdio.h>

int main(int argc, char const *argv[])
{
    char frases[3][20] = {
        {'L', 'o', 'j', 'a', ' ', 'A', '\0'},
        "Uma frase legal"
    };

    scanf(" %[^\n]s", frases[2]);

    printf("\n%s", frases[0]);
    printf("\n%s", frases[1]);
    printf("\n%s", frases[2]);
    
    return 0;
}
