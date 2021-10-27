#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ANSI_COLOR_RED      "\x1b[31m" //cores em ANSI utilizadas 
#define ANSI_COLOR_GRAY     "\e[0;37m"
#define RESET_COLOR "\e[m"

#define TAM 16

int main (){
    //semente de numeros aleatorios
	srand(time(NULL));

	int vetor[TAM], a, b;
	float media;

	for(a = 0; a < TAM; a++){
		vetor[a] = 10 + (rand() % 89); //pega um numero aleatorio
	}

    for(a=0; a < TAM; a++){  
        if(a == 4 || a == 8 || a == 12 || a ==16){
            printf("\n");
            
        }
    
        if(a == 0 || a == 5 || a == 10 || a == 15){
            printf( ANSI_COLOR_RED"%i "RESET_COLOR, vetor[a]);
        }
        else{
            printf( "%i ", vetor[a]);
        }
    }
}