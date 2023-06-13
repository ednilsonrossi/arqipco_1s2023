#include <stdio.h>
#define MAXSIZE 15


void read_array(int array[], int size){
    for(int index = 0; index < size; index++){
        printf("Array[%d]: ", index);
        scanf("%d", &array[index]);
    }
}


int main(int argc, char const *argv[])
{
    int array[MAXSIZE];
    int index, start, end;

    read_array(array, MAXSIZE);

    do{
        printf("Digite o valor de início: ");
        scanf("%d", &start);
    }while(start < 0 || start > MAXSIZE-1);

    do{
        printf("Digite o valor de início: ");
        scanf("%d", &end);
    }while(end < 0 || end > MAXSIZE-1);

    printf("\nARRAY\n");
    if(start < end){
        for(index = start; index <= end; index++){
            printf("\tarray[%d]: %3d\n", index, array[index]);
        }
    }else{
        for(index = start; index >= end; index--){
            printf("\tarray[%d]: %3d\n", index, array[index]);
        }
    }
    printf("----------------------\n");

    return 0;
}
