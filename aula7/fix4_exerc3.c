#include <stdio.h>

int soma_divisores(int arg);
int possui_amigavel(int arg);

int main(int argc, char const *argv[])
{
    int number;

    number = 1;
    while(number <= 1000000){
        if(possui_amigavel(number)){
            printf("%d\n", number);
        }
        number += 1;
    }

    return 0;
}

int possui_amigavel(int arg){
    int dividores_original;
    int divisores_obtido;

    dividores_original = soma_divisores(arg);
    divisores_obtido = soma_divisores(dividores_original);

    if(arg == divisores_obtido){
        return 1;
    }else{
        return 0;
    }
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