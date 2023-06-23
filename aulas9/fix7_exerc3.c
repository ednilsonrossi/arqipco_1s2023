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


int main(int argc, char const *argv[])
{
    struct cliente vetor_clientes[100];
    struct movimentacao vetor_movimentacao[1000];

    
    return 0;
}
