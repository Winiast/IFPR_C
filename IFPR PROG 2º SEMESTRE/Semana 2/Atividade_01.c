#include <stdio.h>

int soma, valor_a, valor_b;

void somar();

int main(){
    printf("Entre com o valor a:");
    scanf("%i", valor_a);
    printf("Entre com valor b:");
    scanf("%i", valor_b);

    somar();

    return 0;
}

void somar() {
    soma = valor_a + valor_b;
    printf("Soma = %i\n", soma);
}