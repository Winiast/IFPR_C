#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12
int main(){

     int a, maior =0, menor=0, vet[TAM], posicao_maior = 0, posicao_menor = 0, flag=1;
    
    srand(time(NULL));

    printf("Vetor Aleatorio: ");
    for(a=0; a<TAM; a++) {
        vet[a] = 10 + (rand()%89);
        printf(" %i ", vet[a]);
    }

}