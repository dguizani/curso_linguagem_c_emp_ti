#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (/* inicialização */ ; /* condição */ ; /* incremento */)
	/* instrução */

    /*
        primeira vez:
            01 -> inicialização
            02 -> condição
            03 -> instrução
            04 -> incremento
        
        segunda vez em diante:
            05 -> condição
            06 -> instrução
            07 -> incremento
            08 -> condição
            09 -> instrução
            10 -> incremento
            11 -> condição
            12 -> instrução
            13 -> incremento
            .
            .
            .
    */

    return 0;
}
