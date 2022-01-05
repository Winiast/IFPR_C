#include <stdlib.h>
#include <stdio.h>

int main(){

    int tamanho_01, tamanho_02, x, b;

    char *p_01, *p_02, *p_total;


    printf("\nDigite os dois tamanhos: ");
    scanf("%i %i", &tamanho_01, &tamanho_02);

    p_01 = malloc(tamanho_01*sizeof(char));
    p_02 = malloc(tamanho_02*sizeof(char));

    p_total = malloc(tamanho_01 + tamanho_02 + 1* sizeof(char));

    char palavra_01[tamanho_01];
    char palavra_02[tamanho_02];


    int tamanho_total = tamanho_02 + tamanho_01 + 1;



    fflush(stdin);

    printf("\nDigite a primeira palavra: ");
    gets(p_01);

    
    fflush(stdin);

    printf("\nDigite a segunda palavra: ");
    gets(p_02);


    printf("\n - Concatenadas = ");

    for(x = 0; x < tamanho_01; x++){
        p_total[x] = p_01[x];
    }

    p_total[tamanho_01] = 45;

    for(x = tamanho_01 + 1, b = 0; x < tamanho_total; x++, b++){
        p_total[x] = p_02[b];
    }

    for(x =0; x < tamanho_total; x++){
        printf("%c", p_total[x]);
    }

    

    free(p_01);
    free(p_02);
    free(p_total);
}