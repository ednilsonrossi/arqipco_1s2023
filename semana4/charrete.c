#include <stdio.h>

int main(int argc, char const *argv[])
{
    int horas, periodo;
    float custo;

    printf("Horas de uso: ");
    scanf("%d", &horas);

    periodo = horas / 3;
    horas = horas % 3;
    custo = periodo * 8.5 + horas * 3.5;

    printf("Valor a receber: R$ %.2f\n\n", custo);
    return 0;
}
