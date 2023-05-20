#include <stdio.h>
#include <strings.h>

int eh_eleitor(int age);

int main(int argc, char const *argv[])
{
    int idade;
    char resposta[20];
    printf("Digite idade: \n");
    scanf("%d", &idade);

    if(eh_eleitor(idade))
        strcpy(resposta, "Pode votar.");
    else
        strcpy(resposta, "Não pode votar.");
    
    printf("%s\n", resposta);
    return 0;
}

int eh_eleitor(int age){
    return age >= 16 ? 1 : 0;
}
