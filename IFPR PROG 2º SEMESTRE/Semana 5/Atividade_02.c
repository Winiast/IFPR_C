#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *nome01, *nome02, *nome03;
    char *aux;
    char nome1[40], nome2[40], nome3[40];
    int tam01, tam02,tam03;
    int n;
    


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

    if(tam01 < tam02 && tam01 < tam03){
        if(tam02 < tam03){
            nome02 = nome2;
            nome03 = nome3;
        }
        else{
            nome02 = nome3;
            nome03 = nome2;
        }
        nome01 = nome1;
    }
    else if(tam02 < tam01 && tam02 < tam03){
        if(tam01 < tam03){
            nome02 = nome1;
            nome03 = nome3;
        }
        else{
            nome02 = nome3;
            nome03 = nome1;
        }
        nome01 = nome2;
    }else if(tam03 < tam01 && tam03 < tam02){
        if(tam01 < tam03){
            nome02 = nome1;
            nome03 = nome2;
        }
        else{
            nome02 = nome2;
            nome03 = nome1;
        }
        nome01 = nome3;
    }
    


    printf("\n- Ordem Crescente: %s-%s-%s", nome01, nome02, nome03);

    

}