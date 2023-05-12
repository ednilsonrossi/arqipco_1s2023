#include <stdio.h>

int soma_numero();

int main(int argc, char const *argv[])
{
    int result;
    result = soma_numero();
    printf("SOMA = %d\n\n", result);
    printf("SOMA = %d\n\n", soma_numero() );
    return 0;
}

int soma_numero(){
    int n1, n2, sum;
    printf("Digite 2 números inteiros:\n");
    scanf("%d%d", &n1, &n2);
    sum = n1 + n2;
    return sum;
    
}
