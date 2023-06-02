#include <stdio.h>
#define MAXSIZE 15

int main(int argc, char const *argv[])
{
    int numbers[MAXSIZE];
    int index;

    for(index = 0; index != MAXSIZE; index += 1){
        printf("VETOR[%d]: ", index);
        scanf("%d", &numbers[index]);
    }

    printf("Posição dos pares:\n");
    for(index = 0; index != MAXSIZE; index++){
        if(numbers[index] % 2 == 0){
            printf("%d, ", index);
        }
    }

    printf("\nValores das posições pares:\n");
    for(index = 0; index < MAXSIZE; index += 2){
        printf("%d, ", numbers[index]);
    }
    return 0;
}
