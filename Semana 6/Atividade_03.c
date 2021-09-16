#include <stdio.h>
#include <ctype.h>

int main(){

    char LetraInicio, LetraFim, aumenta, BreakInicio, BreakFinal;

    int i;

    char alfabeto[23] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 


    printf("Digite dois caracteres: ");
    scanf("%c %c",&LetraInicio, &LetraFim);
    
    LetraInicio = toupper(LetraInicio);
    LetraFim = toupper(LetraFim);
    
    for(i = 0; i <= 23; i++){

        if(alfabeto[i] == LetraInicio){
            BreakInicio = i;
        }

        if(alfabeto[i] == LetraFim){
            BreakFinal = i;
        }



    
    

}

}