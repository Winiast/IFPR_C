#include <stdio.h>

int main(){
    
    int Valor, contador, TestePrimos;

    printf("Digite um numero: ");
    scanf("%i", &Valor);

    contador = 0;

    while(contador != Valor){
        TestePrimos = Valor % contador;
        contador = contador + 1;
        printf("%i", contador);
        printf("%i", TestePrimos);
    }

    
}