#include <stdio.h>
#include <math.h>

int main(){
    int value1, value2;
    float res, raiz;
    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &value1, &value2);
    res = pow(value1, value2);
    raiz = sqrt(res);
    printf("- Raiz = %.1f", raiz);

}