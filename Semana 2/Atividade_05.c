#include <stdio.h>

int main(){
    
    float celsius, transformador;
    printf("Digite a temperatura em Celcius (ºC): ");
    scanf("%f", &celsius);
    transformador = (9 * celsius + 160) / 5;
    printf("- Temperatura em Fahrenheit = %.1f", transformador);

}