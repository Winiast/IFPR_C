#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main(){
    
    int matriz[5][5];

    int lin, colun, vert;

    srand(time(NULL));

    for(lin=0; lin < TAM; lin++){

        for(colun=0; colun < TAM; colun++){
            matriz[lin][colun] = 10 + (rand() % 41);
        }
    }
}