#include <stdio.h>

int main(int argc, char const *argv[])
{
    float array[5];
    int index;

    array[0] = 4.3;
    array[1] = 7.2;
    array[2] = 48.25;
    array[3] = 2.19;
    array[4] = 3.99;

    index = 0;
    while(index != 5){
        printf("posição %d - conteúdo %.2f\n", index, array[index]);
        index += 1;
    }
    return 0;
}
