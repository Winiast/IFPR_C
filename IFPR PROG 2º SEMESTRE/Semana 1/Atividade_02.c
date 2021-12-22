#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p_int_01;
    int *p_int_02;

    int valor_01, valor_02;

    printf("Digite dois valores: ");
    scanf("%i %i", &valor_01, &valor_02);

    p_int_01 = &valor_01;
    p_int_02 = &valor_02;

    printf("\n - Soma = %i", *p_int_01 + *p_int_02);

}