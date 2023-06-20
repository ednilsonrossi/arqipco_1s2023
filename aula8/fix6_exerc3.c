#include <stdio.h>
#define MAX 999999
#define TRUE 1
#define FALSE 0

int eh_primo(int number);

int main(int argc, char const *argv[]){
    
    int n;

    for(n = 1; n <= MAX; n+=1){
        if(eh_primo(n)){
            printf("%d, ", n);
        }
    }

    return 0;
}


int eh_primo(int number){

    int divisor;
    int tem_divisor;

    divisor = 2;
    tem_divisor = FALSE;
    //while (divisor < (number/2) + 1  && tem_divisor == FALSE)
    while (divisor*divisor < number+1  && tem_divisor == FALSE)
    {
        if(number % divisor == 0){
            tem_divisor = TRUE;
        }

        divisor += 1;
    }
    
    return tem_divisor ? FALSE : TRUE;

}