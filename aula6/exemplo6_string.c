#include <stdio.h>
#include <strings.h>

int main(int argc, char const *argv[])
{
    char text[256];
    
    printf("Digite um texto: \n");
    scanf("%s", text);
    
    printf("Digitado: \n\t%s\n\n", text);
    return 0;
}
