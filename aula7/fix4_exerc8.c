#include <stdio.h>

int potencia(int arg1, int arg2);

int main(int argc, char const *argv[])
{
    int base, expoente;

    printf("Digite base e expoente: \n");
    scanf("%d%d", &base, &expoente);

    printf("%d ^ %d = %d\n\n", base, expoente, potencia(base, expoente));

    return 0;
}

int potencia(int arg1, int arg2){
    int index;
    int product = 1;

    /*
    index = 0;
    while(index < arg2){
        product = product * arg1;
        index += 1;
    }
    */

    for(index = 0; index < arg2; index += 1){
        product = product * arg1;
    }


    return product;
}