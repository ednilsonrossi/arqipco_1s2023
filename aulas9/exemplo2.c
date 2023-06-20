#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 40

/*
Definição da estrutura de dado que representa 
uma instância do meu problema. Aqui agrupamos todos
os dados relevantes em campos.
*/
struct tipo_aluno{
    char name[30];
    char sex;
    int age;
};


int main_menu();
void insert(struct tipo_aluno elements[], int size);
void to_print(struct tipo_aluno element);
void show_all(struct tipo_aluno elements[], int size);

int main(int argc, char const *argv[]){

    /*
    Declaração da variável dataset do tipo struct tipo_aluno. 
    Essa é uma variável composta homogênea (vetor) onde cada variável 
    que compõe o vetor é uma variável composta heterogêna (estrutura).
    */
    struct tipo_aluno dataset[MAXSIZE];

    char continuar, param_char;
    int selected, size, param_int;


    size = 0;
    do{
        selected = main_menu();
        switch (selected){
        case 1:
            insert(dataset, size);
            size += 1;
            break;
        
        case 2:
            show_all(dataset, size);
            break;

        case 3:
            printf("Sexo para relatório: ");
            scanf("%c", &param_char);
            __fpurge(stdin);
            param_char = toupper(param_char);

            printf("-- ESTUDANTES DO SEXO %C -- \n", param_char);
            for(int pos = 0; pos != size; pos += 1){
                if(dataset[pos].sex == param_char){
                    to_print(dataset[pos]);
                }
            }
            break;

        case 4:
            printf("Idade para relatório: ");
            scanf("%d", &param_int);
            __fpurge(stdin);

            printf("-- ESTUDANTES COM IDADE IGUAL OU SUPERIOR A %d -- \n", param_int);
            for(int pos = 0; pos != size; pos += 1){
                if(dataset[pos].age >= param_int){
                    to_print(dataset[pos]);
                }
            }
            break;

        default:
            printf("FINALIZANDO...\n\n");
            break;
        }

    }while(selected != 0);

    
    return 0;
}


void insert(struct tipo_aluno elements[], int size){
    printf("Digite nome.....: ");
    fgets(elements[size].name, 30, stdin);
    __fpurge(stdin);

    printf("Digite sexo (M/F): ");
    elements[size].sex = getchar();
    elements[size].sex = toupper(elements[size].sex);
    __fpurge(stdin);

    printf("Idade............: ");
    scanf("%d", &elements[size].age);
    __fpurge(stdin);
}


void to_print(struct tipo_aluno element){
    printf("> %c \t %3d \t %s ", element.sex, element.age, element.name);
}


void show_all(struct tipo_aluno elements[], int size){
    int index;
    for(index = 0; index < size; index++){
        to_print(elements[index]);
    }
}

int main_menu(){
    int option;
    do{
        printf("\n\n** SELECIONE UMA OPÇÃO **\n");
        printf("(1) - Cadastrar aluno\n");
        printf("(2) - Listar todos alunos\n");
        printf("(3) - Listar alunos de acordo com sexo\n");
        printf("(4) - Listar alunos de acordo com idade\n");
        printf("(0) - Sair\n");
        printf("\n Opção desejada: ");
        scanf("%d", &option);
        __fpurge(stdin);
    }while(option < 0 || option > 4);
    return option;
}