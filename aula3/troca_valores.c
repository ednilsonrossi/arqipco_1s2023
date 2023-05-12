/*
Crie  um  algoritmo  que mostre  a  mensagem “Digite os valores de A e B:” e  leia  
dois  valores numéricos para as  variáveis  A  e B.  O  algoritmo deve  efetuar  a  
troca dos  valores,  de  forma que a variável  A  passe  a  possuir  o  valor  da  
variável  B  e  que  a  variável  B  passe  a  possuir  o  valor  da variável A.  
Os valores trocados devem ser mostrados.​
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, temporaria;

    printf("Digite valores de A e B: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    temporaria = a;
    a = b;
    b = temporaria;

    printf("A: %d \nB: %d\n\n", a, b);

    return 0;
}
