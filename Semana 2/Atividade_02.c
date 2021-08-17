#include <stdio.h>



int main(){
    char letra1, letra2, letra3;
    printf("\nDigite três letras: ");
    scanf("%c %c %c", &letra1, &letra2, &letra3);
    printf("\n- Combinação 1 = %c %c %c", letra1, letra2, letra3);
    printf("\n- Combinação 2 = %c %c %c", letra1, letra3, letra2);
    printf("\n- Combinação 3 = %c %c %c", letra2, letra1, letra3);
    printf("\n- Combinação 4 = %c %c %c", letra2, letra3, letra1);
    printf("\n- Combinação 5 = %c %c %c", letra3, letra1, letra2);
    printf("\n- Combinação 6 = %c %c %c", letra3, letra2, letra1);
    printf("\n ");

}