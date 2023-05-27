#include <stdio.h>

int soma_divisores(int arg);

int main(int argc, char const *argv[])
{
    int divisor;
    int endrew, roberts;
    int numero;

    printf("Digite número:\n");
    scanf("%d", &numero);

    endrew =  soma_divisores(numero);
    roberts = soma_divisores(endrew);

    if(numero == roberts){
        printf("Números %d e %d são amigáveis.\n", numero, endrew);
    }else{
        printf("O número %d não possui amigável.\n", numero);
    }

    return 0;
}


int soma_divisores(int arg){
    int somatorio, divisor;

    somatorio = 0;
    divisor = 1;
    while(divisor <= arg/2){
        if(arg % divisor == 0){
            somatorio += divisor;
        }
        divisor += 1;
    }

    return somatorio;
}