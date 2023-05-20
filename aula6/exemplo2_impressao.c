#include <stdio.h>

void print_message(int quantity);

int main(int argc, char const *argv[])
{
    print_message(10);
    return 0;
}

void print_message(int quantity){
    if(quantity == 0){
        return;
    }
    print_message(quantity-1);
    printf("Essa é a mensagem %d\n", quantity);
}

/*
void print_message(int quantity){
    if(quantity == 0){
        return;
    }
    printf("Essa é a mensagem %d\n", quantity);
    print_message(quantity-1);
}
*/