#include <stdio.h>

int main(int argc, char const *argv[])
{
    int index;
    int number;
    int max, min;


    index = 0;
    while(index < 15){

        /*
        number = 0;
        while(number < 1 || number > 1000){
            printf("Digite %dº número : ", index+1);
            scanf("%d", &number);
        }
        */

        do{
            printf("Digite %dº número : ", index+1);
            scanf("%d", &number);
        }while(number < 1 || number > 1000);
       
        if(index == 0){
            max = number;
            min = number;
        }

        if(number > max){
            max = number;
        }

        if(number < min){
            min = number;
        }

        index++;
    }

    printf("Maior: %d\n", max);
    printf("Menor: %d\n", min);

    return 0;
}
