#include <stdio.h>

int main(){

    /*Declarando Tipos*/
    int valor;

    /*Recebendo os Valores*/
    printf("Digite um numero: ");
    scanf("%i", &valor);

    /*Processando Informações*/
    if (valor % 2 == 0){
        printf("- PAR");
    }
    else{
        printf("- IMPAR");
        }
}
