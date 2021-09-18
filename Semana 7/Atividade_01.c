#include <stdio.h>

int  main() {

    int ini, fim, div, cont;

    printf("Digite um valor: ");
    scanf("%i %i", &ini, &fim); // 5 10

    printf("Números primos entre (%i) e (%i): ", ini, fim);
    while(ini <= fim) {
        cont = 0;
        div = 1;
        while(div <= ini) { 
            if(ini%div == 0) {
                cont++;
            }
            div++; // div = div + 1;
        }

        if(cont == 2) {
            printf("%i ", ini);
        }
        ini++;
    }