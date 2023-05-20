#include <stdio.h>
#include <strings.h>
#include <ctype.h>

void maiusculo(char origem[], int posicao_inicial);

int main(int argc, char const *argv[])
{
    char text[50];
    
    printf("Digite um texto: \n");
    fgets(text, 50, stdin);
    
    maiusculo(text, 0);

    printf("Digitado: \n");
    fputs(text, stdout);

    return 0;
}

void maiusculo(char origem[], int posicao_inicial){
    if(origem[posicao_inicial] == '\n'){
        return;
    }else{
        maiusculo(origem, posicao_inicial+1);
        origem[posicao_inicial] = toupper(origem[posicao_inicial]);
    }
}