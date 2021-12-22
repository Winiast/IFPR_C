#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    int tamanho = 5;

    int *p;

    p = malloc(tamanho*sizeof(int));

    for(x=0; x < tamanho; x++){
        p[x] = x;
        printf("\np[%i] = %i ",x , p[x]);


    }

    free(p);
    
}