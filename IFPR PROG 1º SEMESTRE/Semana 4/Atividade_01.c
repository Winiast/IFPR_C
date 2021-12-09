#include <stdio.h>
#include <math.h>

int main()  {
    
    /*Declarando Tipos*/

    int number;

    /*Recebendo os Valores*/

    printf("Digite um numero inteiro: ");
    scanf("%i", &number);

    /*Verificando condição*/

    if (number == 0){
        printf("- Neutro");
    }

    else if (number > 0){
        printf("- Positivo");

    }
    else if (number < 0){
        printf("- Negativo");
    }

}