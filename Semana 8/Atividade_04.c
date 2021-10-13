#include <stdio.h>

int main(){

    int valor[8],count=0, i = 1, flag = 1, maior = 0;
    
    printf("Digite 7 numeros: ");
    scanf("%i %i %i %i %i %i %i", &valor[1],&valor[2],&valor[3], &valor[4], &valor[5], &valor[6], &valor[7]);

    printf("- Ordem crescente: ");
    while(i < 8){


            if(valor[i] > maior){
                maior = valor[i];
            }
        
        printf("%i ",valor[i]);
        i ++;
    }

    printf("\n %i", maior);

}