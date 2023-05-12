/*
ENUNCIADO:
Escrever um programa que lê o público total de futebol e forneça a renda do jogo, sabendo-se que havia 4 
tipos de ingressos assim distribuídos: popular - 10% a R$ 1,00, geral - 50% a R$ 5,00, 
arquibancada - 30% a R$ 10,00 e cadeiras - 10% a R$ 20,00.
*/

#include <stdio.h>

float calcula_renda(int ingresso, int porcent, float valor);

int main(int argc, char const *argv[])
{
    int ingressos, porcentagem;
    float popular, geral, arquibancada, cadeiras, renda;
    float preco;

    printf("Informe quantidade de ingressos: ");
    scanf("%d", &ingressos);

    //ingresso popular
    preco = 1.0;
    porcentagem = 10;
    popular = calcula_renda(ingressos, porcentagem, preco);

    //ingresso geral
    preco = 5.0;
    porcentagem = 50;
    geral = calcula_renda(ingressos, porcentagem, preco);

    //ingresso arquibancada
    preco = 10.0;
    porcentagem = 30;
    arquibancada = calcula_renda(ingressos, porcentagem, preco);

    //ingresso cadeira
    preco = 2.0;
    porcentagem = 10;
    cadeiras = calcula_renda(ingressos, porcentagem, preco);

    renda = popular + geral + arquibancada + cadeiras;

    printf("RENDA DO JOGO: %.2f\n\n", renda);

    return 0;
}

float calcula_renda(int ingresso, int porcent, float valor){
    return (ingressos * porcent / 100) * valor;
}