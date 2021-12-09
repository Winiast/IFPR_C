#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define TAM 5
#define submarino 1
#define navio_tanque 3
#define porta_avioes 5

#define QTD_submarinos 8
#define QTD_tanques 5
#define QTD_porta_avioes 2

#define ANSI_COLOR_RED      "\x1b[31m" //cores em ANSI utilizadas 
#define ANSI_COLOR_GRAY     "\e[0;37m"




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

        int submarinos_alocados = 0;

        int navios_alocados = 0;

        int porta_avioes_alocados = 0;

        int numero01_aleatorio = 0,numero02_aleatorio = 0 ;

        int count = 0;


        srand(time(NULL));


        for(lin=0; lin < TAM; lin++){

            for(colun=0; colun < TAM; colun++){

                esp[lin][colun] = 0;
                batalha[lin][colun] = 0;
            }
        }


        printf("\n");

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




    while(round < 4){

        printf("\n---------------------------------------------");
        printf("\n------------- BATALHA NAVAL -----------------");
        printf("\n---------------------------------------------");
        
        
        
        for(lin = 0; lin < TAM; lin++){

            printf("\n\t");
            printf("| %i | ", lin);

            for(colun = 0; colun < TAM; colun++){

                if(esp[lin][colun] == 0){
                    printf("| # |");
                }
                else if(esp[lin][colun] == 1 || esp[lin][colun] == 2){
                    printf("| %i |", batalha[lin][colun]);
                }
                
            }
        }
        printf("\n---------------------------------------------");
        printf("\n--- Player:    %i   |     Computer:  %i     ---", pontos_player, pontos_computer);
        printf("\n---------------------------------------------");

        if(player == 1){

            printf("\n[ Player ]: ");
            scanf("%i %i", &player_lin, &player_colun);
            
            esp[player_lin][player_colun] = 1;
            pontos_player = pontos_player + batalha[player_lin][player_colun];
            player = 2;

        }
        system("cls");

        printf("\n---------------------------------------------");
        printf("\n------------- BATALHA NAVAL -----------------");
        printf("\n---------------------------------------------");

        
        for(lin = 0; lin < TAM; lin++){

            printf("\n\t");
            printf("| %i | ", lin);

            for(colun = 0; colun < TAM; colun++){

                if(esp[lin][colun] == 0){
                    printf("| # |");
                }
                else if(esp[lin][colun] == 1 || esp[lin][colun] == 2){
                    printf("| %i |", batalha[lin][colun]);
                }
                
                
            }
        }

        printf("\n---------------------------------------------");
        printf("\n--- Player:    %i   |     Computer:  %i     ---", pontos_player, pontos_computer);
        printf("\n---------------------------------------------");

        if(player == 2){

		    computer_lin = 0 + (rand() % 4);
            computer_colun = 0 + (rand() % 4);
            printf("\n[ Computador ]: %i %i", computer_lin, computer_colun);
            Sleep(2500);
            esp[computer_lin][computer_colun] = 2;
            pontos_computer = pontos_computer +  batalha[computer_lin][computer_colun];

        }
        
        system("cls");

        
        round++;
        player = 1;
    }

    if(pontos_player > pontos_computer){

        system("cls");

        printf("\n---------------------------------------------");
        printf("\n------------- BATALHA NAVAL -----------------");
        printf("\n---------------------------------------------");

        for(lin = 0; lin < TAM; lin++){

            printf("\n\t");

            if(lin == 0){
                printf("\n %i ", count);
            }

            for(colun = 0; colun < TAM; colun++){

                if(esp[lin][colun] == 0){
                    printf("| # |");
                }
                else if(esp[lin][colun] == 1 || esp[lin][colun] == 2){
                    printf("| %i |", batalha[lin][colun]);
                }
                
                
            }
        }

        printf("\n---------------------------------------------");
        printf("\n--- Player:    %i   |     Computer:  %i     ---", pontos_player, pontos_computer);
        printf("\n---------------------------------------------");
        printf("\n--------------- PLAYER VENCEU ---------------");
        printf("\n---------------------------------------------");

       
    }

    else{
        system("cls");

        printf("\n---------------------------------------------");
        printf("\n------------- BATALHA NAVAL -----------------");
        printf("\n---------------------------------------------");

        for(lin = 0; lin < TAM; lin++){

            printf("\n\t");
            printf("| %i | ", lin);
            
            for(colun = 0; colun < TAM; colun++){
                if(esp[lin][colun] == 0){
                    printf("| # |");
                }
                else if(esp[lin][colun] == 1 || esp[lin][colun] == 2){
                    printf("| %i |", batalha[lin][colun]);
                }
                
                
            }
        }

        printf("\n---------------------------------------------");
        printf("\n--- Player:    %i   |     Computer:  %i     ---", pontos_player, pontos_computer);
        printf("\n---------------------------------------------");
        printf("\n------------- COMPUTADOR VENCEU -------------");
        printf("\n---------------------------------------------");
    }
    
}