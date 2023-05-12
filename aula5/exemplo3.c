#include <stdio.h>

int igual(float a, float b);

int main(int argc, char const *argv[])
{
    float value_1, value_2;
    int result;

    printf("Digite dois valores (A e B): \n");
    scanf("%f%f", &value_1, &value_2);

    if( igual(value_1, value_2) ){
        printf("Valores são iguais\n");
    }else{
        printf("Valores NÃO são iguais\n");
    }

    if( value_1 == 0 ){
        printf("A é igual a ZERO\n");
    }

    if( 1 ){
        printf("Sempre escrevo essa frase :-D \n\n");
    }

    return 0;
}

int igual(float a, float b){
    return a == b;
}


