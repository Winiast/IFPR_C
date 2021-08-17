#include <stdio.h>

int main(){
    float media, distancia;
    int gasolina;

    printf("Média de consumo (km/l): ");
    fflush(stdin);
    scanf("%f", &media);
    printf("Gasolina no tanque (l): ");
    fflush(stdin);
    scanf("%i", &gasolina);
    distancia = media * gasolina;
    printf("- Distância percorrida = %.1f km", distancia);

}