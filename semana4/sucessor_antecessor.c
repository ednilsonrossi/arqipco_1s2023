/*
Crie  um  algoritmo  que  leia  um  valor  numérico  e  apresente  na  tela  
seus  valores  sucessor  e antecessor após as respectivas mensagens “Sucessor: 
” e “Antecessor: ”.​
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero;
    printf("Digite número: ");
    scanf("%d", &numero);

    printf("Sucesso: \t %d \nAntecessor: \t %d\n\n", numero+1, numero-1);

    return 0;
}
