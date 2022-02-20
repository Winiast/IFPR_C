#include <stdio.h>
#include <math.h>
#include <stdint.h>

int primo(int valor);

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%i", &valor);

    if(primo(valor); == 2){
        printf("- PRIMO");
    }else{
        printf("- NAO PRIMO");
    }


}

void primo(int valor){
    int i = 0, count = 0;
    for(i= 2; i <  valor; i++){
        if(valor % i == 0){
            return 0;
        }else{
            return 2;
        }
    }
    
}