#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    int tamanho;

    char *p;

    printf("Digite o tamanho: ");
    scanf("%i", &tamanho);

    p = malloc(tamanho*sizeof(char));

   fflush(stdin);

   printf("Digite a palavra: ");
   gets(p);

   printf(" - Invertida = ");
   for(x=tamanho; x != -1; x--){
       printf("%c", p[x]);
   }


   free(p);
    
}