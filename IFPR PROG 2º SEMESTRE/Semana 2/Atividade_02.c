#include <stdio.h>

double fatorial(int valor);

int main(){
    int valor =0;
    printf("Digite um valor: ");
    scanf("%i", &valor);

    printf("- Fatorial: %.0f",fatorial(valor));
}

double fatorial(int valor){
    int fat = 1;
    int i;
    for(i=1; i < valor + 1; i++){
        fat = fat * i;
    }
    return fat;
}

