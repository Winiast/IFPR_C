#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float x1, x2,x1res, x2res;
    printf("Coeficientes (a, b, c): ");
    scanf("%i %i %i", &a, &b, &c);
    x1 = (-b) + sqrt(pow(b, 2) - 4 * a * c);
    x2 = (-b) - sqrt(pow(b, 2) - 4 * a * c);
    x1res = x1 / 2 * a;
    x2res = x2 / 2 * a; 
    printf("- Raizes = %.1f\n",x1res);
    printf("- Raizes = %.1f", x2res);
    
}