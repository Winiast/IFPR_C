#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    char LetraInicio, LetraFim, aumenta, BreakInicio, BreakFinal,resultado;

    int i;

    char * alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 


    printf("Digite dois caracteres: ");
    scanf("%c %c",&LetraInicio, &LetraFim);
    
    LetraInicio = toupper(LetraInicio);
    LetraFim = toupper(LetraFim);
    
    for(i = 0; i <= 27; i++){

        printf("%i", i);
        if(alfabeto[i] == LetraInicio){
            BreakInicio = i;
        }

        if(alfabeto[i] == LetraFim){
            BreakFinal = i;
        }
    
}

resultado = BreakInicio - BreakFinal;

//printf("%c", resultado);
printf("%c %c", BreakInicio, BreakFinal);


}