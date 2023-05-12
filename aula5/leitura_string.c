#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Leitura de caracteres
    char letra;
    printf("Digite letra: \n");
    scanf("%c", &letra);
    printf("Letra: %c\n", letra);
    letra = 'z';
    printf("Letra: %c\n", letra);


    //Trabalhando com string
    char palavra[15];
    printf("Digite palavra: \n");
    scanf("%s", palavra);
    printf("Palavra: %s\n", palavra);

    return 0;
}
