#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12

int main() {

    int a, qtde=0, qtde35=0, vet[TAM];
    
    srand(time(NULL));

    printf("Vetor Aleatorio: ");
    for(a=0; a<TAM; a++) {
        vet[a] = 10 + (rand()%41);
        if(vet[a] >= 20 && vet[a] <= 40) {
            qtde++;
        }
        if(vet[a] > 35) {
            qtde35++;
        }
        printf("%i ", vet[a]);
    }
    printf("\n - Qtde de numeros entre 20 e 40: %i", qtde);
    
    printf("\n - Numeros pares: ");
    for(a=0; a<TAM; a++) {
        if(vet[a]%2 == 0) {
            printf("%i ", vet[a]);
        }
    }

    printf("\n - Qtde de numeros maiores que 35: %i", qtde35);

    printf("\n");
    return 0;
}