#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 15

int main(){

    char aleatorio[TAM];

    int a, b;

    srand(time(NULL));

    for(a = 0; a < TAM; a++){
        aleatorio[a] = 65 + rand() % 25;
    }
    
    printf("\nVetor Aleatorio: ");
    for(a = 0; a < TAM; a++){
        printf("%c ", aleatorio[a]);
    }

    printf("\nVetor Alterado:  ");
    for(a=0; a < TAM; a++){
        for(b= a + 1; b < TAM; b++){
            if(aleatorio[a] == aleatorio[b]){
                aleatorio[b] ='@';
            }
        }
    }

    for(a=0; a < TAM; a++){
        printf("%c ", aleatorio[a]);
    }

}