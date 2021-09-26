#include <stdio.h>


int main(){

    int numero = 0, cont = 0, teste = 0, soma = 0;

    printf("Numero inteiro: ");
    scanf("%i", &numero);

    while(numero != cont){

        

        cont++;
        teste = numero % cont;

        if (teste == 0){
            soma = soma + cont;
            if(numero == soma){
                printf("=");
            }
            else{
            printf("%i + ", soma);
            }
        }
        
        

    }

    if(soma == numero){
        printf(" %i [PERFEITO]", numero);

    }

    else{
        printf("= %i [IMPERFEITO]", numero);
    }
}