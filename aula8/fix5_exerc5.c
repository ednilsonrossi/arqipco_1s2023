#include <stdio.h>
#define MAXSIZE 6


void read_array(int array[], int size){
    for(int index = 0; index < size; index++){
        printf("Array[%d]: ", index);
        scanf("%d", &array[index]);
    }
}


int main(int argc, char const *argv[])
{
    int array[MAXSIZE];
    int index;

    read_array(array, MAXSIZE);
    
    printf("\nARRAY\n");
    for(index = MAXSIZE-1; index >= 0; index--){
        printf("\tarray[%d]: %3d\n", index, array[index]);
    }
    printf("----------------------\n");

    return 0;
}
