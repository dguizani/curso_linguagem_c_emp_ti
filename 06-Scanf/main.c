#include <stdio.h>

int main(int argc, char const *argv[])
{
    char var_char1 = '\n';
    char var_char2 = 10;

    int var_int;

    float var_float;

    scanf(" %c:%c-%f", &var_char1, &var_char2, &var_float);

    printf("'%c' '%c' '%.3f'", var_char1, var_char2, var_float);

    return 0;
}
