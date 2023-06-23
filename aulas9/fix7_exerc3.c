#include <stdio.h>

struct cliente{
    int nro_conta;
    int cpf;
    char nome[20];
    double saldo;
};

struct movimentacao{
    int id;
    int nro_conta;
    char tipo_operacao;
    double valor;
};

void cadastra_cliente(struct cliente dataset[], int total_clientes);

void nova_movimentacao(struct movimentacao movimentos[], int size_movimentos, struct cliente clientes[], int size_clientes);

void atualiza_saldo(struct cliente clientes[], int size_clientes, int nro_conta, char tipo_operacao, double valor);

int main(int argc, char const *argv[])
{
    struct cliente vetor_clientes[100];
    int clientes_cadastrados;

    struct movimentacao vetor_movimentacao[1000];
    int movimentacoes_cadastradas = 0;


    clientes_cadastrados = 0;
    cadastra_cliente(vetor_clientes, clientes_cadastrados);
    clientes_cadastrados += 1;
    cadastra_cliente(vetor_clientes, clientes_cadastrados);
    clientes_cadastrados += 1;

    nova_movimentacao(vetor_movimentacao, movimentacoes_cadastradas, vetor_clientes, clientes_cadastrados);
    movimentacoes_cadastradas += 1;
    nova_movimentacao(vetor_movimentacao, movimentacoes_cadastradas, vetor_clientes, clientes_cadastrados);
    movimentacoes_cadastradas += 1;

    return 0;
}

void atualiza_saldo(struct cliente clientes[], int size_clientes, int nro_conta, char tipo_operacao, double valor){
    /*
    Realizar "busca sequencial"
    */
    int index, achou, achado;

    index = 0;
    achou = 0;
    while (index < size_clientes && achou == 0)
    {
        if(clientes[index].nro_conta == nro_conta){
            achou = 1;
            achado = index;
        }
        index += 1;
    }

    if(achou == 1){
        if(tipo_operacao == 'C'){
            clientes[achado].saldo += valor;
        }else{
            clientes[achado].saldo -= valor;
        }
    }
    
}


void nova_movimentacao(struct movimentacao movimentos[], int size_movimentos, struct cliente clientes[], int size_clientes){
    movimentos[size_movimentos].id = size_movimentos+1;
    printf("Número conta.......: ");
    scanf("%d", &movimentos[size_movimentos].nro_conta);
    __fpurge(stdin);

    printf("Tipo operação (C/D): ");
    movimentos[size_movimentos].tipo_operacao = getchar();
    __fpurge(stdin);

    printf("Valor operação.....: R$ ");
    scanf("%lf", &movimentos[size_movimentos].valor);
    __fpurge(stdin);

    atualiza_saldo(clientes, size_clientes, movimentos[size_movimentos].nro_conta, movimentos[size_movimentos].tipo_operacao, movimentos[size_movimentos].valor);
}


void cadastra_cliente(struct cliente dataset[], int total_clientes){
    printf("Número conta....: ");
    scanf("%d", &dataset[total_clientes].nro_conta);
    __fpurge(stdin);

    printf("CPF do cliente..: ");
    scanf("%d", &dataset[total_clientes].cpf);
    __fpurge(stdin);

    printf("Nome do cliente.: ");
    fgets(dataset[total_clientes].nome, 20, stdin);
    __fpurge(stdin);

    dataset[total_clientes].saldo = 0;
}