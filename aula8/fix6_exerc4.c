#include <stdio.h>
#define QUESTOES 4

void ler_dados(char array[]);

int main(int argc, char const *argv[]){
    char gabarito[20];
    char aluno_1[20];
    char aluno_2[20];
    char aluno_3[20];
    char aluno_4[20];
    int index, conta_acertos;

    printf("Digite Gabarito:\n");
    ler_dados(gabarito);

    printf("\nRespostas aluno 1: \n");
    ler_dados(aluno_1);
    printf("\nRespostas aluno 2: \n");
    ler_dados(aluno_2);
    printf("\nRespostas aluno 3: \n");
    ler_dados(aluno_3);
    printf("\nRespostas aluno 4: \n");
    ler_dados(aluno_4);


    for(index=0, conta_acertos=0; index != QUESTOES; index++){
        if(gabarito[index] == aluno_1[index]){
            conta_acertos += 1;
        }
    }
    printf("O aluno 1 acertou %d questões.\n\n", conta_acertos);

    for(index=0, conta_acertos=0; index != QUESTOES; index++){
        if(gabarito[index] == aluno_2[index]){
            conta_acertos += 1;
        }
    }
    printf("O aluno 2 acertou %d questões.\n\n", conta_acertos);

    for(index=0, conta_acertos=0; index != QUESTOES; index++){
        if(gabarito[index] == aluno_3[index]){
            conta_acertos += 1;
        }
    }
    printf("O aluno 3 acertou %d questões.\n\n", conta_acertos);

    for(index=0, conta_acertos=0; index != QUESTOES; index++){
        if(gabarito[index] == aluno_4[index]){
            conta_acertos += 1;
        }
    }
    printf("O aluno 4 acertou %d questões.\n\n", conta_acertos);

    return 0;
}

void ler_dados(char array[]){
    int index;
    for(index = 0; index != QUESTOES; index+=1){
        printf("Questão %d: ", index+1);
        array[index] = getchar();
        __fpurge(stdin);
    }
}