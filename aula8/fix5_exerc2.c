#include <stdio.h>
#define MAXSIZE 50

int main(int argc, char const *argv[]){
    
    int array_divisores[MAXSIZE];
    int divisor, lido, qtd_divisores;

    printf("Digite um valor: ");
    scanf("%d", &lido);

    qtd_divisores = 0;
    for(divisor = 1; divisor <= lido; divisor += 1){
        if(lido % divisor == 0){
            array_divisores[qtd_divisores] = divisor;
            qtd_divisores += 1;
        }
    }

    printf("Divisores de %d: \n", lido);
    for(divisor=0; divisor < qtd_divisores; divisor++){
        printf("%d\n", array_divisores[divisor]);
    }

    return 0;
}
