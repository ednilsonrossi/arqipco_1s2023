/*
EXEMPLO 1:
Implementar um programa que some os números 7 e 8.
*/

#include <stdio.h>

int main()
{
    int n1, n2, soma;

    printf("Digite primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite segundo valor: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("Resultado de %d + %d = %d", n1, n2, soma);

    return 0;
}