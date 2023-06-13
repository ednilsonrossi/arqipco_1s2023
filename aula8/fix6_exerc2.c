#include <stdio.h>
#include <time.h>
#define MAXSIZE 100

//Classifica em ordem crescente o array
void sort(int array[], int size);

//Gera um array com valores aleatórios de 0 até o high_border-1
void generate(int array[], int size, int high_border);

//Imprime um array
void print(int array[], int size);

int main(int argc, char const *argv[]){
    int dataset[MAXSIZE];
    srand( (unsigned) time(NULL) );

    generate(dataset, MAXSIZE, 1000);
    
    printf("Vetor Gerado:\n");
    print(dataset, MAXSIZE);

    //sort(dataset, MAXSIZE);

    printf("Vetor Classificado:\n");
    print(dataset, MAXSIZE);

    return 0;
}

//Gera um array com valores aleatórios de 0 até o high_border-1
void generate(int array[], int size, int high_border){
    for(int index=0; index != size; index++){
        array[index] = rand() % high_border;
    }
}

//Imprime um array
void print(int array[], int size){
    for(int position=0; position != size; position+=1){
        printf("\tARRAY[%d] --> %d\n", position, array[position]);
    }
}
