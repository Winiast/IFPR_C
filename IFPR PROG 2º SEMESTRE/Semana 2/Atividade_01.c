#include <stdio.h>
#include <math.h>

int cateto_ao_quadrado, valor_a, valor_b;
double hipotenusa;

void pitagoras();

int main(){
    printf("Digite o valor dos catetos: ");
    scanf("%i %i", &valor_a, &valor_b);

    pitagoras();

    return 0;
}

void pitagoras() {
    cateto_ao_quadrado = pow(valor_a, 2) + pow(valor_b,2);
    hipotenusa = sqrt(cateto_ao_quadrado);
    printf(" - Hipotenusa: %.1f", hipotenusa);
}