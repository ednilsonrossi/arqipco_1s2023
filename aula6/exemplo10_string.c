#include <stdio.h>
#include <strings.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char text[15];
    
    printf("Digite um texto: \n");
    fgets(text, 15, stdin);
    
    text[0] = toupper(text[0]);

    printf("Digitado: \n");
    fputs(text, stdout);

    return 0;
}
