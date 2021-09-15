#include <stdio.h>

int main(){
    
    int Valor, contador;
    printf("Digite um numero: ");
    scanf("%i", &Valor);

    while(Valor / 2 != 0){

        if(contador > 2){
            printf("[Nao Primo]");
        }
        else{
            printf("[Primo]");
        }

        contador = contador + 1;

    }
    printf("%i", contador);
}