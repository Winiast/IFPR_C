#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;

    char *p;
    int tamanho;

    printf("Digite o tamanho: ");
    scanf("%i", tamanho);

    p = malloc(tamanho*sizeof(char));

    fflush(stdin);

    printf("Digite a palavra: ");
    gets(p);

    printf(" - Posicoes Impares: ");

    for(x = 0; x <= tamanho; x++){
        if(x % 2 == 1){
            printf("%c", p[x]);
        }
        
    }

    free(p);


}