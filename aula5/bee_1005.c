#include <stdio.h>

double mediap(float a, float b);
void mediap_pog();

//Variável global é considerada POG na disciplina e tem uso proibido.
float X, Y, R;

int main() {
    float a, b;
    double result;
    
    scanf("%f%f", &a, &b);
    printf("MEDIA = %lf\n", mediap(a, b) );
    printf("MEDIA = %lf\n", R );

    printf("\n------------\n\n");
    
    scanf("%f%f", &X, &Y);
    mediap_pog();
    printf("MEDIA = %lf\n", R );

    return 0;
}

double mediap(float a, float b){
    double result;
    result = ( (a * 3.5) + (b * 7.5) ) / (7.5 + 3.5);
    R = 666;
    return result;
}

void mediap_pog(){
    R = ( (X * 3.5) + (Y * 7.5) ) / (7.5 + 3.5);
}