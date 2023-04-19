#include <stdio.h>

float converte_para_real(float valor, float cotacao_dolar);
float calcular_porcentagem(float valor, float porcentagem);
float calcular_preco(float valor_em_dolar, float cotacao, float icms, float lucro);

int main(){
    float valor_compra, cotacao_dolar, porc_icms, porc_lucro;

    printf("Digite valor compra (em dolar): ");
    scanf("%f", &valor_compra);
    printf("Digite cotação dolar: ");
    scanf("%f", &cotacao_dolar);
    printf("Digite porcentagem ICMS: ");
    scanf("%f", &porc_icms);
    printf("Digite porcentagem de lucro: ");
    scanf("%f", &porc_lucro);

    printf("Total a pagar: R$: %.2f\n\n", calcular_preco(valor_compra, 
                                                    cotacao_dolar,
                                                    porc_icms,
                                                    porc_lucro));


    return 0;
}

float converte_para_real(float valor, float cotacao_dolar){
    return valor * cotacao_dolar;
}

float calcular_porcentagem(float valor, float porcentagem){
    porcentagem = porcentagem / 100;
    return valor * porcentagem;
}

float calcular_preco(float valor_em_dolar, float cotacao, float icms, float lucro){
    float valor_em_real;
    float preco_final;

    valor_em_real = converte_para_real(valor_em_dolar, cotacao);
    preco_final = valor_em_real + calcular_porcentagem(valor_em_real, icms);
    preco_final = preco_final + calcular_porcentagem(valor_em_real, lucro);

    return preco_final;
}
