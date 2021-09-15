#include <stdio.h>

int main(){

int Valor;

Valor = 0;

while(Valor != 5)
{   
    if (Valor > 5 || Valor < 0){
        printf("\nValor Invalido");
    }
    if (Valor == 1){
        printf("\n[ SAQUE ]\n");
    }
    if (Valor == 2){
        printf("\n[ DEPOSITO ]\n");
    }
    if (Valor == 3){
        printf("\n[ TRANSFERENCIA ]\n");
    }
    if (Valor == 4){
        printf("\n[ EXTRATO ]\n");
    }

    printf("1 - Saque\n");
    printf("2 - Deposito\n");
    printf("3 - Transferencia\n");
    printf("4 - Extrato\n");
    printf("5 - Sair\n");
    printf("> ");
    scanf("%i", &Valor);

}


    
}
