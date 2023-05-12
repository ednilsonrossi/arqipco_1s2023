#include <stdio.h>

int quantidade_pacotes(int valor);

int quantidade_horas_avulsas(int valor);

int main(int argc, char const *argv[])
{
    int total_horas, pacotes, avulso;
    float valor_pagar;

    printf("Digite horas utilizadas: ");
    scanf("%d", &total_horas);

    pacotes = quantidade_pacotes(total_horas);
    avulso = quantidade_horas_avulsas(total_horas);

    valor_pagar = pacotes * 8.5 + avulso * 3.5;

    printf("Total a pagar: R$ %.2f", valor_pagar);
    return 0;
}

int quantidade_pacotes(int valor){
    int pacotes;
    pacotes = valor / 3;
    return pacotes;
}

int quantidade_horas_avulsas(int valor){
    return valor - quantidade_pacotes(valor) * 3;
}