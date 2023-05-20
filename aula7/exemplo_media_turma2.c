#include <stdio.h>

int main(int argc, char const *argv[]){
    double nota, soma_notas, media;
    int conta_aluno, total_aluno;
    char continuar_leitura;

    
    soma_notas = 0;
    conta_aluno = 0;
    
    printf("Quantidade de alunos: ");
    scanf("%d", &total_aluno);

    while (conta_aluno < total_aluno)    {
        printf("Digite nota do aluno: \n");
        scanf("%lf", &nota);

        soma_notas = soma_notas + nota;
        conta_aluno = conta_aluno + 1;
    }
    
    media = soma_notas / conta_aluno;
    printf("Média da turma: %.2lf\n\n", media);
    return 0;
}
