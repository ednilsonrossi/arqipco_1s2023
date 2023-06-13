#include <stdio.h>
#define MAXSIZE 8


void read_array(int array[], int size){
    for(int index = 0; index < size; index++){
        printf("Array[%d]: ", index);
        scanf("%d", &array[index]);
    }
}


int main(int argc, char const *argv[])
{
    int array[MAXSIZE];
    int index, position_x, position_y;

    read_array(array, MAXSIZE);
    do{
        printf("Digite posição X: ");
        scanf("%d", &position_x);
    }while(position_x < 0 || position_x > MAXSIZE-1);

    do{
        printf("Digite posição Y: ");
        scanf("%d", &position_y);
    }while(position_y < 0 || position_y > MAXSIZE-1);

    printf("Soma: %d\n\n", array[position_x] + array[position_y]);

    return 0;
}
