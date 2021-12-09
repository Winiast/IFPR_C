#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main(){

    srand(time(NULL));

    int matriz[5][5], lin, colun, lin_02, colun_02, temp;

    for(lin=0; lin <TAM; lin++){

        for(colun=0; colun<TAM; colun++){

            matriz[lin][colun] = 10 + (rand() % 41);

        }
    }

    printf("\nMatriz Aleatoria: \n");

    for(lin=0; lin <TAM; lin++){

        for(colun=0;colun<TAM;colun++){
            printf("%i  ", matriz[lin][colun]);
        }

        printf("\n");
    }

    printf("\nMatriz Ordenada: \n");

    for(lin=0; lin <TAM; lin++){

        for(colun=0;colun<TAM;colun++){
           
           for(lin_02 =0; lin_02 < TAM; lin_02++){

               for(colun_02 = 0; colun_02 < TAM; colun_02++){

                   if(matriz[lin][colun] < matriz[lin_02][colun_02]){
                       temp = matriz[lin][colun];
                       matriz[lin][colun] = matriz[lin_02][colun_02];
                       matriz[lin_02][colun_02] = temp;
                   }
               }
           }
        }
    }

    printf("\n");
    for(lin=0; lin <TAM; lin++){

        for(colun=0;colun<TAM;colun++){

            printf("%i  ", matriz[lin][colun]);
        }

        printf("\n");

        }


    }

