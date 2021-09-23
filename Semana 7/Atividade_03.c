#include <stdio.h>


int main(){
    int topo,base, tam_base, tam_topo, count;
    printf("Digite base e topo: ");
    scanf("%i %i", base, topo);

    while(base > topo){
        while(base > tam_base){
            printf("*");
        }
        printf("\n");
        count = count + 1;
        base = base -1;
    }
}