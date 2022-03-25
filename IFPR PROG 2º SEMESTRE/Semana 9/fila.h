#ifndef _FILA_
#define _FILA_

#include <stdio.h>
#include <stdlib.h>

int pf, *fila;

int INIT_FILA() {

    pf = 0;
    fila = malloc(1 * sizeof(int));

}

int ENQUEUE(int d) {

    if(pf > 3){
        return -1;
    }

    else{

        if(pf == 0){
            INIT_FILA();
        }

        fila[pf] = d;
        pf++;
        fila = realloc(fila, pf * sizeof(int));

        return d;
    }
}

int DEQUEUE() {

    int i;

    if(pf == 0){
        return -1;
    }

    else{
        printf("\n[OK] Dado (%i) removido com sucesso!",fila[0]);
        for(i = 0; i < pf; i++){
            fila[i] = fila[i + 1];
        }

        pf--;
        fila = realloc(fila, pf * sizeof(int));
    }

}

int VIEW_FIFO() {
    int i;

    printf("[VISUALIZAR - FILA]");
    if(pf == 0){
        printf("\n\nFILA VAZIA!\n");
    }

    else{
        printf("\nFILA:\n");

        for(i = 0; i < pf; i++){
            printf("%i ",fila[i]);
        }
    }

    fflush(stdin);
    getchar();
}

#endif