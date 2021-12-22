#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    char caractere;

    int *p_int;
    char *p_char;


    printf("Digite um numero inteiro e um caractere: ");
    scanf("%i %c", &numero, &caractere);
    
    p_int = &numero;
    p_char = &caractere;

    printf("[ INTEIRO ]: endereco = %p / Conteudo = %i", p_int, *p_int);
    printf("\n");
    printf("[ CARACTERE ]: endereco = %p / Conteudo = %c", p_char, *p_char);


}