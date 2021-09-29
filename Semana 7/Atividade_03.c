#include <stdio.h>


int main(){

    int topo,base, tam_base = 0, tam_topo = 0, count;
    
    printf("Digite base e topo: ");
    scanf("%i %i", &base, &topo);

    while(tam_topo < topo){

        tam_topo = tam_topo + 1;
        printf("\n");
        tam_base = 0;
        
        while(tam_base < base){
            tam_base = tam_base + 1;
            printf("*");
        }
        
}

}