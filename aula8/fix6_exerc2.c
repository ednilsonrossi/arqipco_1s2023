#include <stdio.h>
#define MAXSIZE 100

void sort(int array[], int size);
void generate(int array[], int size);
void print(int array[], int size);

int main(int argc, char const *argv[]){
    int dataset[MAXSIZE];

    generate(dataset, MAXSIZE);
    
    printf("Vetor Gerado:\n");
    print(dataset, MAXSIZE);

    sort(dataset, MAXSIZE);

    printf("Vetor Classificado:\n");
    print(dataset, MAXSIZE);

    return 0;
}

