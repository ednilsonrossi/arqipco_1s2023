#include <stdio.h>
#define OCUPADO 1
#define VAZIO -1

int batata_quente(int n, int k);

int main(int argc, char const *argv[]){
    
    int n, k;
    printf("Quantidade de crianças: ");
    scanf("%d", &n);

    printf("Digite a quantidade de passos: ");
    scanf("%d", &k);
    
    printf("Criança vencedora na cadeira: %d\n\n", batata_quente(n, k));

    return 0;
}

int batata_quente(int n, int k){
    int index;
    int qtd_criancas, contador;
    int array_circular[n];

    for(index = 0; index != n; index += 1){
        array_circular[index] = OCUPADO;
    }

    qtd_criancas = n;
    index = -1;
    while(qtd_criancas != 1){
        
        for(contador=0; contador != k; contador += 1){

            do{
                index = index + 1;
                if(index == n){
                    index = 0;
                }
            }while(array_circular[index] == VAZIO);

        }

        array_circular[index] = VAZIO;
        qtd_criancas -= 1;
    }
    do{
        index++;
        if(index == n){
            index = 0;
        }
    }while(array_circular[index] == VAZIO);


    return index+1;
}