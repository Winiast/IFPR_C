#include <stdio.h>


int main(){

    int topo,base, tam_base = 0, tam_topo = 0, count, flag = 1;
    
    printf("Digite base e topo: ");
    scanf("%i %i", &base, &topo);

    tam_topo = 0;
    tam_base = base;

    base = base + 1;


    while(topo != base){
        
        while(topo < tam_base){
            printf(" ");
            tam_base = tam_base - 1;
        }
        tam_base = base - 1;
        
        while(tam_topo != topo){
            printf(" * ");
            tam_topo++;     
        }

        printf("\n");
        topo++;
        tam_topo = 0;
    }
}


        
