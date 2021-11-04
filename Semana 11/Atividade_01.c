#include <stdio.h>
#include <stdlib.h>

int main(){

    char frase[50], count = 0;
    char caractere[2];
    int a;

    printf("Dgite a frase: ");
    gets(frase);
    printf("Digite o caractere: ");
    gets(caractere);

    for(a=0; frase[a] != '\0'; a++){
        if(caractere[0] == frase[a]){
            count++;
        }
    }

    printf("- O caractere (%s) foi encontrado (%i) veze(s)" ,caractere, count);
}