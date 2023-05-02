#include <stdio.h>

int main(int argc, char const *argv[])
{
    float entrada = 5.36;
    double inteira, decimal;
    int reais, centavos;

    /*
        Forma 1:
        Utilizar o cast (transformação de tipos), descobrindo a parte inteira e, a partir da lógica,
        extair os centavos também para uma variável inteira.
    */
    reais = (int) entrada;
    centavos = (int) ((entrada - reais) * 100);
    printf("%d e %d\n\n", reais, centavos);


    /*
        Forma 2:
        usando a função modf() temos como obter os valores da parte inteira e decimal, depois basta
        converter para inteiro.
    */
    decimal = modf(entrada, &inteira);
    reais = (int) inteira;
    centavos = (int) (decimal * 100);
    printf("%d e %d\n\n", reais, centavos);


    
    return 0;
}
