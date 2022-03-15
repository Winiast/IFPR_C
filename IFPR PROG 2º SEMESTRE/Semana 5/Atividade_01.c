#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *nome01, *nome02, *nome03, *aux;
    char nome1[40], nome2[40], nome3[40];
    int tam01, tam02,tam03, i, x;


    printf("Digite tres nomes:\n");
    fflush(stdin);
    gets(nome1);
    fflush(stdin);
    gets(nome2);
    fflush(stdin);
    gets(nome3);
    fflush(stdin);

    tam01 = strlen(nome1);
    tam02 = strlen(nome2);
    tam03 = strlen(nome3);

    nome01 = malloc(tam01 * sizeof(char));
    nome02 = malloc(tam02 * sizeof(char));
    nome03 = malloc(tam03 * sizeof(char));

    nome01 = nome1;
    nome02 = nome2;
    nome03 = nome3;

    if(nome01[0] > nome02[0]){
        aux = nome01;
        nome01 = nome02;
        nome02 = aux;
    }
    else if(nome01[0] > nome03[0]){
        aux = nome01;
        nome01 = nome03;
        nome03 = aux;
    }
    if(nome02[0] > nome03[0]){
        aux = nome02;
        nome02 = nome03;
        nome03 = aux;
    }
    
    printf("\n- Ordem Alfabetica: %s-%s-%s", nome01, nome02,nome03);

}