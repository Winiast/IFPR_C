#include <stdio.h>

int main(){

    int valor[7],i,j, menor[7], ordem[7], t = 0;
    
    printf("Digite 7 numeros: ");
    scanf("%i %i %i %i %i %i %i", &valor[1],&valor[2],&valor[3], &valor[4], &valor[5], &valor[6], &valor[7]);

    //printf("- Ordem crescente: ");//

    for(i=1; i <= 7; i++){
        printf("\n Valores coluna [%i]", i);

        for(j=1; j <= 7; j++){
            printf(" %i ", valor[j]);
            
        }
    }
    printf(" \n");

    
}