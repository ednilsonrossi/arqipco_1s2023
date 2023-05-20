#include <stdio.h>
#include <strings.h>

int main(int argc, char const *argv[])
{
    char text[5];
    
    printf("Digite um texto: \n");
    gets(text);
    
    printf("Digitado: \n\t%s\n\n", text);
    return 0;
}
