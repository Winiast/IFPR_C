#include <stdio.h>


int main(){

    int v1, v2, soma = 0, flag = 1;


    printf("Digite os valores: ");
    scanf("%i %i", &v1, &v2);

    printf("Soma valores pares: ");
    for(v1= v1 + 1; v1 < v2; v1++){

        if(v1 % 2 == 0){
            if(flag == 1){
                printf("%i ", v1);
                flag = 0;
                soma = soma + v1;
            }
            else{
            printf("+ %i ", v1);
            soma = soma + v1;
            }
        }

    }

    printf("= %i", soma);

}