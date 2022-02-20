#include <stdio.h>

double agregar(int valor01, int valor02);

int main(){
    int valor01, valor02;

    printf("Digite dois numeros com 3 digitos: ");
    scanf("%i %i", &valor01, &valor02);
    
    printf("- Resultado: ");
    agregar(valor01,valor02);
}


double agregar(int valor01, int valor02){
    int centena01, dezena01,unidade01;
    int centena02, dezena02,unidade02;

    int totalcentena, totaldezena, totalunidade;
    centena01 = valor01 / 100;
    dezena01 = valor01 % 100 / 10;
    unidade01 = valor01 % 100 % 10;

    centena02 = valor02 / 100;
    dezena02 = valor02 % 100 / 10;
    unidade02 = valor02 % 100 % 10;
    
    totalcentena = centena01 + centena02;
    totaldezena = dezena01 + dezena02;
    totalunidade = unidade01 + unidade02;

    if(totalcentena >= 10){
        totalcentena = 0;
    }
    if(totaldezena >= 10){
        totaldezena = 0;
    }
    if(totalunidade >= 10){
        totalunidade = 0;
    }
    
    printf("%i%i%i", totalcentena, totaldezena, totalunidade);
}