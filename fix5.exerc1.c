#include <stdio.h>
#include <time.h>

int gera_aleatorio(int maximo);
void preenche_array(int array[], int size, int max_value);
void imprime_array(int array[], int size);
int conta_par(int array[], int size);

int main(int argc, char const *argv[]){
    srand( (unsigned) time(NULL) );
    int vet50[50];
    int vet100[100];
    int index;

    preenche_array(vet50, 50, 10);
    preenche_array(vet100, 100, 100);

    printf("\nVetor 50: \n");
    imprime_array(vet50, 50);
    printf("\nVetor 100: \n");
    imprime_array(vet100, 100);
    
    if(conta_par(vet50, 50) > conta_par(vet100, 100) ){
        printf("VET50 possui mais pares que VET100\n.");
    }else{
        printf("VET100 possui mais pares que VET50\n.");
    }

    return 0;
}

int conta_par(int array[], int size){
    int index, count;

    for(index = 0, count = 0; index != size; index += 1){
        if(array[index] % 2 == 0){
            count += 1;
        }
    }

    return count;
}

void imprime_array(int array[], int size){
    int index;
    for(index = 0; index != size; index += 1){
        printf("%d, ", array[index]);
    }
}

void preenche_array(int array[], int size, int max_value){
    int index;
    index = 0;
    while(index != size){
        array[index] = gera_aleatorio(max_value);
        index += 1;
    }
}

int gera_aleatorio(int maximo){
    return (rand() % maximo) + 1;
}