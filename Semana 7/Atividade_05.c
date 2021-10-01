#include <stdio.h>


int main(){

    int v1, v2, v3, v4, v5, v6;
    int cont = 0;

    printf("Numeros: " );
    scanf("%i %i %i %i %i %i", &v1, &v2, &v3, &v4, &v5, &v6);


    printf(" - Ordenado ");

    //Ajeitar pra aparecer o 25

    while(v1 >= cont || v2 >= cont || v3 >= cont || v4 >= cont || v5 >= cont || v6 >= cont ){

        
        if(cont == v1){
            printf("%i ", v1);
        }
        if(cont == v2){
            printf("%i ", v2);
        }
        if(cont == v3){
            printf("%i ", v3);
        }
        if(cont == v4){
            printf("%i ", v4);
        }
        if(cont == v5){
            printf("%i ", v5);
        }
        if(cont == v6){
            printf("%i ", v6);
        }

        cont = cont + 1;

        
    }

    
   
}