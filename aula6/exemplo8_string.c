#include <stdio.h>
#include <strings.h>

int main(int argc, char const *argv[])
{
    char text[10];
    
    printf("Digite um texto: \n");
    fgets(text, 10, stdin);
    
    printf("Digitado: \n\t%s\n\n", text);
    return 0;
}
