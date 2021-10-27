#include <stdio.h>

int main(){
    int valor_01, valor_02, flag=1, a, soma, atual;

    printf("Digite dois numeros inteiros: ");
    scanf("%i %i",&valor_01, &valor_02);

    if(flag == 1){
        printf("\n%i = %i", valor_01, valor_01);
        flag = 0;
    }
    
    for(a= valor_01 + 1; a <= valor_02; a++){
        soma = valor_01 + a;
        atual = soma;
        valor_01 = atual;
        printf("\n%i + %i = %i", atual, a, soma);
    }
    

    
}