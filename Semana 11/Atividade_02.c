#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {

	char aleatorio[10];

	int a;

	char n;

	srand(time(NULL));

	printf("Valor Aleatorio: ");	

	for(a=0; a<10; a++) {
		nome[a] = (rand()%25) + 65;
		printf("%c ", nome[a]);
	}

	// Nome
	printf("\n\nDigite um nome para busca: ");
	scanf("%c", &n);

	// Buscando um nome
	for(a=0; a<10; a++) {
		if(nome[a] == n) {
			printf("\n\t-> Nome encontrado, na posicao %i", a);
		}
	}

	printf("\n");
	getchar();
	return 0;
}
