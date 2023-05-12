#include <stdio.h>

char categoria(int idade);
char categoria_python_lovers(int idade);


int main(int argc, char const *argv[])
{
    int idade;

    printf("Digite a idade: \n");
    scanf("%d", &idade);

    if(idade < 5){
        printf("Nadador sem categoria\n\n");
    }else{
        printf("Nadador caregoria: %c\n\n", categoria(idade));
        printf("Nadador caregoria: %c\n\n", categoria_python_lovers(idade));
    }

    return 0;
}

char categoria(int idade){
    if(idade >= 5){
        if(idade <= 7){
            return 'A';
        }else{
            if(idade <= 10){
                return 'B';
            }else{
                if(idade <= 13){
                    return 'C';
                }else{
                    if(idade <= 18){
                        return 'D';
                    }else{
                        return 'E';
                    }
                }
            }
        }
    }
}

char categoria_python_lovers(int idade){
    if(idade >= 5){
        if(idade <= 7)
            return 'A';
        else if(idade <= 10)
            return 'B';
        else if(idade <= 13)
            return 'C';
        else if(idade <= 18)
            return 'D';
        else
            return 'E';
    }
}