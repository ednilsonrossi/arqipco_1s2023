#include <stdio.h>
#define MAXSIZE 4000

struct tipo_carro
{   
    //Os campos da struct
    int placa;
    float velocidade_aferida;
    float velocidade_considerada;
};

struct tipo_dataset
{
    struct tipo_carro array[MAXSIZE];
    int size;
};

int menu();
struct tipo_dataset inicializar();
struct tipo_dataset adicionar_carro(struct tipo_dataset dados);
void mostrar_todos(struct tipo_dataset dados);
void mostra_infratores(struct tipo_dataset dados);

int main(int argc, char const *argv[])
{
    int escolha;
    struct tipo_dataset meus_dados;
    meus_dados = inicializar();

    do{
        escolha = menu();
        switch (escolha)
        {
        case 1:
            meus_dados = adicionar_carro(meus_dados);
            break;

        case 2:
            mostrar_todos(meus_dados);
            break;

        case 3:
            mostra_infratores(meus_dados);
            break;
        
        default:
            break;
        }

    }while(escolha != 0);

    return 0;
}

void mostra_infratores(struct tipo_dataset dados){

    printf("** VEÍCULOS INFRATORES ** \n");
    for(int index = 0; index != dados.size; index += 1){
        if(dados.array[index].velocidade_considerada > 80){
            printf("\t %d \t %.2f", dados.array[index].placa, dados.array[index].velocidade_considerada);

            if(dados.array[index].velocidade_considerada <= 96) //96 é exatamente 20% de 80km/h
            {
                printf("\t até 20%% acima do limite.\n");
            }
            else
            {
                printf("\t acima de 20%% do limite.\n");
            }
        }
    }

}

void mostrar_todos(struct tipo_dataset dados){
    printf("*** TODOS OS VEÍCULOS CADASTRADOS ***\n");
    for(int index = 0; index != dados.size; index += 1){
        printf("\t %5d \t | \t %6.2f \t | \t %6.2f\n", 
                dados.array[index].placa,
                dados.array[index].velocidade_aferida,
                dados.array[index].velocidade_considerada);
    }
}

struct tipo_dataset adicionar_carro(struct tipo_dataset dados){
    int posicao;

    posicao = dados.size;
    printf("Digite placa.............: ");
    scanf("%d", &dados.array[posicao].placa);

    printf("Digite velocidade aferida: ");
    scanf("%f", &dados.array[posicao].velocidade_aferida);

    dados.array[posicao].velocidade_considerada = dados.array[posicao].velocidade_aferida * 0.93;

    dados.size += 1;

    return dados;
}


struct tipo_dataset inicializar(){
    struct tipo_dataset nova;
    nova.size = 0;
    return nova;
}

int menu(){
    int escolha;
    do{
        printf(" --- MENU ---\n");
        printf("(1) Adicionar novo veículo\n");
        printf("(2) Mostrar todos os veículo\n");
        printf("(3) Mostrar infratores\n");
        printf("(0) Sair do sistema\n\n");
        printf("Opção desejada: ");
        scanf("%d", &escolha);
    }while(escolha < 0 || escolha > 3);
    return escolha;
}