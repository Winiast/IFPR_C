#include <stdio.h>

int main() {
  int numeros[7];
  
  printf("Digite os 7 numeros: ");
  scanf("%i %i %i %i %i %i %i", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5], &numeros[6]);

  int i, j, temp;

  // Printa a ordem original de entrada. 
  //printf("Ordem original: ");
  //for (i = 0; i < 7; i++) {
  //  printf("%i ", numeros[i]);
  //

  // Pula uma linha
  printf("\n- Ordem crescente: ");

  // Executa para cada número
  for (i = 0; i < 7; i++) {
    // Compara com cada numero do array, começando pelo próximo (j = i + 1)
    for (j = i + 1; j < 7 ; j++) {
      // Se o próximo numero é maior que o atual, troca eles de posição
      if (numeros[i] > numeros[j]) {
        // Armazena o numero atual numa var. temporaria, troca de posição
        temp = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = temp;
      }
    }
  }

  for (i = 0; i < 7; i++) {
    printf("%i ", numeros[i]);
  }

  return 0;
}

