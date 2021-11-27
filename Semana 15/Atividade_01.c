#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define TAM 5
#define submarino 1
#define navio_tanque 3
#define porta_avioes 5



// 0 | 0 | 0 | 0 | 0
// 0 | 0 | 0 | 0 | 0
// 0 | 0 | 0 | 0 | 0
// 0 | 0 | 0 | 0 | 0
// 0 | 0 | 0 | 0 | 0


int main(){

    int player = 1, lin = 0, colun = 0, computer = 0;
    int round = 0;
    int esp[TAM][TAM];
    int batalha[TAM][TAM];
    int valor_jogador = 0;
    int player_lin = 0, player_colun = 0;
    int computer_lin = 0, computer_colun = 0;


    for(lin=0; lin < TAM; lin++){
        for(colun=0; colun < TAM; colun++){
            esp[lin][colun] = 0;
            batalha[lin][colun] = 0;
        }
    }

    //for(lin=0; lin < TAM; lin++){
    //    printf("\n");
    //    for(colun=0; colun < TAM; colun++){
    //        printf(" %i ", esp[lin][colun]);
    //    }
    //}





    while(round < 4){

        printf("\n---------------------------------------------");
        printf("\n--------------BATALHA NAVAL------------------");
        printf("\n---------------------------------------------");

        if(player == 1){
           printf("\n[ Player ]: ");
            scanf("%i %i", &player_lin, &player_colun);
            
            esp[lin][colun] = 1;
            player = 2;
        }
        system("cls");

        printf("\n---------------------------------------------");
        printf("\n--------------BATALHA NAVAL------------------");
        printf("\n---------------------------------------------");

        if(player == 2){
		    computer_lin = 0 + (rand() % 4);
            computer_colun = 0 + (rand() % 4);
            printf("\n[ Computador ]: %i %i", computer_lin, computer_colun);
            Sleep(5000);
            esp[lin][colun] = 2;
        }
        
        system("cls");

        
        round++;
        player = 1;
    }
}