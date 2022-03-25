#include "pilha.h"
#include "fila.h"

int main() {

    int op = -1, valor;

    INIT_PILHA();
    INIT_FILA();

    while(op != 0){
        system("clear");
        printf("\n----------------------------------");
        printf("\n1 - Inserir dados na pilha");
        printf("\n2 - Inserir dados na fila");
        printf("\n3 - Remover dados da pilha");
        printf("\n4 - Remover dados da fila");
        printf("\n5 - Visualizar os dados da pilha");
        printf("\n6 - Visualizar os dados da fila");
        printf("\n0 - Sair");
        printf("\n----------------------------------");
        printf("\n> ");
        scanf("%i", &op);

        switch(op) {

            case 1:
                printf("[INSERIR - PILHA]");
                printf("\nValor: ");
                scanf("%i", &valor);

                if(PUSH(valor) == valor){

                    printf("\n[OK] Dado inserido com sucesso!");
                }

                else{

                    printf("\n[ERRO] Pilha Cheia!");
                }

                fflush(stdin);
                getchar();

            break;

            case 2:

                printf("[INSERIR - FILA]");
                printf("\nValor: ");
                scanf("%i", &valor);

                if(ENQUEUE(valor) == valor){

                    printf("\n[OK] Dado inserido com sucesso!");
                }

                else{
                    printf("\n[ERRO] Fila Cheia!");
                }

                fflush(stdin);
                getchar();
            break;

            case 3:
                printf("[REMOVER - PILHA]");

                if(POP() == -1){
                    printf("\n[ERRO] Pilha Vazia!");
                }

                fflush(stdin);
                getchar();  
            break;

            case 4:
                printf("[REMOVER - FILA]");

                if(DEQUEUE() == -1){
                    printf("\n[ERRO] Fila Vazia!");
                }

                fflush(stdin);
                getchar();
            break;

            case 5:
                VIEW_LIFO();
            break;

            case 6:
                VIEW_FIFO();
            break;
        }
    }

    printf("\n");
    return 0;
}