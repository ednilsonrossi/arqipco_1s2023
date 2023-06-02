#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Declaração de um array de 5 posição, ou seja,
    //um conjunto de 5 variáveis com posições de 0 à 4
    int eduardo[5];
    int contador;

    for(contador = 0; contador != 5; contador = contador + 1){
        printf("Digite número: ");
        scanf("%d", &eduardo[contador]);
    }

    printf("Números pares lidos:\n");
    for(contador = 0; contador != 5; contador += 1){
        if(eduardo[contador] % 2 == 0){
            printf("PAR[%d] = %d\n", contador, eduardo[contador]);
        }
    }

    return 0;
}
