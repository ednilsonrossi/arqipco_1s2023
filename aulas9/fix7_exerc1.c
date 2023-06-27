#include <stdio.h>
#define MAXSIZE 40

struct minha_estrutura
{   
    //Os campos da struct
    int placa;
    float velocidade_aferida;
    float velocidade_considerada;
};

int confere_placa(struct minha_estrutura arg, int arg_placa);

int busca_placa(struct minha_estrutura array[], int size, int arg_placa);

int main(int argc, char const *argv[])
{
    struct minha_estrutura array[40];
    struct minha_estrutura variavel_simple;
    int index;
    int quantidade;

    /*
    Exemplo de como utilizar uma variável de uma estrutura sem
    a utilização de um vetor. Observa-se o uso dos campos normalmente
    sem o uso de posição do vetor.
    */
    variavel_simple.placa = 9999
    variavel_simple.velocidade_aferida = 1000;
    variavel_simple.velocidade_considerada = 500;

    printf("Quantidade de carros: ");
    scanf("%d", &quantidade);

    /*
    Leitura dos dados dos carros que passaram pela rodovia.
    Observando que foi indicada a quantidade de carros.
    */
    for(index=0; index != quantidade; index += 1){
        printf("Digite placa.............: ");
        scanf("%d", &array[index].placa);

        printf("Digite velocidade aferida: ");
        scanf("%f", &array[index].velocidade_aferida);
    }

    /*
    Calcular a velocidade considerada para cada um dos carros que foram cadastrados.
    Ou seja, velocidade cadastrada é a velocidade aferida - 7%.
    */
    for(index = 0; index != quantidade; index += 1){
        array[index].velocidade_considerada = array[index].velocidade_aferida * 0.93;
    }

    /*
    Lista de carros acima da velocidade.
    */
    printf("** VEÍCULOS INFRATORES ** \n");
    for(index = 0; index != quantidade; index += 1){
        if(array[index].velocidade_considerada > 80){
            printf("\t %d \t %.2f", array[index].placa, array[index].velocidade_considerada);

            if(array[index].velocidade_considerada <= 96) //96 é exatamente 20% de 80km/h
            {
                printf("\t até 20%% acima do limite.\n");
            }
            else
            {
                printf("\t acima de 20%% do limite.\n");
            }
        }
    }

    return 0;
}


int confere_placa(struct minha_estrutura arg, int arg_placa){
    if(arg.placa == arg_placa){
        return 1;
    }else{
        return 0;
    }
}

int busca_placa(struct minha_estrutura array[], int size, int arg_placa){
    int index = 0;
    int achou = 0;
    while(index < size && achou == 0){
        if(array[index].placa == arg_placa){
            achou = 1;
        }
        index += 1;
    }

    /*----exemplo sem sentido funcional----*/
    for(index = 0; index != size; index += 1){
        if(array[index].placa == arg_placa){
            array[index].placa +=1
        }
    }
    return achou;
} 
