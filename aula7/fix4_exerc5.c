#include <stdio.h>

int main(int argc, char const *argv[])
{
    int qtdade, i, menor, maior;
    int number;

    printf("Quantidade de números: \n");
    scanf("%d", &qtdade);

    menor = maior = 0;
    i = 0;
    while(i < qtdade){
        printf("Digite número: ");
        scanf("%d", &number);

        if(number > 0){
            if(menor == 0){
                menor = number;
            }
            if(number < menor){
                menor = number;
            }
        }else{
            if(maior == 0){
                maior = number;
            }
            if(number > maior){
                maior = number;
            }
        }

        i++;    
    }

    printf("Maior negativo: %d\nMenor positivo: %d\n\n", maior, menor);
    return 0;
}
