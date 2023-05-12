#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;

    printf("Digite numero inteiro: \n");
    scanf("%d", &number);

    printf("%d é %s\n\n", number, 
                        number % 2 == 0 ? "PAR" : "IMPAR");
                        
    return 0;
}
