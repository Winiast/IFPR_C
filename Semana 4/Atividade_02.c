#include <stdio.h>


int main () {

    /*Declarando Tipos*/
    
    int value_01, value_02, value_03;

    /*Recebendo os Valores*/
    printf("Digite tres numeros: ");
    scanf("%i %i %i",&value_01, &value_02, &value_03);

    /*Maior Número*/

    if (value_01 > value_02 && value_01 > value_03) {
        printf("- Maior: %i", value_01);
    }
    else if (value_02 > value_01 && value_02 > value_03) {
        printf("- Maior: %i", value_02);
    }
    else if (value_03 > value_01 && value_03 > value_02) {
        printf("- Maior: %i", value_03);
    }

    /*Menor Número*/
        if (value_01 < value_02 && value_01 < value_03) {
        printf("\n- Menor: %i", value_01);
    }
    else if (value_02 < value_01 && value_02 < value_03) {
        printf("\n- Menor: %i", value_02);
    }
    else if (value_03 < value_01 && value_03 < value_02) {
        printf("\n- Menor: %i", value_03);
    }
}