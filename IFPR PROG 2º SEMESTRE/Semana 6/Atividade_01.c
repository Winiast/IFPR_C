#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int i, count = 0, teste, j = 0;
    char *palavra;
    char *p1, *p2;


    p1 = malloc(20 * sizeof(char));
    p2 = malloc(20 * sizeof(char));
    palavra = malloc(20 * sizeof(char));

    fflush(stdin);
    printf("Digite duas palavras:\n");
    gets(p1);
    fflush(stdin);
    gets(p2);

    for(i = 0; i < 20; i++){
        if(strncmp(p1,p2, i) == 0){
            count++;
        }
    }

    for(i =0; i < count - 1; i++){
        palavra[i] = p1[i];
    }
    count = count - 1;

    printf("- Letras iguais: %i / %s", count, palavra);

}