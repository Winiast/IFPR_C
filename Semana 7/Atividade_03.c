#include <stdio.h>


int main(){

    int topo,base, tam_base = 0, tam_topo = 0, count;
    
    printf("Digite base e topo: ");
    scanf("%i %i", &base, &topo);


        while(topo <= base){

            
            while(tam_base <= topo){
                printf("*");
                tam_base++;
            
            }
            tam_base = 0;
            topo++;
            printf("\n");
            base--;
        }
}


        
