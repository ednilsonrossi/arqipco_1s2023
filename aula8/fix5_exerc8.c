#include <stdio.h>
#define MAXSIZE 100

int main(int argc, char const *argv[]){
    double input;
    double array[MAXSIZE];
    int controle;

    printf("Digite valor: ");
    scanf("%lf", &input);

    array[MAXSIZE-1] = input;

    for(controle = MAXSIZE - 2; controle >= 0; controle -= 1){
        array[controle] = array[controle+1] / 2.0;
    }

    for(controle = 0; controle != MAXSIZE; controle += 1){
        printf("%.32lf\n", array[controle]);
    }
    return 0;
}
