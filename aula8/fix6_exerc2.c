#include <stdio.h>
#include <time.h>
#define MAXSIZE 10

//Classifica em ordem crescente o array
void sort_insert(int array[], int size);

//Classifica em ordem crescente o array
void sort_bubble(int array[], int size);

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

    sort_bubble(dataset, MAXSIZE);

    printf("Vetor Classificado:\n");
    print(dataset, MAXSIZE);

    return 0;
}


void generate(int array[], int size, int high_border){
    for(int index=0; index != size; index++){
        array[index] = rand() % high_border;
    }
}

void print(int array[], int size){
    for(int position=0; position != size; position+=1){
        printf("\tARRAY[%d] --> %d\n", position, array[position]);
    }
}


void sort_insert(int array[], int size){
    int index, pos_menor, temp;

    for(index = 0; index < size-1; index+=1){

        //Localiza a posição do menos valor
        pos_menor = index;
        for(int busca = index; busca < size; busca+=1){
            if(array[busca] < array[pos_menor]){
                pos_menor = busca;
            }
        }

        //Trocar a posição do menor com a posição index
        temp = array[index];
        array[index] = array[pos_menor];
        array[pos_menor] = temp;

    }
}

void sort_bubble(int array[], int size){
    int troca;

    for(int i = 0; i < size; i++){

        for(int j = 0; j < size-1; j++){

            if(array[j] > array[j+1]){
                troca = array[j];
                array[j] = array[j+1];
                array[j+1] = troca;
            }

        }

    }


}