#include <stdio.h>
#include <stdlib.h>

void progressao(int *p, int tam, int termo, int razao);

int main(){
    int *pt;

    int ti, razao, tam, i;

    

    printf("Tamanho vetor (impar): ");
    scanf("%i", &tam);
    pt = malloc(tam * sizeof(int));
    printf("Termo Inicial e Razao: ");
    scanf("%i %i",&ti, &razao);

    progressao(pt, tam, ti, razao);

    printf("- Progressao Aritmetica: ");
    
    for(i=0; i < tam; i++) {
        printf("%i ", pt[i]);
    }

}

void progressao(int *p, int tam, int termo, int razao){
    int i, c;

    int meio = tam / 2;

    p[meio] = termo;
    
    for(i = meio - 1 ,c = meio + 1; i >= 0; i--, c++){
        p[i] = p[i + 1] - razao;
        p[c] = p[c - 1] + razao;
    }
}