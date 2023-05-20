#include <stdio.h>

int multiplicacao(int arg1, int arg2);

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 4;

    printf("%d x %d = %d\n\n", a, b, multiplicacao(a, b) );

    return 0;
}

int multiplicacao(int arg1, int arg2){
    if(arg2 == 1){
        return arg1;
    }
    return arg1 + multiplicacao(arg1, arg2-1);
}