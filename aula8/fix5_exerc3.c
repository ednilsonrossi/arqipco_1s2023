#include <stdio.h>

#define MAXSIZE 100

void read_array(int array[], int size);
void print_array(int array[], int size);
void multiply_by(int multiple, int origem[], int destination[], int size);

int main(int argc, char const *argv[]){
    int dataset[MAXSIZE];
    int dataset_doble[MAXSIZE];
    int real_size;

    do{
        printf("Digite o valor de N: ");
        scanf("%d", &real_size);
    }while(real_size < 1 || real_size > MAXSIZE);

    read_array(dataset, real_size);
    multiply_by(2, dataset, dataset_doble, real_size);
    print_array(dataset, real_size);
    print_array(dataset_doble, real_size);

    return 0;
}

void read_array(int array[], int size){
    for(int index = 0; index < size; index++){
        printf("Array[%d]: ", index);
        scanf("%d", &array[index]);
    }
}

void print_array(int array[], int size){
    printf("\nARRAY\n");
    for(int index = 0; index < size; index++){
        printf("\tarray[%d]: %3d\n", index, array[index]);
    }
    printf("----------------------\n");
}

void multiply_by(int multiple, int origem[], int destination[], int size){
    for(int index = 0; index < size; index++){
        destination[index] = origem[index] * multiple;
    }
}