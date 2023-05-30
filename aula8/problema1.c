#include <stdio.h>

int main(int argc, char const *argv[])
{
    float number, sum;
    int index;

    sum = 0;
    for(index = 0; index != 10; index++){
        printf("Digite número: ");
        scanf("%f", &number);

        sum += number;
    }

    printf("Média dos valores: %.2f\n\n", sum/10 );
    return 0;
}
