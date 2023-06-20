#include <stdio.h>

struct data{
    int dia, mes, ano;
};

void imprime_data(struct data hoje);

int main(int argc, char const *argv[]){    
    struct data variavel;

    variavel.dia = 20;
    variavel.mes = 6;
    variavel.ano = 2023;

    imprime_data(variavel);
    return 0;
}

void imprime_data(struct data hoje){
    printf("%2d/%2d/%4d\n\n", hoje.dia, hoje.mes, hoje.ano);
}