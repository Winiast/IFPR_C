#include <stdio.h>
#include <stdlib.h>

int main(){
    char *nome01, *nome02, *nome03;
    char nome1[40], nome2[40], nome3[40];
    int tam01, tam02,tam03;


    printf("Digite tres nomes: ");
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

    printf("- Ordem Alfabetica: ");

    int i,x;
    for(i=0; i < tam01; i++){
        printf("%c", nome01[i]);
    }

}