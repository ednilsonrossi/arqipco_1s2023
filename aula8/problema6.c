#include <stdio.h>
#define QTD_TESTES 8
float vm(float dist, float temp);

int main(int argc, char const *argv[])
{
    float distancia[QTD_TESTES];
    float tempo[QTD_TESTES];
    int i;
    
    for(i = 0; i != QTD_TESTES; i += 1 ){
        printf("TESTE %d\n", i+1);
        printf("Distância: ");
        scanf("%f", &distancia[i]);
        printf("Tempo: ");
        scanf("%f", &tempo[i]);
    }

    for(i = 0; i != QTD_TESTES; i++){
        printf("Teste %d - Velocidade média: %.2f\n", 
                i+1, 
                vm(distancia[i], tempo[i])  );
    }
    return 0;
}


float vm(float dist, float temp){
    return dist / temp;
}