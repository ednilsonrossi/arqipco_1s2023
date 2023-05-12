#include <stdio.h>

int diferenca(int a, int b);

int main(int argc, char const *argv[])
{
    int n1, n2;
    n1 = 10;
    n2 = 5;

    printf("%d - %d = %d\n", n1, n2, diferenca(n1, n2) );
    printf("%d - %d = %d\n", n1, n2, diferenca(n2, n1) );

    return 0;
}

int diferenca(int a, int b){
    return a - b;
}
