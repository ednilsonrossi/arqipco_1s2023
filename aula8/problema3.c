#include <stdio.h>
#define TAMANHO 10  //Definição de uma constante que pode ser utilizada em todo o programa.

int main(int argc, char const *argv[])
{
    float dados[TAMANHO];
    int indice, indice_maior, indice_menor;

    indice = 0;
    do{
        printf("Digite número: ");
        scanf("%f", &dados[indice]);
        indice += 1;
    }while(indice != TAMANHO);

    indice_maior = 0;
    indice_menor = 0;
    for(indice = 1; indice != TAMANHO; indice += 1){
        if(dados[indice] > dados[indice_maior]){
            indice_maior = indice;
        }

        if(dados[indice] < dados[indice_menor]){
            indice_menor = indice;
        }
    }

    printf("Maior valor: %.2f na posição %d.\n", dados[indice_maior], indice_maior);
    printf("Menor valor: %.2f na posição %d.\n", dados[indice_menor], indice_menor);
    return 0;
}
