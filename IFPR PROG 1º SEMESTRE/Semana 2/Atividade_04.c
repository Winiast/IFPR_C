#include <stdio.h>

int main(){
    int a, b, c, soma, div100, div10, div1;
    printf("Digite um número (3 dígitos): ");
    scanf("%i", &a);
    div100 = a / 100;
    div10 = (a % 100) / 10;
    div1 = (a % 100) % 10;
    soma = div100 + div10 + div1;
    printf("- Soma = %i + %i + %i = %i", div100, div10, div1, soma);

}