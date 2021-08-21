#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float x1, x2;
    printf("Coeficientes (a, b, c): ");
    scanf("%i %i %i", &a, &b, &c);
    x1 = b + sqrt(b * b) - (4 * a * c);
    x2 = x1 / 2 * a;
    printf("%.1f", x2);
    

}