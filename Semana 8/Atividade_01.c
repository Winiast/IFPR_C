#include <stdio.h>


int main() {

    int fatorial =0, cont, valor = 0, flag=1, flag_02 =1;
     
    printf("Digite um valor inteiro: ");
    scanf("%i", &valor);

    

    printf("\n - Fatorial(%i) = ", valor);

    fatorial = valor;

     for(cont=0; valor > cont; valor--){

        
        if(flag == 1){
            printf(" %i", valor);
            flag = 0;
        }
        else{
        printf(" x %i", valor);
        }
     }
     printf(" = %i");
}