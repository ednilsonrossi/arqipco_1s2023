#include <stdio.h>

int main(int argc, char const *argv[])
{
    float value_1, value_2;
    int result;

    printf("Digite dois valores inteiros: \n");
    scanf("%f%f", &value_1, &value_2);

    result = value_1 == value_2;

    printf("\n%.1f == %.1f: %d\n\n", value_1, value_2, result);

    return 0;
}
