#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, cont =0;
    char frase[50], letra[1];

    printf("Digite a frase: ");
    gets(frase);
    fflush();
    //printf("Digite o caractere: ");
    //gets(letra);

    //for(a=0; frase[a] != '\0'; a++){
    //    cont++;
    //}

    printf("\n[%s]", frase);
    printf("\n[%s]", letra);
}