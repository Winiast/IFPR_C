#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bhaskara(int a, int b, int c, double *x1, double *x2);

int main(){
    int a, b, c;
    double x1, x2;

    

    printf("Digite os coeficientes (a), (b) e (c): ");
    scanf("%i %i %i", &a, &b, &c);

    bhaskara(a, b, c, &x1, &x2);

    printf("- Raizes: %.1f %.1f", x1, x2);
}

void bhaskara(int a, int b, int c, double *x1, double *x2){
    *x1 = (-b + sqrt(b*b - ( 4 * a * c))) / 2 * a;
    *x2 = (-b - sqrt(b*b - ( 4 * a * c))) / 2 * a;
}

