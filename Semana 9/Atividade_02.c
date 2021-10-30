#include <stdio.h>

int main(){

    int valor_01, valor_02,a, b, teste, soma = 0;
    
    printf(" Digite dois numeros: ");
    scanf("%i %i", &valor_01, &valor_02);


    printf("Numeros perfeito entre (%i) e (%i): ", valor_01, valor_02);

   for(a=valor_01; a <= valor_02; a++){

       for(b=1; b < a; b++){

           teste = a % b;
           if(teste == 0){
               soma = soma + b;
           }
       }
       if(soma == a){
          printf(" %i ", soma);
       }
       soma = 0;
   }

}