#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10

int main() {

	char aleatorio[TAM], palavra[TAM];

	int a, y, teste, count =0,count_rep, letras = 0;

	char n;

	srand(time(NULL));

	printf("Valor Aleatorio: ");	

	for(a=0; a<TAM; a++){

		aleatorio[a] = 65 + (rand()%25);
	}

	for(a=0; a<TAM; a++){

		for(y= a + 1; y<TAM; y++){

			if(aleatorio[a] == aleatorio[y]){
				aleatorio[a] = aleatorio[a] + 32;
			}

			else{
				count_rep++;
			}

		}
	}


	for(a=0; a<TAM; a++){
		printf(" %c ", aleatorio[a]);
	}

	printf("\nPalavra: ");
	gets(palavra);

	for(letras = 0; palavra[letras] != '\0'; letras++){

	}
	printf("\n Tem (%i) letras", letras);

	for(a=0; a<TAM; a++){
		for(y=0; aleatorio[y] != '\0'; y++){
			if(palavra[a] == aleatorio[y]){
				count++;
			}
		}
	}
	printf("\n Contador ( %i ) ", count);
	if(count == letras){
		printf("\n [ E POSSIVEL] ");
	}
	else{
		printf("\n[NAO E POSSIVEL]");
	}

}
