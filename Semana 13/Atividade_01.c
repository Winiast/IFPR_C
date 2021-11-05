#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main(){

    srand(time(NULL));

    int matriz[5][5];
    int lin, colun;

    for(lin=0; lin < TAM; lin++){
        for(colun=0; colun < TAM; colun++){
            matriz[lin][colun] = 10 + (rand() % 41);
        }
    }

    printf("\n Matriz Aleatoria:\n\n");
    for(lin=0; lin < TAM; lin++){
        for(colun=0; colun < TAM; colun++){
            printf(" %i ", matriz[lin][colun]);
        }

        printf("\n");
    }
    printf("\nMatriz Transposta: \n\n");

     for(lin=0; lin < TAM; lin++){
        for(colun=0; colun < TAM; colun++){
            printf(" %i ", matriz[colun][lin]);
        }
        printf("\n");
     }

}