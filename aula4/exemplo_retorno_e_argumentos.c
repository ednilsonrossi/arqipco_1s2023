#include <stdio.h>

int soma_numero(int a, int b);

int main(){
    int valor1, valor2, resultado;
    printf("Digite 2 números inteiros:\n");
    scanf("%d%d", &valor1, &valor2);

    resultado = soma_numero(valor1, valor2);
    printf("SOMA = %d\n\n", resultado);

    printf("SOMA = %d\n\n", soma_numero(12, 8) );
    return 0;
}

int soma_numero(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}
