#include <stdio.h>
#include <time.h>

int sortear();

int main(int argc, char const *argv[])
{
    int quantidade, contador;
    int number, maior, menor;

    srand( (unsigned) time(NULL)  );


    printf("Digite N: ");
    scanf("%d", &quantidade);

    menor = maior = 0;
    contador = 0;                   //INICIALIZAÇÃO DO CONTADOR
    while (contador < quantidade)   //CONDIÇÃO DE PARADA
    {
        number = sortear();
        if(number > 0){
            if(menor == 0){
                menor = number;
            }
            if(number < menor){
                menor = number;
            }
        }else{
            if(maior == 0){
                maior = number;
            }
            if(number > maior){
                maior = number;
            }
        }

        contador+=1;                //INCREMENTO DO CONTADOR
    }
  
    printf("Maior negativo: %d\nMenor positivo: %d\n\n", maior, menor);
    return 0;
}

int sortear(){
    int sorteado;
    sorteado = rand() % 100000 ;
    sorteado -= 50000;
    return sorteado;
}