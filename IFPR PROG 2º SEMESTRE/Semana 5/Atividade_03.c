#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *palavra01, *palavra02, *palavra03, *concatenado, *concatenadopar;
    char palavra1[40], palavra2[40], palavra3[40];
    int tam01, tam02,tam03, conctam;


    printf("Digite tres nomes:\n");
    fflush(stdin);
    gets(palavra1);
    fflush(stdin);
    gets(palavra2);
    fflush(stdin);
    gets(palavra3);
    fflush(stdin);

    tam01 = strlen(palavra1);
    tam02 = strlen(palavra2);
    tam03 = strlen(palavra3);
    conctam = tam01 + tam02 + tam03;

    concatenadopar = malloc(conctam * sizeof(char));
    concatenado = malloc(conctam * sizeof(char));
    palavra01 = malloc(tam01 * sizeof(char));
    palavra02 = malloc(tam02 * sizeof(char));
    palavra03 = malloc(tam03 * sizeof(char));

    
    palavra01 = palavra1;
    palavra02 = palavra2;
    palavra03 = palavra3;

    concatenadopar = strcat(palavra01, palavra02);
    concatenado = strcat(concatenadopar, palavra03);
    printf("- Concatenado: %s", concatenado);

}