#include <stdlib.h>
#include <stdio.h>


int main(){

    char string_01[20];
    char string_02[20];
    char temp[20];
    int a, y, posicao[20], count =0, t, tamanho_palavra;

    printf("\nString conteudo: ");
    gets(string_01);

    printf("String busca: ");
    gets(string_02);

    for(a=0; string_02[a] !='\0'; a++){
    }

    tamanho_palavra = a;

    for(a=0, y=0; string_01[a] !='\0'; a++){

        if(string_01[a] == string_02[y]){
            count++;
            y++;
        }
    }
    if(count == tamanho_palavra){
        printf("\n - Achou!");
    }
    else{
        printf("\n - Nao Achou!");
    }  
}