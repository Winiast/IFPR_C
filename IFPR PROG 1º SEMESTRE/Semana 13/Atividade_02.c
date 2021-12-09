#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define ANSI_COLOR_RED      "\x1b[31m" //cores em ANSI utilizadas 
#define ANSI_COLOR_GRAY     "\e[0;37m"

int main(){
    
    int matriz[5][5];

    int lin, colun, vert=0, flag =1, maior = 0;

    srand(time(NULL));

    for(lin=0; lin < TAM; lin++){

        for(colun=0; colun < TAM; colun++){
            matriz[lin][colun] = 10 + (rand() % 41);
        }
    }

    printf("Matriz Aleatoria: \n");
    for(lin=0; lin < TAM; lin++, vert++){

        for(colun=0; colun < TAM; colun++){

            //if(flag == 1){
            //    printf("(%i)  ",matriz[lin][colun]);
            //    flag = 0;
            //}
            if(vert == colun){
                printf(ANSI_COLOR_RED "%i  "ANSI_COLOR_GRAY, matriz[lin][colun]);
                if(matriz[lin][colun] > maior){
                    maior = matriz[lin][colun];
                } 
            }
            else{
            printf("%i  ", matriz[lin][colun]);
            }
        }
        
        printf("\n");
    }
    printf("Maior valor: ");
    printf(ANSI_COLOR_RED "%i"ANSI_COLOR_GRAY, maior);
}