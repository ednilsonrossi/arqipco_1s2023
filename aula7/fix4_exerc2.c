#include <stdio.h>

int main(int argc, char const *argv[])
{
    int divisor;
    int endrew, roberts;
    int numero;

    printf("Digite número:\n");
    scanf("%d", &numero);

    endrew = 0;
    divisor = 1;
    while(divisor <= numero/2){
        if(numero % divisor == 0){
            //printf("Dividor: %d\n", divisor);
            endrew = endrew + divisor;
        }
        divisor += 1;
    }
    //printf("Soma dos divisores: %d\n", endrew);

    roberts = 0;
    divisor = 1;
    while(divisor <= endrew/2){
        if(endrew % divisor == 0){
            //printf("Dividor: %d\n", divisor);
            roberts = roberts + divisor;
        }
        divisor += 1;
    }
    //printf("Soma dos divisores: %d\n", roberts);


    if(numero == roberts){
        printf("Números %d e %d são amigáveis.\n", numero, endrew);
    }else{
        printf("O número %d não possui amigável.\n", numero);
    }

    return 0;
}
