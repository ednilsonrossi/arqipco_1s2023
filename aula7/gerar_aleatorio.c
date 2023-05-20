#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int sorted, count;

    srand( (unsigned) time(NULL) );

    count = 0;
    while(count < 10){
        
        sorted = rand() % 100;
        sorted -= 50;

        printf("%dº number between -50 e 50 = %d\n", count+1, sorted);

        count++;
    }

    return 0;
}
