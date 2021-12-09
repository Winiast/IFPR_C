#include <stdio.h>
#include <math.h>

int main(){
    int cosceno, cateto;
    float hipot;
    printf("Catetos (CO CA): ");
    scanf("%i %i", &cosceno, &cateto);
    hipot = sqrt(pow(cosceno, 2) + pow(cateto, 2));
    printf("- Hipotenusa = %.1f", hipot);
}