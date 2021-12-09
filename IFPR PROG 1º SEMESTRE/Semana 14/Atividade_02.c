#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define TAM 3

int main(){
    int matriz_01[TAM][TAM];

    int matriz_02[TAM][TAM];

    int lin, colun;

    srand(time(NULL));

    for(lin=0; lin < TAM; lin++){

        for(colun=0; colun < TAM; colun++){
            matriz_01[lin][colun] = 10 + (rand()%40);
        }
    }

    for(lin=0; lin < TAM; lin++){
        printf("\n");
        for(colun=0; colun < TAM; colun++){
            printf(" %i ", matriz_01[lin][colun]);
        }
    }

    printf("\n   X ");

    for(lin=0; lin < TAM; lin++){

        for(colun=0; colun < TAM; colun++){
            matriz_02[lin][colun] = 10 + (rand()%40);
        }
    }

    for(lin=0; lin < TAM; lin++){
        printf("\n");
        for(colun=0; colun < TAM; colun++){
            printf(" %i ", matriz_02[lin][colun]);
        }
    }

    printf("\n\n = ");
}







