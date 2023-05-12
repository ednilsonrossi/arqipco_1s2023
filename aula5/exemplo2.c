#include <stdio.h>

int igual(float a, float b);
int diferente(float a, float b);
int maior(float a, float b);
int maior_ou_igual(float a, float b);
int menor(float a, float b);
int menor_ou_igual(float a, float b);

int main(int argc, char const *argv[])
{
    float value_1, value_2;
    int result;

    printf("Digite dois valores (A e B): \n");
    scanf("%f%f", &value_1, &value_2);

    printf("A e B são iguais?        \t %d\n", igual(value_1, value_2));
    printf("A e B são diferentes?    \t %d\n", diferente(value_1, value_2));
    printf("A é maior do que B?      \t %d\n", maior(value_1, value_2));
    printf("A é maior ou igual a B?  \t %d\n", maior_ou_igual(value_1, value_2));
    printf("A é menor do que B?      \t %d\n", menor(value_1, value_2));
    printf("A é menor ou igual a ?   \t %d\n\n", menor_ou_igual(value_1, value_2));

    return 0;
}

int igual(float a, float b){
    return a == b;
}

int diferente(float a, float b){
    return a != b;
}

int maior(float a, float b){
    return a > b;
}

int maior_ou_igual(float a, float b){
    return a >= b;
}

int menor(float a, float b){
    return a < b;
}

int menor_ou_igual(float a, float b){
    return a <= b;
}

