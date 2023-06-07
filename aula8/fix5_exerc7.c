#include <stdio.h>
#define MAXSIZE 20
#define TRUE 1
#define FALSE 0

int busca_sequencial(char dataset[], int size, char key);

int main(int argc, char const *argv[]){
    char array[MAXSIZE];
    char letra;

    for(int index = 0; index != MAXSIZE; index += 1){
        printf("Posição[%d]: ", index);
        scanf("%c", &array[index]);
        __fpurge(stdin);
    }    
    //fgets(array, MAXSIZE, stdin);

    printf("Letra desejada: ");
    letra = getchar();

    if( busca_sequencial(array, MAXSIZE, letra) ){
        printf("%c existe no vetor.\n", letra);
    }else{
        printf("%c não existe no vetor.\n", letra);
    }
    return 0;
}


int busca_sequencial(char dataset[], int size, char key){
    int existe;
    int index;

    existe = FALSE;

    index = 0;
    while(index < size && !existe){  //!existe é o mesmo que existe == FALSE
        if(dataset[index] == key){
            existe = TRUE;
        }
        index += 1;
    }

    return existe;
}