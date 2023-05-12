/*
Uma   fábrica   de   camisetas   produz   os   tamanhos   P,   M   e   G,   
cada   uma   sendo vendida respectivamente  por  40,  42  e  45  reais.  Construa  
um  algoritmo  em  que  o usuário  forneça  a quantidade  de  camisetas P,  M  e  G 
referentes  a  uma  venda,  e  a  máquina informa o valor que será arrecadado. Devem 
ser mostradas as mensagens “Digite a quantidade de P: ”, “Digite a quantidade de M: ”,
“Digite a quantidade de G: ” e “Total arrecadado: ”.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor_p, valor_m, valor_g;
    int qtdade;
    int valor;

    valor_p = 40;
    valor_m = 42;
    valor_g = 45;
    printf("Digite a quantidade de P: ");
    scanf("%d", &qtdade);
    valor = qtdade * valor_p;

    printf("Digite a quantidade de M: ");
    scanf("%d", &qtdade);
    valor = qtdade * valor_m + valor;

    printf("Digite a quantidade de G: ");
    scanf("%d", &qtdade);
    valor = qtdade * valor_g + valor;

    printf("Total arrecadado: R$ %d.00 \n\n", valor);
    return 0;
}
