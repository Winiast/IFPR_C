#include <stdio.h>
#include <math.h>

double pitagoras(int valor_a, int valor_b);

int main(){
    int valor_a, valor_b;
    printf("Digite o valor dos catetos: ");
    scanf("%i %i", &valor_a, &valor_b);

    printf("- Hipotenusa %.1f",pitagoras(valor_a,valor_b));

    return 0;
}

double pitagoras(int valor_a, int valor_b) {
    int cateto_ao_quadrado;
    float hipotenusa = 0;
    cateto_ao_quadrado = pow(valor_a, 2) + pow(valor_b,2);
    hipotenusa = sqrt(cateto_ao_quadrado);
    return hipotenusa;
}