#include <stdio.h>

int quadrado_versao1(int n);
int quadrado_versao2(int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite N: ");
    scanf("%d", &n);

    printf("%d ^ 2 = %d\n", n, quadrado_versao1(n));
    printf("%d ^ 2 = %d\n", n, quadrado_versao2(n));

    return 0;
}

int quadrado_versao1(int n){
    int contador;
    int somatorio;

    somatorio = 0;
    contador = 1;
    while (contador <= 2*n){
        if(contador % 2 == 1){
            somatorio += contador;
        }
        contador += 1;
    }
    return somatorio;
}

int quadrado_versao2(int n){
    int impar, somatorio;

    somatorio = 0;
    impar = 1;
    while (n > 0){
        somatorio += impar;
        impar += 2;
        n -= 1;
    }
    
    return somatorio;
}