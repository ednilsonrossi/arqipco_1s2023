#include <stdio.h>

void soma_numero();

int main(int argc, char const *argv[])
{
    soma_numero();
    soma_numero();
    return 0;
}

void soma_numero(){
    int n1, n2, sum;
    printf("Digite 2 números inteiros:\n");
    scanf("%d%d", &n1, &n2);
    sum = n1 + n2;
    printf("SOMA = %d\n\n", sum);
}
