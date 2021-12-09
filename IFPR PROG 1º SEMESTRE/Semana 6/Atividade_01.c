#include <stdio.h>

int main(){
    // Declarando variaveis
    int numero, Maior, Menor, cont;
//Setando Valores
Maior = 0;
Menor = 0;
cont = 0;
    // Fica no laço enquanto maior que 0
    while(numero >= 0){
        // Seta o primeiro valor igual ao digitado
        if (cont == 1){
            Maior = numero;
            Menor = numero;
        }
        // Maior
        if (numero > Maior){
            Maior = numero;
        }
        //Menor
        if (numero < Menor){
            Menor = numero;
        }
        // Pergunta o numero e soma 1 no contador
        printf("Numero: ");
        scanf("%i", &numero);
        cont = cont + 1;
    }
    
    //Mostra resultado final
    printf(" - Maior: %i\n", Maior);
    printf(" - Menor: %i", Menor);
}
   