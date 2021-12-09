#include <stdio.h>
#include <math.h>

int main(){
    int pot, elev, res;
    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &pot, &elev);
    res = pow(pot, elev);
    printf("- Potencia = %i ", res);
    
}
