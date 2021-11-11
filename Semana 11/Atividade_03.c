#include <stdlib.h>
#include <stdio.h>


int main(){

    char string_01[20];
    char string_02[20];
    char temp[20];
    int a, y;

    printf("\nString conteudo: ");
    gets(string_01);

    printf("\nString busca: ");
    gets(string_02);

    for(a=0; string_01[a] != '\0'; a++){

        for(y=0; string_02[y] != '\0';y++){
            if(string_02[y] == string_01[a]){
                printf("%c ", string_02[y]);
                
            }
        }
    }
    for(a=0; temp[a] != '\0'; a++){
        printf(" %c ", temp[a]);
    }
}