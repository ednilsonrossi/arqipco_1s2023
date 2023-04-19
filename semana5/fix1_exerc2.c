#include <stdio.h>

int decompor(int valor, int nota);
int atualizar(int valor, int nota);
int meu_decompor(int * valor, int nota);

int main(int argc, char const *argv[])
{
    int valor, valor2;

    printf("Digite o valor: ");
    scanf("%d", &valor);
    valor2 = valor;

    printf("Notas de 100: %d\n", decompor(valor, 100));
    valor = atualizar(valor, 100);
    printf("Notas de  50: %d\n", decompor(valor, 50));
    valor = atualizar(valor, 50);
    printf("Notas de  10: %d\n", decompor(valor, 10));
    valor = atualizar(valor, 10);
    printf("Notas de   5: %d\n", decompor(valor, 5));
    valor = atualizar(valor, 5);
    printf("Notas de   1: %d\n", valor);

    printf("\n\n\n");
    printf("Notas de 100: %d\n", meu_decompor(&valor2, 100));
    printf("Notas de  50: %d\n", meu_decompor(&valor2, 50));
    printf("Notas de  10: %d\n", meu_decompor(&valor2, 10));
    printf("Notas de   5: %d\n", meu_decompor(&valor2, 5));
    printf("Notas de   1: %d\n", valor2);

    return 0;
}

int decompor(int valor, int nota){
    return valor / nota;
}

int atualizar(int valor, int nota){
    return valor - decompor(valor, nota) * nota;
    //return valor % nota;
}

int meu_decompor(int * valor, int nota){
    int notas;
    notas = *valor / nota;
    *valor = *valor % nota;
    return notas;
}