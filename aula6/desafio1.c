#include <stdio.h>

int potencia(int arg1, int arg2);

int main(int argc, char const *argv[])
{
    int base, expoente;

    base = 2;
    expoente = 3;

    printf("%d ^ %d = %d\n\n", base, expoente, potencia(base, expoente) );
    return 0;
}

int potencia(int arg1, int arg2){
    if(arg2 == 0){
        return 1;
    }
    return arg1 * potencia(arg1, arg2-1);
}