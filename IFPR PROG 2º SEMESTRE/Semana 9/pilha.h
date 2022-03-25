#ifndef _PILHA_
#define _PILHA_

#include <stdio.h>
#include <stdlib.h>

int pp, *pilha;

int INIT_PILHA() {

    pp = 0;
    pilha = malloc(1 * sizeof(int));

}

int PUSH(int d) {

    if(pp > 3){
        return -1;
    }
    else{

        if(pp == 0){

            INIT_PILHA();

        }
        pilha[pp] = d;
        pp++;
        pilha = realloc(pilha, pp * sizeof(int));

        return d;
    }
    
}

int POP() {

    if(pp == 0){
        return -1;
    }

    else{

        printf("\n[OK] Dado (%i) removido com sucesso!",pilha[pp-1]);
        pp--;
        pilha = realloc(pilha, pp *sizeof(int));

    }

}

void VIEW_LIFO() {
    int i;

    printf("[VISUALIZAR - PILHA]");
    if(pp == 0){
        printf("\n\nPILHA VAZIA!\n");
    }
    else{
        printf("\nPILHA:\n");
        for(i = pp - 1; i >= 0; i--){
            printf("%i\n",pilha[i]);
        }
    }
    fflush(stdin);
    getchar();
}

#endif