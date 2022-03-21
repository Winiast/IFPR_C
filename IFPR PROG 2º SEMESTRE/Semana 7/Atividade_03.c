#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void transposta(int **m);

#define TAM 3

int main(){

    int **m, i, j, tes;
    
    srand(time(NULL));

    m = malloc(TAM * sizeof(int*));

    for(tes=0; tes<TAM; tes++){
        m[tes] = malloc(TAM * sizeof(int));
    }

    printf("\nMatriz: \n");

    for(i=0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            m[i][j] = 10 + rand()%90;
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }

    transposta(m);

    printf("\nTranposta: \n");

    for(j=0; j < TAM; j++){

        for(i = 0; i < TAM; i++){
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }

}

void transposta(int **m){
    
    
    int i, j, a;

    int **m1;

    m1 = malloc(TAM * sizeof(int*));

    for(a = 0; a < TAM; a ++){

        m1[a] = malloc(TAM * sizeof(int));

    }

    for(i=0; i <TAM; i++){
        
        for(j = 0; j <TAM; j++){
            m1[i][j] = m[i][j];
        }
    }


    for(j =0; j<TAM; j++){

        for(i = 0; i < TAM; i++){

            m[i][j] = m1[i][j];
        }
    }
    
}