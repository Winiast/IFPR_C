#include <stdlib.h>
#include <stdio.h>


int main(){

    char string_01[20];
    char string_02[20];
    char temp[20];
    int a, y = 0;

    printf("\nString conteudo: ");
    gets(string_01);

    printf("\nString busca: ");
    gets(string_02);

    for(a=0; string_01[a] != '\0'; a++){

        //for(a=0; string_02[a] != '\0'; a++){
            if(string_01[a] == string_02[a]){
                temp[y] = string_01[a];
                y = y + 1;
            }
        //}

    }
    for(a=0; temp[a] != '\0'; a++){
        printf(" %c ", temp[a]);
    }
}