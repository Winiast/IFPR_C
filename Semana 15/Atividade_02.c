#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

#define TAM 5
#define submarino 1
#define navio_tanque 3
#define porta_avioes 5

#define QTD_submarinos 8
#define QTD_tanques 5
#define QTD_porta_avioes 2






// 0 | 0 | 0 | 0 | 0
// 0 | 0 | 0 | 0 | 0
// 0 | 0 | 0 | 0 | 0
// 0 | 0 | 0 | 0 | 0
// 0 | 0 | 0 | 0 | 0


int main()
{

        int player = 1, lin = 0, colun = 0, computer = 0, a;
        int round = 0;
        int esp[TAM][TAM];
        int batalha[TAM][TAM];
        int valor_jogador = 0;
        int player_lin = 0, player_colun = 0;
        int computer_lin = 0, computer_colun = 0;
        int sub = 0, nav = 0, port = 0;
        int rand_lin, rand_colun;
        int pontos_player = 0, pontos_computer = 0;
        int numero01_aleatorio = 0,numero02_aleatorio = 0 ;

        srand(time(NULL));

        for(lin=0; lin < TAM; lin++){
            for(colun=0; colun < TAM; colun++){
                esp[lin][colun] = 0;
                batalha[lin][colun] = 0;
            }
        }

        for(lin=0; lin < TAM; lin++){
            printf("\n");

            for(colun=0; colun < TAM; colun++){
                
                printf(" %i |", batalha[lin][colun]);
            }
        }
    

        int submarinos_alocados = 0;
        int navios_alocados = 0;
        int porta_avioes_alocados = 0;

        while(submarinos_alocados != QTD_submarinos){

            numero01_aleatorio =  rand() % 5;
            numero02_aleatorio =  rand() % 5;
            
            if(batalha[numero01_aleatorio][numero02_aleatorio] == 0){
                batalha[numero01_aleatorio][numero02_aleatorio] = submarino;
                submarinos_alocados++;
                srand(time(NULL));
            }
            
        }

        while(navios_alocados != QTD_tanques){

            numero01_aleatorio =  rand() % 5;
            numero02_aleatorio =  rand() % 5;
            
            if(batalha[numero01_aleatorio][numero02_aleatorio] == 0){
                batalha[numero01_aleatorio][numero02_aleatorio] = navio_tanque;
                navios_alocados++;
                srand(time(NULL));
            }
            
        }

        while(porta_avioes_alocados != QTD_porta_avioes){

            numero01_aleatorio =  rand() % 5;
            numero02_aleatorio =  rand() % 5;
            
            if(batalha[numero01_aleatorio][numero02_aleatorio] == 0){
                batalha[numero01_aleatorio][numero02_aleatorio] = porta_avioes;
                porta_avioes_alocados++;
                srand(time(NULL));
            }
            
        }

        printf("\n\n");

        for(lin=0; lin < TAM; lin++){
            printf("\n");

            for(colun=0; colun < TAM; colun++){
                
                printf(" %i |", batalha[lin][colun]);
            }
        }


        printf("\n");
    
}   