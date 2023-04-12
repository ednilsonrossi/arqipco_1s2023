/*
A  fábrica  de  refrigerantes  Meia-Cola  vende  seu  produto em três formatos: lata  
de  350  ml, garrafa de 600 ml e garrafa de 2 litros. Se um comerciante compra uma 
determinada quantidade de  cada  formato,  faça  um  algoritmo  para  calcular  
quantos  litros  de  refrigerante  ele  comprou. Devem ser mostradas as mensagens 
“Digite a qntd de latas de 350 ml: ”, “Digite a qntd de garrafas de 600 ml:”, 
“Digite a qntd de garrafas de 2 litros: ” e “Litros de refrigerante comprados: ”.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int qtd;
    float total_litros;

    printf("Digite a qntd de latas de 350 ml.....: ");
    scanf("%d", &qtd);
    total_litros = qtd * 350;

    printf("Digite a qntd de garrafas de 600 ml..: ");
    scanf("%d", &qtd);
    total_litros = total_litros + qtd * 600;

    printf("Digite a qntd de garrafas de 2 litros: ");
    scanf("%d", &qtd);
    total_litros = total_litros + qtd * 2000;

    //Conversão de ML para Litros
    total_litros = total_litros / 1000;

    printf("Litros de refrigerante comprados.....: %.3f \n\n", total_litros);
    return 0;
}
