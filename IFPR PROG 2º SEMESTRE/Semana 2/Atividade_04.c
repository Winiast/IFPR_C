#include <stdio.h>


void ordenar(char letras[6]);

int main(){

    char letras[6];
    int i = 0;

    printf("Digite cinco letras: ");
    scanf("%c %c %c %c %c", &letras[1], &letras[2], &letras[3], &letras[4], &letras[5]);


    printf("- Ordenado: ");
    ordenar(letras);
}

void ordenar(char letras[6]){
    char letraMaiscula[6];
    int maiscula = 0;

    for(int i=1; i <=5 ; i++){
        maiscula = letras[i];
        if(maiscula > 90){
            letraMaiscula[i] = maiscula - 32;
        }else{
            letraMaiscula[i] = maiscula;
        }
    }
    int aux;

    for(int i = 1; i <=5; i++){

        for(int p = 1; p <= 5; p++){
            if(letraMaiscula[i] < letraMaiscula[p]){
                aux = letraMaiscula[i];
                letraMaiscula[i] = letraMaiscula[p];
                letraMaiscula[p] = aux;
            }
        }
    }

    for(int i = 1; i <=5; i++){
        printf("%c ", letraMaiscula[i]);
    }

}