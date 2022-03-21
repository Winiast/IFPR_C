#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int i, valor;
    char *pfinal, aux[20];
    char palavra01[20], palavra02[20], palavra03[20];
    char *p1, *p2, *p3;


    p1 = malloc(20 * sizeof(char));
    p2 = malloc(20 * sizeof(char));
    p3 = malloc(20 * sizeof(char));
    pfinal = malloc(60 * sizeof(char));
    

    printf("Digite o valor inteiro: ");
    scanf("%i", &valor);

    printf("Digite tres palavras:\n");
    fflush(stdin);
    gets(p1);
    fflush(stdin);
    gets(p2);
    fflush(stdin);
    gets(p3);



    pfinal = strncat(pfinal, p1, valor);
    pfinal = strncat(pfinal, p2, valor);
    pfinal = strncat(pfinal, p3, valor);

     printf("- Concatenado: %s", pfinal);

}