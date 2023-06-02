#include <stdio.h>
#include <time.h>

int aleatorio();

int main(int argc, char const *argv[])
{
    int vetor_a[7];
    int vetor_b[5];
    int vetor_c[12];
    int index;
    int i, j;

    srand( (unsigned) time(NULL) );
    printf("\n-----------------\n");
    for(index = 0; index != 7; index++){
        vetor_a[index] = aleatorio();
        printf("A[%d] = %d\n", index, vetor_a[index]);
    }

    printf("\n-----------------\n");
    for(index = 0; index != 5; index++){
        vetor_b[index] = aleatorio();
        printf("B[%d] = %d\n", index, vetor_b[index]);
    }

    for(index = 0; index != 7; index++){
        vetor_c[index] = vetor_a[index];
    }

    /*
    for(index = 0; index != 5; index++){
        vetor_c[index+7] = vetor_b[index];
    }
    */
    i = 7;
    j = 0;
    while(j != 5){
        vetor_c[i] = vetor_b[j];
        j++;
        i++;
    }

    printf("\n-----------------\n");
    for(index = 0; index != 12; index++){
        printf("C[%d] = %d\n", index, vetor_c[index]);
    }

    return 0;
}

int aleatorio(){
    return rand() % 10000;
}