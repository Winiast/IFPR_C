#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4
int main(){

    int a, vet[TAM], media =0, soma = 0;
    srand(time(NULL));

    printf("Vetor Aleatorio: ");
    for(a=0; a<TAM; a++) {
        vet[a] = 10 + (rand()%89);
        printf(" %i ", vet[a]);
        soma = soma + vet[a];
    }

    media = soma / TAM;

    printf("\n -Valor Medio: %i", media);
}