#include <stdio.h>

int main(){

    int largura, altura, cont_largura, cont_altura;
    printf("Largura e altura: ");
    scanf("%i %i", &largura, &altura);

    cont_largura = 1;
    cont_altura= 1;

    while(cont_altura <= altura)
    {   
        cont_largura = 1;

        while(cont_largura <= largura){
            printf("* ");
            cont_largura =  cont_largura + 1;
        }
        printf("\n");

        cont_altura = cont_altura + 1;
    }
    

}