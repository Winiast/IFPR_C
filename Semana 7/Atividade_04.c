#include <stdio.h>


int main(){

    int numero = 0, cont = 1, teste = 0, soma = 0;

    printf("Numero inteiro: ");
    scanf("%i", &numero);

    while(cont < numero){

        teste = numero % cont;


        if (teste == 0){
            soma = soma + cont;
            printf("%i + ", cont);
                
        }

    cont++;

    }

    if(soma == numero){
        printf("= %i [PERFEITO]", soma);

    }

    else{
        printf("= %i [IMPERFEITO]", soma);
    }
}