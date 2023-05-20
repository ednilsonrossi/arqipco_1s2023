#include <stdio.h>
#include <string.h>

int eh_eleitor(int age);
int leitura();
void impressao(int is_voter);

int main(int argc, char const *argv[])
{
    int idade;
    
    idade = leitura();
    impressao(eh_eleitor(idade));

    idade = leitura();
    impressao(eh_eleitor(idade));

    idade = leitura();
    impressao(eh_eleitor(idade));

    idade = leitura();
    impressao(eh_eleitor(idade));

    idade = leitura();
    impressao(eh_eleitor(idade));

    return 0;
}

int eh_eleitor(int age){
    return age >= 16 ? 1 : 0;
}

int leitura(){
    int value;
    printf("Digite idade: \n");
    scanf("%d", &value);
    return value;
}

void impressao(int is_voter){
    char resposta[20];
    if(is_voter)
        strcpy(resposta, "Pode votar.");
    else
        strcpy(resposta, "Não pode votar.");
    
    printf("%s\n", resposta);
}