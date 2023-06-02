#include <stdio.h>
#define MAXSIZE 5
int main(int argc, char const *argv[])
{
    int numbers[MAXSIZE];
    int index;

    for(index = MAXSIZE-1; index != -1; index -= 1){
        printf("VETOR[%d]: ", index);
        scanf("%d", &numbers[index]);
    }

    for(index = 0; index != MAXSIZE; index++){
        if(numbers[index] % 5 == 0){
            printf("Multiplo de 5: %d\n", numbers[index]);
            printf("Na posição: %d\n\n", index);
        }
    }
    return 0;
}
