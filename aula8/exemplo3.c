#include <stdio.h>

int main(int argc, char const *argv[])
{
    float notas[3];

    printf("Digite nota 1: ");
    scanf("%f", &notas[0]);

    printf("Digite nota 2: ");
    scanf("%f", &notas[1]);

    notas[2] = (notas[0] + notas[1]) / 2;

    printf("Média das notas: %.2f\n\n", notas[2]);

    return 0;
}
