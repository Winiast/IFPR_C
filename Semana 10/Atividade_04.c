#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12
int main(){

     int a,j,i[TAM], temp;
    
    srand(time(NULL));

    printf(" - Vetor Aleatorio: ");

    for(a=0; a<TAM; a++) {

        i[a] = 10 + (rand()%89);
        printf(" %i ", i[a]);
    }

    printf("\n - Vetor Ordenado:  ");
   for (a = 0; a < TAM; a++) {
       
    for (j = a + 1; j < TAM; j++) {

      if (i[a] < i[j]) {

        temp = i[a];
        i[a] = i[j];
        i[j] = temp;

      }
    }
  }

  for (a = 0; a < TAM; a++) {
    printf(" %i ", i[a]);
  }


}