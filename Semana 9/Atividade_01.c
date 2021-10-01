#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

	//semente de numeros aleatorios
	srand(time(NULL));

	int i, numero;

	for(i = 0; i < 10; i++){

		numero =  rand() % 100; //pega um numero aleatorio

		printf("%i ", numero);

	}

	


printf("\n\n");
return 0;
}