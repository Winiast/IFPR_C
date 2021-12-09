#include <stdio.h>
#include <math.h>

int main(){
    int valor, quadrado, cubo;
    printf("\nDigite um número: ");
    scanf("%i", &valor);
    quadrado = pow(valor, 2);
    cubo = pow(valor, 3);
    printf("- Quadrado = %i\n", quadrado);
    printf("- Cubo = %i\n", cubo);

}
