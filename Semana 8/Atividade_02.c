#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int  ant=1, atu=1, num_t, prox, cont;

    printf("Numero de termos: ");
    scanf("%i", &num_t);

    printf("\n- Serie de Fibonacci[%i]: 1 1 ", num_t);

    for(cont = 2; cont < num_t; cont++) {
        prox = ant + atu;
        printf("%i ", prox);
        ant = atu;
        atu = prox;
    }

    printf("\n");
    return 0;
}
