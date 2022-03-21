#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void ordenar(int *p);

int main(){

    int *p, i;

    srand(time(NULL));
    
    p = malloc(10 * sizeof(int));

    printf("\n- Vetor Aleatorio: ");

    for(i=0; i != 10; i++){
        p[i] = 10 + rand()%90;
        printf("%i ", p[i]);
    }

    printf("\n - Vetor Ordenado: ");
    ordenar(p);

    for(i = 0; i < 10; i++){
        printf("%i ", p[i]);
    }
}

void ordenar(int *p){
    int aux;

    int i, j;
    for(i =0; i < 10; i++){

        for(j= i + 1; j < 10; j++){

            if(p[i] > p[j]){
                aux = p[j];
                p[j] = p[i];
                p[i] = aux;
            }
        }
    }
}

