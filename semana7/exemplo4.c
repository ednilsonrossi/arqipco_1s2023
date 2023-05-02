#include <stdio.h>

int main(int argc, char const *argv[])
{
    float number;

    printf("Digite um número: \n");
    scanf("%f", &number);

    if(number == 0){
        printf("Número nulo. \n");
    }

    if(number < 0){
        printf("Número é negativo. \n");
    }

    if(number > 0){
        printf("Número é positivo. \n");
    }
    return 0;
}
