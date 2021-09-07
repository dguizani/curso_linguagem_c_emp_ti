#include <stdio.h>

int nivel_0; // não recomendado

int main(int argc, char const *argv[])
{
    int nivel_1;

    {
        int nivel_2;

        nivel_1 = 3;
        nivel_0 = 5;

        {
            int nivel_3;
        }

        nivel_3 = 14; // não consigo acessar
    }

    nivel_2 = 3; // não consigo acessar
    
    return 0;
}

