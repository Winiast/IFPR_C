#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor_01, valor_02, flag=1, a, soma, atual, antigo;

    printf("Digite dois numeros inteiros: ");
    scanf("%i %i", &valor_01, &valor_02);

    if(flag == 1){
        antigo = valor_01;
        printf("\n%i = %i", valor_01, antigo);
        flag = 0;
    }
    
    for(a= valor_01 + 1; a <= valor_02; a++){
        printf("\n%i + %i", antigo, a);
        antigo = antigo + a;
        printf(" = %i ", antigo);
        }
}