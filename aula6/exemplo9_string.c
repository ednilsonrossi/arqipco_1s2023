#include <stdio.h>
#include <strings.h>

int main(int argc, char const *argv[])
{
    char text[15];
    
    printf("Digite um texto: \n");
    fgets(text, 15, stdin);
    
    printf("Digitado: \n\n");

    printf("%s", text);
    puts(text);
    fputs(text, stdout);


    printf("\n\n");
    return 0;
}
