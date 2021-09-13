#include <stdio.h>

int main(){

    int numero, Maior, Menor;

    
  
    printf("Numero ");
    scanf("%i", &numero);

    Maior = numero;
    Menor = numero;
        
    while(numero >= 0){

        if (numero > Maior){
            Maior = numero;
        }
        if (numero < Menor){
            Menor = numero;
        }

        printf("Numero ");
        scanf("%i", &numero);
        



    }
    printf("- Maior: %i", Maior);
    printf("\n- Menor %i", Menor);

}