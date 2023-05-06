#include <stdio.h>

void ordenar(float a, float b, float c);
void imprime(float a, float b, float c);

int main(int argc, char const *argv[])
{
    float n1, n2, n3;

    printf("Digite 3 números: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    ordenar(n1, n2, n3);

    return 0;
}

void ordenar(float a, float b, float c){

    if( a < b){
        if(b < c){
            imprime(a, b, c);
        }else{
            if(a < c){
                imprime(a, c, b);
            }else{
                imprime(c, a, b);
            }
        }
    }else{
        if(b < c){
            if(a < c){
                imprime(b, a, c);
            }else{
                imprime(b, c, a);
            }
        }else{
            if(b < a){
                imprime(c, b, a);
            }else{
                imprime(c, a, b);
            }
        }
    }

}

void imprime(float a, float b, float c){
    printf("\n[%.2f; %.2f; %.2f]\n\n", a, b, c);
}