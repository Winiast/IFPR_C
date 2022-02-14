#include <stdio.h>
#include <math.h>
#include <stdint.h>

int valor, i;

void primo(int valor);

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%i", &valor);

    primo(valor);


}

void primo(int valor){
    int i = 0, count = 0;
    for(i= 2; i <  valor; i++){
        if(valor % i == 0){
            printf("- NAO E PRIMO");
            break;
        }else{
            printf("- E PRIMO");
            break;
        }
    }
    
}