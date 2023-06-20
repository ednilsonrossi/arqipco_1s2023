#include <stdio.h>
#define QUESTOES 20
#define MAX_ALUNOS 30

void ler_dados(char array[]);

int main(int argc, char const *argv[]){
    char gabarito[QUESTOES];
    char alunos[MAX_ALUNOS][QUESTOES];
    int conta_acertos;
    int linha, coluna;

    printf("Digite Gabarito:\n");
    ler_dados(gabarito);

    
    printf("\nRespostas dos alunos:\n");

    for(linha = 0; linha != MAX_ALUNOS; linha += 1){
        for(coluna = 0; coluna != QUESTOES; coluna += 1){
            printf("Aluno %d - Questão %d: ", linha+1, coluna+1);
            scanf("%c", &alunos[linha][coluna]);
            __fpurge(stdin);
        }
    }

    for(linha = 0; linha != MAX_ALUNOS; linha+=1){
        for(coluna = 0, conta_acertos = 0; coluna != QUESTOES; coluna++){
            if(alunos[linha][coluna] == gabarito[coluna]){
                conta_acertos += 1;
            }
        }
        printf("Aluno %d, acertou %d questões.\n", linha+1, conta_acertos);
    }
    

    for(linha = 0, conta_acertos=0; linha != MAX_ALUNOS; linha++){
        if(alunos[linha][1] == gabarito[1]){
            conta_acertos+=1;
        }
    }
    printf("%d alunos acertaram a questão 2.\n\n", conta_acertos);


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