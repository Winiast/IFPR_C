#include <stdio.h>

int valor, aux, fat, i;

void fatorial(int valor);

int main(){
    printf("Digite um valor: ");
    scanf("%i", &valor);

    fatorial(valor);
}

void fatorial(int valor){
    fat = 1;
    for(i=1; i < valor + 1; i++){
        fat = fat * i;
    }
    printf("%i",fat);
}

