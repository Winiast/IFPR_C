#include <stdio.h>

int main() {
    

    //Declarando Variaveis
    char valor01, valor02;


    printf("Digite dois caracteres: ");
    scanf("%c %c", &valor01, &valor02);

    //Tabela ASCII 65 = A Maisculo até Z = 90
    if(valor01 > 90){
        valor01 = valor01 - 32;
    }
    if(valor02 > 90){
        valor02 = valor02 - 32;
    }

    printf(" - ");

    //Laço de Repetição
    while(valor01 <= valor02){
        printf("%c ", valor01);
        valor01 = valor01 + 1;
    }

}

