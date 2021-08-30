#include <stdio.h>

int main(){

    float nota;

    printf("Digite a nota media: ");
    scanf("%f", &nota);

    if (nota >= 6)
    {
        printf("- Aprovado");
    }
    else if(nota < 4)
    {
        printf("- Reprovado");
    }
    else
    {
        printf("- Recuperacao");
    }
}