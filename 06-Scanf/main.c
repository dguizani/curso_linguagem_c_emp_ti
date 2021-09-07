#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hora, minuto, segundo;

    printf("Digite a hora atual (hh:mm:ss): ");

    scanf("%d:%d:%d", &hora, &minuto, &segundo);

    printf("\n%d:%d:%d\n", hora, minuto, segundo);

    return 0;
}
