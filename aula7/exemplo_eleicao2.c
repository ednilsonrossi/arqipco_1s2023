#include <stdio.h>
#include <string.h>

int eh_eleitor(int age);
int leitura();
void impressao(int is_voter);

int main(int argc, char const *argv[])
{
    int id1, id2, id3, id4, id5;
    
    id1 = leitura();
    id2 = leitura();
    id3 = leitura();
    id4 = leitura();
    id5 = leitura();

    impressao(eh_eleitor(id1));
    impressao(eh_eleitor(id2));
    impressao(eh_eleitor(id3));
    impressao(eh_eleitor(id4));
    impressao(eh_eleitor(id5));

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