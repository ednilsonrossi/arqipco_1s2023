#include <stdio.h>

int main(int argc, char const *argv[]){
    double nota, soma_notas, media;
    int conta_aluno;
    char continuar_leitura;

    continuar_leitura = 'S';
    soma_notas = 0;
    conta_aluno = 0;

    while (continuar_leitura == 'S' || continuar_leitura == 's')    {
        printf("Digite nota do aluno: \n");
        scanf("%lf", &nota);

        soma_notas = soma_notas + nota;
        conta_aluno = conta_aluno + 1;

        printf("Continuar entrada de dados (S/N)?");
        scanf("%c", &continuar_leitura);
    }
    
    media = soma_notas / conta_aluno;
    printf("Média da turma: %.2lf\n\n", media);
    return 0;
}
