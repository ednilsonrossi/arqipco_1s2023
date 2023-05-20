#include <stdio.h>

int eh_par(int arg);

int main(int argc, char const *argv[])
{
    int pares, impares, contador, number;

    //Inicializar os contadores
    pares = 0;
    impares = 0;
    contador = 10;

    while(contador >= 1){
        printf("Digite número: ");
        scanf("%d", &number);

        if(eh_par(number)){
            pares++;
        }else{
            impares++;
        }

        contador--;
    }

    printf("%d são pares\n%d são impares\n\n", pares, impares);

    return 0;
}

int eh_par(int arg){
    return arg % 2 == 0;
}


