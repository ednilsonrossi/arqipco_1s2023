#include <stdio.h>

float diaria_promocional(float normal);
float renda(int lotacao, float diaria);

int main(int argc, char const *argv[])
{
    float diaria;

    printf("Valor da diária: \n");
    scanf("%f", &diaria);

    printf("DIARIA PROMOCIONAL..: R$%8.2f\n", diaria_promocional(diaria));
    printf("RENDA SEM PROMOÇÃO..: R$%8.2f\n", renda(40, diaria));
    printf("RENDA COM PROMOÇÃO..: R$%8.2f\n", renda(70, diaria_promocional(diaria)));
    printf("LUCRO COM A PROMOÇÃO: R$%8.2f\n\n", renda(70, diaria_promocional(diaria)) - renda(40, diaria) );

    return 0;
}

float diaria_promocional(float normal){
    //return normal * 22 / 100;
    return normal * 0.78;
}

float renda(int lotacao, float diaria){
    return (42 * lotacao / 100) * diaria * 8;
}