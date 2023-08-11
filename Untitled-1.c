#include <stdio.h>

int main() {
    float celsios, fahrenheit;
    printf("digite graus celsios: ");
    scanf("%f",&celsios);
    
    fahrenheit = (celsios * 9/5 )+32;
    
    printf("equivale graus fahrenheit:%.2f\n ",fahrenheit);
    
    return 0;
}