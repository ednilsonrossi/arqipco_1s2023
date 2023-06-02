#include <stdio.h>
#define MAXSIZE 15

void leitura(int array[]);
void imprime(int array[], char letter, int size);
int gerar_pares(int origem[], int pares[]);
int gerar_impares(int origem[], int impares[]);

int main(int argc, char const *argv[])
{
    int numbers[MAXSIZE];
    int evens[MAXSIZE];     //PARES
    int odds[MAXSIZE];      //IMPARES
    int even, odd;

    leitura(numbers);
    imprime(numbers, 'O', MAXSIZE);

    even = gerar_pares(numbers, evens);
    odd = gerar_impares(numbers, odds);

    printf("PARES: \n");
    imprime(evens, 'P', even);

    printf("IMPARES: \n");
    imprime(odds, 'I', odd);

    return 0;
}

void leitura(int array[]){
    int index;
    for(index = 0; index != MAXSIZE; index++){
        printf("Digite posição %d: ", index);
        scanf("%d", &array[index]);
    }
}

void imprime(int array[], char letter, int size){
    int index;
    for(index = 0; index != size; index++){
        printf("%c[%d]: %d\n", letter, index, array[index]);
    }
}
int gerar_pares(int origem[], int pares[]){
    int index, count;

    count = 0;
    for(index = 0; index != MAXSIZE; index++){
        if(origem[index] % 2 == 0){
            pares[count] = origem[index];
            count++;
        }
    }

    return count;
}

int gerar_impares(int origem[], int impares[]){
    int index, count;

    count = 0;
    for(index = 0; index != MAXSIZE; index++){
        if(origem[index] % 2 != 0){
            impares[count] = origem[index];
            count++;
        }
    }

    return count;
}
