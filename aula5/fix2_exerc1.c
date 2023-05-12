#include <stdio.h>

int readInt();
int is_even(int value);
double average(int n1, int n2, int n3, int n4);

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    double media;

    a = readInt();
    b = readInt();
    c = readInt();
    d = readInt();

    media = average(a, b, c, d);

    media == 0 ? printf("Não existe valor par.") : printf("MEDIA = %.3lf", media);
    printf("\n\n");

    return 0;
}

double average(int n1, int n2, int n3, int n4){
    double sum, count;

    sum = 0;
    count = 0;

    if(is_even(n1)){
        sum = sum + n1;
        count = count + 1;
    }

    if(is_even(n2)){
        sum = sum + n2;
        count++;
    }

    if(is_even(n3)){
        sum = sum + n3;
        ++count;
    }

    if(is_even(n4)){
        sum += n4;
        count++;
    }

    if(count != 0){
        return sum / count;
    }else{
        return 0;
    }

}
/*
double average(int n1, int n2, int n3, int n4){
    double value;

    if( is_even(n1) ){
        if( is_even(n2) ){
            if( is_even(n3) ){
                if( is_even(n4) ){
                    value = (n1 + n2 + n3 + n4) / 4.0;
                }else{
                    value = (n1 + n2 + n3) / 3.0;
                }
            }else{
                if( is_even(n4) ){
                    value = (n1 + n2 + n4) / 3.0;
                }else{
                    value = (n1 + n2) / 2.0;
                }
            }
        }else{
            if( is_even(n3) ){
                if( is_even(n4) ){
                    value = (n1 + n3 + n4) / 3.0;
                }else{
                    value = (n1 + n3) / 2.0;
                }
            }else{
                if( is_even(n4) ){
                    value = (n1 + n4) / 2.0;
                }else{
                    value = n1;
                }
            }
        }
    }else{
        if( is_even(n2) ){
            if( is_even(n3) ){
                if( is_even(n4) ){
                    value = (n2 + n3 + n4) / 3.0;
                }else{
                    value = (n2 + n3) / 2.0;
                }
            }else{
                if( is_even(n4) ){
                    value = (n2 + n4) / 2.0;
                }else{
                    value = n2;
                }
            }
        }else{
            if( is_even(n3) ){
                if( is_even(n4) ){
                    value = (n3 + n4) / 2.0;
                }else{
                    value = n3;
                }
            }else{
                if( is_even(n4) ){
                    value = n4;
                }else{
                    value = 0.0;
                }
            }
        }
    }

    return value;
}
*/


int is_even(int value){
    return value % 2 == 0;
}

/*
int is_even(int value){
    return value % 2 ? 0 : 1;
}
*/

/*
int is_even(int value){
    return value % 2 == 0 ? 1 : 0;
}
*/

/*
int is_even(int value){
    int resultado;
    resultado = value % 2;
    if(resultado == 0){
        return 1;
    }
    return 0;
}
*/

/*
int is_even(int value){
    int resultado;
    resultado = value % 2;
    if(resultado == 0){
        return 1;
    }else{
        return 0;
    }
}
*/

/*
int is_even(int value){
    int resultado, retorno;
    resultado = value % 2;
    if(resultado == 0){
        retorno = 1;
    }else{
        retorno = 0;
    }
    return retorno;
}*/


int readInt(){
    int value;
    printf("Digite número inteiro: ");
    scanf("%d", &value);
    return value;
}