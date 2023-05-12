/*
Desenvolver um programa que leia um número inteiro entre 0 e 999 e apresente esse número 
decomposto em unidade, dezena e centena.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero, unidade, dezena, centena;

    printf("Digite número de 0 a 999: ");
    scanf("%d", numero);

    centena = numero / 100;
    numero = numero % 100;
    dezena = numero / 10;
    unidade = numero % 10;

    printf("Centena.: %d\n", centena);
    printf("Dezena..: %d\n", dezena);
    printf("Unidade.: %d\n\n", unidade);
    
    return 0;
}
