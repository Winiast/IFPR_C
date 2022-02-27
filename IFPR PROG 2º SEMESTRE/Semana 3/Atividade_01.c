#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *ponteiro_01, *ponteiro_02;
    char palavra01[50], palavra02[50];
    int tamanho01, tamanho02;
    int posicao = 0;
    char diferente01[1], diferente02[1];

    fflush(stdin);

    printf("Primeira Palavra: ");
    gets(palavra01);
    fflush(stdin);
    printf("Segunda Palavra: ");
    gets(palavra02);

    tamanho01 = strlen(palavra01);
    tamanho02 = strlen(palavra02);

    ponteiro_01 = malloc(tamanho01*sizeof(char));
    ponteiro_02 = malloc(tamanho02*sizeof(char));

    ponteiro_01 = palavra01;
    ponteiro_02 = palavra02;
    int i;

    int maiorpalavra;
    
    if(tamanho01 < tamanho02){
        maiorpalavra = tamanho02;
    }
    else{
        maiorpalavra = tamanho01;
    }

    for(i = 0; i < maiorpalavra; i++){
        if(ponteiro_01[i] != ponteiro_02[i]){
            posicao = i;
            break;
        }
    }

    printf("- Diferentes, posicao: %i: '%c' != '%c'", posicao, ponteiro_01[posicao], ponteiro_02[posicao]);

    free(ponteiro_01);
    free(ponteiro_02);
    
}