#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

	//semente de numeros aleatorios
	srand(time(NULL));

	int i, numero[9],maior = 0, menor =0,flag = 1, soma = 0;
	float media;

	for(i = 0; i < 10; i++){
		numero[i] = 10 + (rand() % 89); //pega um numero aleatorio
	}

	printf("\n Valores Aleatorios: ");

	for(i =0; i < 10; i ++){

		printf(" %i ", numero[i]);

		if(flag == 1){
			maior = numero[i];
			menor = numero[i];
			flag = 0;
		}
		if(numero[i] > maior){
			maior = numero[i];
		}
		if(numero[i] < menor){
			menor = numero[i];
		}

		soma = soma + numero[i];
	}

	media = soma / 10;
	
printf("\n - Maior: %i", maior);
printf("\n - Menor: %i", menor);
printf("\n - Media: %.2f", media);

printf("\n\n");
return 0;
}