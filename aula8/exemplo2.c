#include <stdio.h>

int main(int argc, char const *argv[])
{
    float array[5];
    int index;

    for(index = 0; index != 5; index+=1){
        printf("Digite valor da posição %d: ", index);
        scanf("%f", &array[index]);
    }

    index = 0;
    while(index != 5){
        printf("posição %d - conteúdo %.2f\n", index, array[index]);
        index += 1;
    }
    return 0;
}
