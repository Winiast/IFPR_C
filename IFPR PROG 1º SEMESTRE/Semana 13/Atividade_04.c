#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ANSI_COLOR_RED      "\x1b[31m" //cores em ANSI utilizadas 
#define ANSI_COLOR_GRAY     "\e[0;37m"
#define TAM 5

int main(){

    srand(time(NULL));

    int matriz[5][5], lin, colun, linha_troca, valor_troca;

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
	printf("\n");

	printf("- Escolha uma linha: ");
	scanf("%i", &linha_troca);

	printf("- Escolha um valor: ");
	scanf("%i", &valor_troca);

	printf("\nMatriz Modificada:");

	for(lin=0; lin < TAM; lin++){
			printf("\n");
			if(lin != linha_troca){
				for(colun=0; colun<TAM; colun++){
					printf("%i  ", valor_troca);
				}
			}
			else{
				for(colun=0; colun < TAM; colun++){
				printf(ANSI_COLOR_RED "%i  "ANSI_COLOR_GRAY  , matriz[lin][colun]);
				}
			}	
	}

	
}