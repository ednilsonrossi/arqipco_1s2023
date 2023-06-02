#include <stdio.h>
#define MAXSIZE 5

void leitura(int array[]);
void impressao(int vetor[], int tamanho, char mensagem[]);
int gerar_pares(int origem[], int saida[]);
int gerar_impares(int origem[], int saida[]);

int main(int argc, char const *argv[])
{
    int numbers[MAXSIZE];
    int vetor_pares[MAXSIZE];
    int vetor_impares[MAXSIZE];
    int conta_pares, conta_impares;
    
    leitura(numbers);
    impressao(numbers, MAXSIZE, "VETOR_LIDO");

    conta_pares = gerar_pares(numbers, vetor_pares);
    printf("\n-----\n");
    impressao(vetor_pares, conta_pares, "PARES");

    conta_impares = gerar_impares(numbers, vetor_impares);
    printf("\n-----\n");
    impressao(vetor_impares, conta_impares, "IMPARES");

    return 0;
}

int gerar_pares(int origem[], int saida[]){
    int i, contador;

    i = 0;
    contador = 0;
    while(i != MAXSIZE){
        if(origem[i] % 2 == 0){
            saida[contador] = origem[i];
            contador++;
        }
        i++;
    }
    return contador;
}


int gerar_impares(int origem[], int saida[]){
    int i, contador;

    i = 0;
    contador = 0;
    while(i != MAXSIZE){
        if(origem[i] % 2 != 0){
            saida[contador] = origem[i];
            contador++;
        }
        i++;
    }
    return contador;
}

void impressao(int vetor[], int tamanho, char mensagem[]){
    int x;
    for(x = 0; x != tamanho; x++){
        printf("%s[%d]: %d\n", mensagem, x, vetor[x]);
    }
}

void leitura(int array[]){
    int index;
    for(index = 0; index != MAXSIZE; index++){
        printf("Digite Vetor[%d]: ", index);
        scanf("%d", &array[index]);
    }
}