#include <stdio.h>

int main(){
    
    int valor,a,b;

    printf("\n Digite a altura (impar): ");
    scanf("%i", &valor);

    for(a=1; a < valor; a++){
        if(a % 2 == 1){    
            for(b=0; b < a; b++){
                printf("*");
            }
        }
  
        printf("\n");
    }
}