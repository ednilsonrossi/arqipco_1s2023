#include <stdio.h>

float consumo(int x, float y);
 
int main(){
    int x;
    float y;
    
    scanf("%d", &x);
    scanf("%f", &y);
    
    printf("%.3f km/l\n", consumo(x, y));
    return 0;
}

float consumo(int x, float y){
  return x / y;
}