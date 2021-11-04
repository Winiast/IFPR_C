#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {

	// Declarando um vetor (char) de "nomes"
	char nome[10];
	// Variável que vai representar a posição do vetor
	int a;
	// Variável que recebe o nome a ser buscado
	char n;

	// Preenchendo vetor nome aleatoriamente
	srand(time(NULL));

	printf("Nomes Gerados: ");	
	// Preenchendo e imprimindo o vetor com laço
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
