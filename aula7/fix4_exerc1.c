#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int numero;
    int conta_pum;

    printf("Digite N: \n");
    scanf("%d", &n);


    numero = 1;
    
    while(n > 0){
        if(numero % 4 == 0){
            printf("PUM \n");
            n--;
        }else{
            printf("%d ", numero);
        }
        numero++;
    }

/*
    numero = 1;
    conta_pum = 0;
    while(conta_pum < n){
        if(numero % 4 == 0){
            printf("PUM \n");
            conta_pum++;
        }else{
            printf("%d ", numero);
        }
        numero++;
    }

*/    

    return 0;
}
