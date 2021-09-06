#include <stdio.h>

int main(int argc, char const *argv[])
{
    char var_char = 'C';

    int var_int = 251;

    float var_float = 15.75F;

    printf("var_char   = %c\n\n", var_char);
    printf("var_int    = '%05d'\n\n", var_int);
    printf("var_float  = '%10.2f'\n\n", var_float);
    printf("var_string = '%-*s'\n\n", 30, "uma frase");

    return 0;
}
