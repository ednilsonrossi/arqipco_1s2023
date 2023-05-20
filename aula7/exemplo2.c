#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, contador;
    int lido, maior;

    printf("Digite N: ");
    scanf("%d", &n);

    /* 
    //ALTERNATIVA É LER O MAIOR FORA DA REPETIÇÃO E REMOVER 1 UNIDADE DE N.
    printf("Digite número: \n");
    scanf("%d", &maior);
    */
    contador = 0;
    while (contador < n)
    {
        printf("Digite número: \n");
        scanf("%d", &lido);

        if(contador == 0){
            maior = lido;
        }

        if(lido > maior){
            maior = lido;
        }

        contador++;
    }
    
    printf("Maior: %d\n\n", maior);
    return 0;
}
