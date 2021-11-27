#include <stdlib.h>
#include <stdio.h>

int main(){


printf("Número ímpar: ");
		scanf("%i", &tam);
		
		// Monta Matriz
		for(lin=0; lin<tam; lin++) {
			for(col=0; col<tam; col++) {
				if(lin==0 || col == 0 || lin == tam-1 || col == tam-1) {
					mat[lin][col] = '*';
				}
				else if(lin == tam/2 && col == tam/2) {
					mat[lin][col] = '*';
				}
				else {
					mat[lin][col] = ' ';
				}
			}
		}
		// Exibe Matriz
		for(lin=0; lin<tam; lin++) {
			for(col=0; col<tam; col++) {
				printf("%c ", mat[lin][col]);
			}
			printf("\n");
		}
}