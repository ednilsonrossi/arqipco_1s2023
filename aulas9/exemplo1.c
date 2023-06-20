#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 40

int main_menu();
void insert(char array_name[][30], char array_sex[], int array_age[], int size);
void to_print(char name[], char sex, int age);
void show_all(char array_name[][30], char array_sex[], int array_age[], int size);

int main(int argc, char const *argv[]){

    char nome[MAXSIZE][30]; //Matriz de 40 linhas e 30 colunas. Aqui armazena-se o nome de no máximo 40 alunos, e cada nome tem no máximo 30 caracteres
    char sexo[MAXSIZE];
    int idade[MAXSIZE];
    char continuar, param_char;
    int selected, size, param_int;


    size = 0;
    do{
        selected = main_menu();
        switch (selected){
        case 1:
            insert(nome, sexo, idade, size);
            size += 1;
            break;
        
        case 2:
            show_all(nome, sexo, idade, size);
            break;

        case 3:
            printf("Sexo para relatório: ");
            scanf("%c", &param_char);
            __fpurge(stdin);
            param_char = toupper(param_char);

            printf("-- ESTUDANTES DO SEXO %C -- \n", param_char);
            for(int pos = 0; pos != size; pos += 1){
                if(sexo[pos] == param_char){
                    to_print(nome[pos], sexo[pos], idade[pos]);
                }
            }
            break;

        case 4:
            printf("Idade para relatório: ");
            scanf("%d", &param_int);
            __fpurge(stdin);

            printf("-- ESTUDANTES COM IDADE IGUAL OU SUPERIOR A %d -- \n", param_int);
            for(int pos = 0; pos != size; pos += 1){
                if(idade[pos] >= param_int){
                    to_print(nome[pos], sexo[pos], idade[pos]);
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


void insert(char array_name[][30], char array_sex[], int array_age[], int size){
    printf("Digite nome.....: ");
    fgets(array_name[size], 30, stdin);
    __fpurge(stdin);

    printf("Digite sexo (M/F): ");
    array_sex[size] = getchar();
    array_sex[size] = toupper(array_sex[size]);
    __fpurge(stdin);

    printf("Idade............: ");
    scanf("%d", &array_age[size]);
    __fpurge(stdin);
}

void to_print(char name[], char sex, int age){
    printf("> %c \t %3d \t %s ", sex, age, name);
}

void show_all(char array_name[][30], char array_sex[], int array_age[], int size){
    int index;
    for(index = 0; index < size; index++){
        to_print(array_name[index], array_sex[index], array_age[index]);
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