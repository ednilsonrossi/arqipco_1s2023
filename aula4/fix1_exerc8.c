#include <stdio.h>
#include <math.h>

//Assinatura de funções
float media_aritmetica(float a, float b, float c, float d);
float ler_nota();
float soma4(float, float, float, float);
float soma(float, float);
float media_quadratica(float n1, float n2, float n3, float n4);
float media_harmonica(float, float, float, float);


//Função principal
int main(int argc, char const *argv[])
{
    float nota_a, nota_b, nota_c, nota_d;

    nota_a = ler_nota();
    nota_b = ler_nota();
    nota_c = ler_nota();
    nota_d = ler_nota();
    
    printf("MEDIA ARITMÉTICA.: %.3f\n", media_aritmetica(nota_a, nota_b, nota_c, nota_d));
    printf("MEDIA QUADRÁTICA.: %.3f\n", media_quadratica(nota_a, nota_b, nota_c, nota_d));
    printf("MEDIA HARMÔNICA..: %.3f\n", media_harmonica(nota_a, nota_b, nota_c, nota_d));

    return 0;
}


//Implementações de funções
float ler_nota(){
    float nota;
    printf("Digite nota: ");
    scanf("%f", &nota);
    return nota;
}

float soma(float n1, float n2){
    return n1 + n2;
}

float soma4(float n1, float n2, float n3, float n4){
    float sum = 0;
    sum = soma(n1, n2);
    sum = soma(sum, n3);
    sum = soma(sum, n4);
    return sum;
}

float media_aritmetica(float a, float b, float c, float d){
    return soma4(a, b, c, d) / 4;
}

float media_quadratica(float n1, float n2, float n3, float n4){
    float sum = soma4(pow(n1, 2), pow(n2, 2), pow(n3, 2), pow(n4, 2));
    sum = sum / 4;
    return sqrt(sum);
}

float media_harmonica(float a, float b, float c, float d){
    return 4 / soma4(1/a, 1/b, 1/c, 1/d);
}


















