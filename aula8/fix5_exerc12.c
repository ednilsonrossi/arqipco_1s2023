#include <stdio.h>
#define MAXSIZE 10

void ler_tomada(int tomada, float raia1[], float raia2[], float raia3[], float raia4[], float raia5[]);
float menor_tempo(float array[], int size);
float maior_tempo(float array[], int size);
float media_tempo_por_tomada(int tomada, float raia1[], float raia2[], float raia3[], float raia4[], float raia5[]);


int main(int argc, char const *argv[]){
    float nadador1[MAXSIZE];
    float nadador2[MAXSIZE];
    float nadador3[MAXSIZE];
    float nadador4[MAXSIZE];
    float nadador5[MAXSIZE];
    float media;
    int controle;

    for(controle = 0; controle != MAXSIZE; controle += 1){
        ler_tomada(controle+1, nadador1, nadador2, nadador3, nadador4, nadador5);
    }

    printf("Menor tempo Raia 1: %.2f\n", menor_tempo(nadador1, MAXSIZE));
    printf("Menor tempo Raia 2: %.2f\n", menor_tempo(nadador2, MAXSIZE));
    printf("Menor tempo Raia 3: %.2f\n", menor_tempo(nadador3, MAXSIZE));
    printf("Menor tempo Raia 4: %.2f\n", menor_tempo(nadador4, MAXSIZE));
    printf("Menor tempo Raia 5: %.2f\n", menor_tempo(nadador5, MAXSIZE));

    printf("Maior tempo Raia 1: %.2f\n", maior_tempo(nadador1, MAXSIZE));
    printf("Maior tempo Raia 2: %.2f\n", maior_tempo(nadador2, MAXSIZE));
    printf("Maior tempo Raia 3: %.2f\n", maior_tempo(nadador3, MAXSIZE));
    printf("Maior tempo Raia 4: %.2f\n", maior_tempo(nadador4, MAXSIZE));
    printf("Maior tempo Raia 5: %.2f\n", maior_tempo(nadador5, MAXSIZE));

    for(controle = 0; controle != MAXSIZE; controle += 1){
        media = media_tempo_por_tomada(controle+1, nadador1, nadador2, nadador3, nadador4, nadador5);
        printf("Tomada %d - média de tempo: %.3f s.\n", controle+1, media);
    }

    return 0;
}

float media_tempo_por_tomada(int tomada, float raia1[], float raia2[], float raia3[], float raia4[], float raia5[]){
    float sum;
    sum = raia1[tomada-1] + raia2[tomada-1] + raia3[tomada-1] + raia4[tomada-1] + raia5[tomada-1];
    return sum / 5.0;
}

float menor_tempo(float array[], int size){
    float menor;
    int index;

    menor = array[0];
    for(index = 1; index != size; index++){
        if(array[index] < menor){
            menor = array[index];
        }
    }

    return menor;
}

float maior_tempo(float array[], int size){
    float maior;
    int index;

    maior = array[0];
    for(index = 1; index != size; index++){
        if(array[index] > maior){
            maior = array[index];
        }
    }

    return maior;
}

void ler_tomada(int tomada, float raia1[], float raia2[], float raia3[], float raia4[], float raia5[]){
    printf("TOMADA: %d\n\n", tomada);
    printf("Raia 1: ");
    scanf("%f", &raia1[tomada-1]);
    printf("Raia 2: ");
    scanf("%f", &raia2[tomada-1]);
    printf("Raia 3: ");
    scanf("%f", &raia3[tomada-1]);
    printf("Raia 4: ");
    scanf("%f", &raia4[tomada-1]);
    printf("Raia 5: ");
    scanf("%f", &raia5[tomada-1]);
}